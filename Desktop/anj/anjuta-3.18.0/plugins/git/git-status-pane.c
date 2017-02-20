/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * anjuta
 * Copyright (C) James Liggett 2010 <jrliggett@cox.net>
 * 
 * anjuta is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * anjuta is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "git-status-pane.h"

enum
{
	COL_SELECTED,
	COL_STATUS,
	COL_PATH,
	COL_DIFF,
	COL_TYPE
};

/* Status item type flags. These help reliably determine which section a status
 * item belongs to */
typedef enum
{
	STATUS_TYPE_NONE,
	STATUS_TYPE_COMMIT,
	STATUS_TYPE_NOT_UPDATED
} StatusType;

/* Data for generating lists of selected items */
typedef struct
{
	AnjutaVcsStatus status_codes;
	GList *list;
} StatusSelectionData;

/* DND drag targets */
static GtkTargetEntry drag_target_targets[] =
{
	{
		"text/uri-list",
		0,
		0
	}
};


struct _GitStatusPanePriv
{
	GtkBuilder *builder;

	/* Iters for the two sections: Changes to be committed and Changed but not
	 * updated. Status items will be children of these two iters. */
	GtkTreePath *parents[3];

	/* Hash tables that show which items are selected in each section */
	GHashTable *selected_commit_items;
	GHashTable *selected_not_updated_items;

	/* Set of diff commands that are currently running. This set lets us know
	 * when the last diff command has finished so that we can expand the placeholders
	 * and the diffs when every command is finished. */
	GHashTable *diff_commands;

	gboolean show_diff;
};

G_DEFINE_TYPE (GitStatusPane, git_status_pane, GIT_TYPE_PANE);

static void
selected_renderer_data_func (GtkTreeViewColumn *tree_column,
                             GtkCellRenderer *renderer,
                             GtkTreeModel *model,
                             GtkTreeIter *iter,
                             gpointer user_data)
{
	gboolean selected;

	/* Don't show the checkbox on the toplevel items--these are supposed to 
	 * be placeholders to show the two sections, Changes to be committed and
	 * Changeed but not updated. */
	gtk_cell_renderer_set_visible (renderer, 
	                               gtk_tree_store_iter_depth (GTK_TREE_STORE (model), 
	                                                          iter) == 1);

	gtk_tree_model_get (model, iter, COL_SELECTED, &selected, -1);

	gtk_cell_renderer_toggle_set_active (GTK_CELL_RENDERER_TOGGLE (renderer),
	                                     selected);
}

static void
status_icon_renderer_data_func (GtkTreeViewColumn *tree_column,
                                GtkCellRenderer *renderer,
                                GtkTreeModel *model,
                                GtkTreeIter *iter,
                                gpointer user_data)
{
	
	AnjutaVcsStatus status;

	/* Don't show this renderer on placeholders */
	gtk_cell_renderer_set_visible (renderer, 
	                               gtk_tree_store_iter_depth (GTK_TREE_STORE (model), 
	                                                          iter) == 1);

	gtk_tree_model_get (model, iter, COL_STATUS, &status, -1);

	switch (status)
	{
		case ANJUTA_VCS_STATUS_MODIFIED:
			g_object_set (G_OBJECT (renderer), "stock-id", GTK_STOCK_EDIT, 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_ADDED:
			g_object_set (G_OBJECT (renderer), "stock-id", GTK_STOCK_ADD, 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_DELETED:
			g_object_set (G_OBJECT (renderer), "stock-id", GTK_STOCK_REMOVE, 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_CONFLICTED:
			g_object_set (G_OBJECT (renderer), "stock-id",  
						  GTK_STOCK_DIALOG_WARNING, NULL);
			break;
		case ANJUTA_VCS_STATUS_UPTODATE:
			g_object_set (G_OBJECT (renderer), "stock-id", GTK_STOCK_APPLY, 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_LOCKED:
			g_object_set (G_OBJECT (renderer), "stock-id",  
						  GTK_STOCK_DIALOG_AUTHENTICATION, NULL);
			break;	
		case ANJUTA_VCS_STATUS_MISSING:
			g_object_set (G_OBJECT (renderer), "stock-id",  
						  GTK_STOCK_MISSING_IMAGE, NULL);
			break;
		case ANJUTA_VCS_STATUS_UNVERSIONED:
			g_object_set (G_OBJECT (renderer), "stock-id",  
						  GTK_STOCK_DIALOG_QUESTION, NULL);
			break;
		case ANJUTA_VCS_STATUS_IGNORED:
			g_object_set (G_OBJECT (renderer), "stock-id", GTK_STOCK_STOP, 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_NONE:
		default:
			break;
	}
}

static void
status_name_renderer_data_func (GtkTreeViewColumn *tree_column,
                                GtkCellRenderer *renderer,
                                GtkTreeModel *model,
                                GtkTreeIter *iter,
                                gpointer user_data)
{
	AnjutaVcsStatus status;

	gtk_tree_model_get (model, iter, COL_STATUS, &status, -1);

	/* Don't show this renderer on placeholders */
	gtk_cell_renderer_set_visible (renderer, 
	                               gtk_tree_store_iter_depth (GTK_TREE_STORE (model), 
	                                                          iter) == 1);

	switch (status)
	{
		case ANJUTA_VCS_STATUS_MODIFIED:
			g_object_set (G_OBJECT (renderer), "text", _("Modified"), NULL);
			break;
		case ANJUTA_VCS_STATUS_ADDED:
			g_object_set (G_OBJECT (renderer), "text", _("Added"), NULL);
			break;
		case ANJUTA_VCS_STATUS_DELETED:
			g_object_set (G_OBJECT (renderer), "text", _("Deleted"), NULL);
			break;
		case ANJUTA_VCS_STATUS_CONFLICTED:
			g_object_set (G_OBJECT (renderer), "text", _("Conflicted"), 
									NULL);
			break;
		case ANJUTA_VCS_STATUS_UPTODATE:
			g_object_set (G_OBJECT (renderer), "text", _("Up-to-date"), 
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_LOCKED:
			g_object_set (G_OBJECT (renderer), "text", _("Locked"), NULL);
			break;	
		case ANJUTA_VCS_STATUS_MISSING:
			g_object_set (G_OBJECT (renderer), "text", _("Missing"), NULL);
			break;
		case ANJUTA_VCS_STATUS_UNVERSIONED:
			g_object_set (G_OBJECT (renderer), "text", _("Unversioned"), 
									NULL);
			break;
		case ANJUTA_VCS_STATUS_IGNORED:
			g_object_set (G_OBJECT (renderer), "text", _("Ignored"),
						  NULL);
			break;
		case ANJUTA_VCS_STATUS_NONE:
		default:
			break;
	}
}

static void
path_renderer_data_func (GtkTreeViewColumn *tree_column,
                         GtkCellRenderer *renderer,
                         GtkTreeModel *model,
                         GtkTreeIter *iter,
                         gpointer user_data)
{
	gchar *path;
	gchar *placeholder;

	gtk_tree_model_get (model, iter, COL_PATH, &path, -1);

	/* Don't show this column on diffs */
	gtk_cell_renderer_set_visible (renderer,
	                               gtk_tree_store_iter_depth (GTK_TREE_STORE (model),
	                                                          iter)  != 2);

	/* Use the path column to show placeholders as well */
	if (gtk_tree_store_iter_depth (GTK_TREE_STORE (model), iter) == 0)
	{
		placeholder = g_strdup_printf ("<b>%s</b>", path); 
		
		g_object_set (G_OBJECT (renderer), "markup", placeholder, NULL);

		g_free (placeholder);
	}
	else
		g_object_set (G_OBJECT (renderer), "text", path, NULL);

	g_free (path);
	
}

static void
git_status_pane_set_path_selection_state (GitStatusPane *self,  
                                          const gchar *path, 
                                          AnjutaVcsStatus status, 
                                          StatusType type, gboolean state)
{
	GHashTable *selection_table;

	switch (type)
	{
		case STATUS_TYPE_COMMIT:
			selection_table = self->priv->selected_commit_items;
			break;
		case STATUS_TYPE_NOT_UPDATED:
			selection_table = self->priv->selected_not_updated_items;
			break;
		default:
			return;
			break;
	}

	if (state)
	{
		g_hash_table_insert (selection_table, g_strdup (path), 
		                     GINT_TO_POINTER (status));
	}
	else
		g_hash_table_remove (selection_table, path);
}

static void
on_selected_renderer_toggled (GtkCellRendererToggle *renderer, gchar *tree_path,
                              GitStatusPane *self)
{
	GtkTreeModel *status_model;
	GtkTreeIter iter;
	gboolean selected;
	AnjutaVcsStatus status;
	gchar *path;
	StatusType type;
	
	status_model = GTK_TREE_MODEL (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));

	gtk_tree_model_get_iter_from_string (GTK_TREE_MODEL (status_model), &iter,
	                                     tree_path);
	gtk_tree_model_get (status_model, &iter, 
	                    COL_SELECTED, &selected,
	                    COL_STATUS, &status,
	                    COL_PATH, &path,
	                    COL_TYPE, &type,
	                    -1);

	selected = !selected;

	gtk_tree_store_set (GTK_TREE_STORE (status_model), &iter,
	                    COL_SELECTED, selected,
	                    -1);

	git_status_pane_set_path_selection_state (self, path, status, type, 
	                                          selected);

	g_free (path);
}

static void 
git_status_pane_expand_placeholders (GitStatusPane *self)
{
	GtkTreeView *status_view;

	if (self->priv->parents[STATUS_TYPE_COMMIT] && 
	    self->priv->parents[STATUS_TYPE_NOT_UPDATED])
	{
		status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
		                                                     "status_view"));

		gtk_tree_view_expand_row (status_view, self->priv->parents[STATUS_TYPE_COMMIT], 
		                          self->priv->show_diff);
		gtk_tree_view_expand_row (status_view, self->priv->parents[STATUS_TYPE_NOT_UPDATED], 
		                          self->priv->show_diff);
	}
}

static void
git_status_pane_set_model (GitStatusPane *self)
{
	GtkTreeView *status_view;
	GtkTreeModel *status_model;

	status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
	                                                     "status_view"));
	status_model = GTK_TREE_MODEL (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));

	gtk_tree_view_set_model (status_view, status_model);
	git_status_pane_expand_placeholders (self);
	
}

static void
on_diff_command_finished (AnjutaCommand *command, guint return_code, 
                          GitStatusPane *self)
{
	GtkTreeModel *status_model;
	GtkTreePath *parent_path;
	GtkTreeIter parent_iter;
	GtkTreeIter iter;
	GQueue *output;
	gchar *output_line;

	if (return_code == 0)
	{
		status_model = g_object_get_data (G_OBJECT (command), "model");
		parent_path = g_object_get_data (G_OBJECT (command), "parent-path");
		gtk_tree_model_get_iter (status_model, &parent_iter, parent_path);
		output = git_raw_output_command_get_output (GIT_RAW_OUTPUT_COMMAND (command));

		while (g_queue_peek_head (output))
		{
			output_line = g_queue_pop_head (output);
			gtk_tree_store_append (GTK_TREE_STORE (status_model), &iter, &parent_iter);
			gtk_tree_store_set (GTK_TREE_STORE (status_model), &iter, 
			                    COL_DIFF, output_line, 
			                    -1);

			g_free (output_line);
		}

		

		g_hash_table_remove (self->priv->diff_commands, command);
		
		if (g_hash_table_size (self->priv->diff_commands) == 0)
			git_status_pane_set_model (self);
	}
}

static GtkTreePath *
add_status_item (GtkTreeStore *status_model, const gchar *path,  
                 AnjutaVcsStatus status, GtkTreePath *parent, StatusType type)
{
	GtkTreeIter parent_iter;
	GtkTreeIter iter;

	g_return_val_if_fail (parent, NULL);
	g_return_val_if_fail (status != ANJUTA_VCS_STATUS_NONE, NULL);

	gtk_tree_model_get_iter (GTK_TREE_MODEL (status_model), &parent_iter, 
	                         parent);
	gtk_tree_store_append (status_model, &iter, &parent_iter);
	gtk_tree_store_set (status_model, &iter,
	                    COL_SELECTED, FALSE,
	                    COL_STATUS, status,
	                    COL_PATH, path,
	                    COL_TYPE, type,
	                    -1);

	return gtk_tree_model_get_path (GTK_TREE_MODEL (status_model), &iter);
}

static void
setup_diff_command (GitStatusPane *self, const gchar *working_directory,
                    const gchar *path, AnjutaVcsStatus status, StatusType type,
                    const GtkTreePath *parent_path)
{
	GtkTreeModel *status_model;
	GitDiffCommand *diff_command;

	g_return_if_fail (type != STATUS_TYPE_NONE);

	status_model = GTK_TREE_MODEL (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));
	if (status != ANJUTA_VCS_STATUS_DELETED)
	{
		diff_command = git_diff_command_new (working_directory, path,
		                                     type == STATUS_TYPE_NOT_UPDATED ? GIT_DIFF_WORKING_TREE : GIT_DIFF_INDEX);

		g_signal_connect (G_OBJECT (diff_command), "command-finished",
		                  G_CALLBACK (on_diff_command_finished),
		                  self);

		g_signal_connect (G_OBJECT (diff_command), "command-finished",
		                  G_CALLBACK (g_object_unref),
		                  NULL);

		g_object_set_data_full (G_OBJECT (diff_command), "parent-path", 
		                        gtk_tree_path_copy (parent_path),
		                        (GDestroyNotify) gtk_tree_path_free);

		g_object_set_data (G_OBJECT (diff_command), "model", status_model);
		g_hash_table_insert (self->priv->diff_commands, diff_command, NULL);
	}
}

static void
git_status_pane_add_status_items (GitStatusPane *self, 
                                  GitStatusCommand *status_command)
{
	GtkTreeStore *status_model;
	gchar *working_directory;
	GQueue *output;
	GitStatus *status_object;
	AnjutaVcsStatus index_status;
	AnjutaVcsStatus working_tree_status;
	gchar *path;
	GtkTreePath *tree_path;

	status_model = GTK_TREE_STORE (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));

	g_object_get (G_OBJECT (status_command), "working-directory", &working_directory, 
	              NULL);

	output = git_status_command_get_status_queue (status_command);

	while (g_queue_peek_head (output))
	{
		status_object = g_queue_pop_head (output);
		index_status = git_status_get_index_status (status_object);
		working_tree_status = git_status_get_working_tree_status (status_object);
		path = git_status_get_path (status_object);

		if (index_status != ANJUTA_VCS_STATUS_NONE)
		{
			if (!(index_status & (ANJUTA_VCS_STATUS_CONFLICTED | ANJUTA_VCS_STATUS_UNVERSIONED)))
			{
				tree_path = add_status_item (status_model, path, index_status,
				                             self->priv->parents[STATUS_TYPE_COMMIT],
				                             STATUS_TYPE_COMMIT);

				setup_diff_command (self, working_directory, path, index_status, 
				                    STATUS_TYPE_COMMIT, tree_path);
				gtk_tree_path_free (tree_path);
			}
		}


		if (working_tree_status != ANJUTA_VCS_STATUS_NONE)
		{
			if (!(working_tree_status & (ANJUTA_VCS_STATUS_CONFLICTED | ANJUTA_VCS_STATUS_UNVERSIONED)))
			{
				tree_path = add_status_item (status_model, path, working_tree_status, 
				                             self->priv->parents[STATUS_TYPE_NOT_UPDATED],
				                             STATUS_TYPE_NOT_UPDATED);

				setup_diff_command (self, working_directory, path, index_status, 
				                    STATUS_TYPE_NOT_UPDATED, tree_path);
				gtk_tree_path_free (tree_path);
			}
		}
		
		g_free (path);
		g_object_unref (status_object);
	}

	g_free (working_directory);
}

static void
on_status_command_data_arrived (AnjutaCommand *command, 
                                GitStatusPane *self)
{
	git_status_pane_add_status_items (self, 
	                                  GIT_STATUS_COMMAND (command));
}

static void
on_status_command_finished (AnjutaCommand *command, guint return_code,
                            GitStatusPane *self)
{
	if (g_hash_table_size (self->priv->diff_commands) > 0)
	{
		g_hash_table_foreach (self->priv->diff_commands, 
		                      (GHFunc) anjuta_command_start, NULL);
	}
	else
		git_status_pane_set_model (self);
}

static void
git_status_pane_clear (GitStatusPane *self)
{
	GtkTreeView *status_view;
	GtkTreeStore *status_model;
	GtkTreeIter iter;

	status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
	                                                     "status_view"));
	status_model = GTK_TREE_STORE (gtk_builder_get_object (self->priv->builder,	
	                                                       "status_model"));

	/* Clear any existing model data and create the placeholders */
	gtk_tree_view_set_model (status_view, NULL);
	gtk_tree_store_clear (status_model);

	gtk_tree_path_free (self->priv->parents[STATUS_TYPE_COMMIT]);
	gtk_tree_path_free (self->priv->parents[STATUS_TYPE_NOT_UPDATED]);
	
	gtk_tree_store_append (status_model, &iter, NULL);
	gtk_tree_store_set (status_model, &iter, 
	                    COL_PATH, _("Changes to be committed"), 
	                    COL_SELECTED, FALSE,
	                    COL_STATUS, ANJUTA_VCS_STATUS_NONE,
	                    COL_TYPE, STATUS_TYPE_NONE,
	                    -1);
	
	self->priv->parents[STATUS_TYPE_COMMIT] = gtk_tree_model_get_path (GTK_TREE_MODEL (status_model), &iter);

	gtk_tree_store_append (status_model, &iter, NULL);
	gtk_tree_store_set (status_model, &iter, 
	                    COL_PATH, _("Changed but not updated"), 
	                    COL_SELECTED, FALSE, 
	                    COL_STATUS, ANJUTA_VCS_STATUS_NONE,
	                    COL_TYPE, STATUS_TYPE_NONE,
	                    -1);

	self->priv->parents[STATUS_TYPE_NOT_UPDATED] = gtk_tree_model_get_path (GTK_TREE_MODEL (status_model), &iter);

	g_hash_table_remove_all (self->priv->selected_commit_items);
	g_hash_table_remove_all (self->priv->selected_not_updated_items);
}

static void
git_status_pane_set_selected_column_state (GitStatusPane *self, 
                                           StatusType type, 
                                           gboolean state)
{
	GtkTreeModel *status_model;
	GtkTreeIter parent_iter;
	gint i;
	GtkTreeIter iter;
	gchar *path;
	AnjutaVcsStatus status;

	g_return_if_fail (type != STATUS_TYPE_NONE);

	status_model = GTK_TREE_MODEL (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));

	gtk_tree_model_get_iter (status_model, &parent_iter, 
	                         self->priv->parents[type]);
	
	i = 0;

	while (gtk_tree_model_iter_nth_child (status_model, &iter, &parent_iter,
	                                      i++))
	{
		gtk_tree_store_set (GTK_TREE_STORE (status_model), &iter, 
		                    COL_SELECTED, state, 
		                    -1);

		gtk_tree_model_get (status_model, &iter,
		                    COL_PATH, &path,
		                    COL_STATUS, &status,
		                    -1);

		git_status_pane_set_path_selection_state (self, path, status, type,
		                                          state);

		g_free (path);
	}
}

static void
on_select_all_button_clicked (GtkButton *button, GitStatusPane *self)
{
	git_status_pane_set_selected_column_state (self, STATUS_TYPE_COMMIT, TRUE);
	git_status_pane_set_selected_column_state (self, STATUS_TYPE_NOT_UPDATED, 
	                                           TRUE);
}

static void
on_clear_button_clicked (GtkButton *button, GitStatusPane *self)
{
	git_status_pane_set_selected_column_state (self, STATUS_TYPE_COMMIT, FALSE);
	git_status_pane_set_selected_column_state (self, STATUS_TYPE_NOT_UPDATED, 
	                                           FALSE);
}

static void
on_status_view_drag_data_received (GtkWidget *widget,
                            	   GdkDragContext *context, gint x, gint y,
                                   GtkSelectionData *data, guint target_type,
                                   guint time, GitStatusPane *self)
{
	Git *plugin;
	gboolean success;
	gchar **uri_list;
	int i;
	GFile *file;
	gchar *path;
	GList *paths;
	GitAddCommand *add_command;

	plugin = ANJUTA_PLUGIN_GIT (anjuta_dock_pane_get_plugin (ANJUTA_DOCK_PANE (self)));
	success = FALSE;
	path = NULL;
	paths = NULL;

	if ((data != NULL) && 
	    (gtk_selection_data_get_length (data) >= 0))
	{
		if (target_type == 0)
		{
			uri_list = gtk_selection_data_get_uris (data);

			for (i = 0; uri_list[i]; i++)
			{
				file = g_file_new_for_uri (uri_list[i]);
				path = g_file_get_path (file);

				if (path && !g_file_test (path, G_FILE_TEST_IS_DIR))
				{
					paths = g_list_append (paths, 
					                       g_strdup (path +
					                                 strlen (plugin->project_root_directory) + 1));
				}

				g_free (path);
				g_object_unref (file);
			}


			add_command = git_add_command_new_list (plugin->project_root_directory,
			                                        paths, FALSE);

			g_signal_connect (G_OBJECT (add_command), "command-finished",
			                  G_CALLBACK (g_object_unref),
			                  NULL);

			anjuta_command_start (ANJUTA_COMMAND (add_command));
			success = TRUE;

			anjuta_util_glist_strings_free (paths);
			g_strfreev (uri_list);
		}
	}

	/* Do not delete source data */
	gtk_drag_finish (context, success, FALSE, time);
}

static gboolean
on_status_view_drag_drop (GtkWidget *widget, GdkDragContext *context, 
                   		  gint x, gint y, guint time,
                   		  GitStatusPane *self)
{
	GdkAtom target_type;

	target_type = gtk_drag_dest_find_target (widget, context, NULL);

	if (target_type != GDK_NONE)
		gtk_drag_get_data (widget, context, target_type, time);
	else
		gtk_drag_finish (context, FALSE, FALSE, time);

	return TRUE;
}

static gboolean
on_status_view_button_press_event (GtkWidget *widget, GdkEvent *event,
                                   GitStatusPane *self)
{
	GdkEventButton *button_event;
	AnjutaPlugin *plugin;
	AnjutaUI *ui;
	GtkTreeView *status_view;
	GtkTreePath *path;
	gboolean path_valid;
	GtkTreeModel *status_model;
	GtkTreeIter iter;
	StatusType status_type;
	GtkMenu *menu;
	gboolean ret = FALSE;;

	button_event = (GdkEventButton *) event;
	status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
	                                                     "status_view"));
	status_model = GTK_TREE_MODEL (gtk_builder_get_object (self->priv->builder,
	                                                       "status_model"));
	path_valid = gtk_tree_view_get_path_at_pos (status_view, 
	                                            button_event->x, button_event->y,
	                                  			&path, NULL, NULL, NULL);
	menu = NULL;
	
	
	if (button_event->type == GDK_BUTTON_PRESS && button_event->button == 3)
	{
		plugin = anjuta_dock_pane_get_plugin (ANJUTA_DOCK_PANE (self));
		ui = anjuta_shell_get_ui (plugin->shell, NULL);
		

		if (path_valid && gtk_tree_model_get_iter (status_model, &iter, path))
		{
			gtk_tree_model_get (status_model, &iter, COL_TYPE, &status_type, 
			                    -1);

			if (status_type == STATUS_TYPE_COMMIT)
			{
				menu = GTK_MENU (gtk_ui_manager_get_widget (GTK_UI_MANAGER (ui),
				                              			    "/GitStatusCommitPopup"));
			}
			else if (status_type == STATUS_TYPE_NOT_UPDATED)
			{
				menu = GTK_MENU (gtk_ui_manager_get_widget (GTK_UI_MANAGER (ui),
				                              				"/GitStatusNotUpdatedPopup"));
			}

			if (menu)
			{
				gtk_menu_popup (menu, NULL, NULL, NULL, NULL, button_event->button, 
				                button_event->time);
			}
		}
	}

	if (path_valid)
	{
		/* Don't forward key events to diff columns */
		ret = gtk_tree_path_get_depth (path) == 3;

		gtk_tree_path_free (path);
	}

	return ret;
}

static gboolean
on_status_view_row_selected (GtkTreeSelection *selection, 
                             GtkTreeModel *model,
                             GtkTreePath *path,
                             gboolean path_currently_selected,
                             gpointer user_data)
{
	return gtk_tree_path_get_depth (path) == 2;
}

static void
on_status_diff_button_toggled (GtkToggleButton *button, GitStatusPane *self)
{
	GtkTreeView *status_view;

	self->priv->show_diff = gtk_toggle_button_get_active (button);

	if (!self->priv->show_diff)
	{
		status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
		                                                     "status_view"));

		gtk_tree_view_collapse_all (status_view);
	}

	git_status_pane_expand_placeholders (self);
}                                 

static void
git_status_pane_init (GitStatusPane *self)
{
	gchar *objects[] = {"status_pane",
						"status_model",
						NULL};
	GError *error = NULL;
	GtkTreeView *status_view;
	GtkTreeViewColumn *status_column;
	GtkCellRenderer *selected_renderer;
	GtkCellRenderer *status_icon_renderer;
	GtkCellRenderer *status_name_renderer;
	GtkCellRenderer *path_renderer;
	GtkCellRenderer *diff_renderer;
	GtkTreeSelection *selection;
	GtkWidget *status_diff_button;
	GtkWidget *refresh_button;
	GtkWidget *select_all_button;
	GtkWidget *clear_button;

	self->priv = g_new0 (GitStatusPanePriv, 1);
	self->priv->builder = gtk_builder_new ();
	self->priv->selected_commit_items = g_hash_table_new_full (g_str_hash, 
	                                                           g_str_equal,
	                                                           g_free, 
	                                                           NULL);
	self->priv->selected_not_updated_items = g_hash_table_new_full (g_str_hash,
	                                                                g_str_equal,
	                                                                g_free,
	                                                                NULL);
	self->priv->diff_commands = g_hash_table_new (g_direct_hash, g_direct_equal);
	
	if (!gtk_builder_add_objects_from_file (self->priv->builder, BUILDER_FILE, 
	                                        objects, 
	                                        &error))
	{
		g_warning ("Couldn't load builder file: %s", error->message);
		g_error_free (error);
	}

	status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
	                                                     "status_view"));
	status_column = GTK_TREE_VIEW_COLUMN (gtk_builder_get_object (self->priv->builder,
	                                                              "status_column"));
	selected_renderer = GTK_CELL_RENDERER (gtk_builder_get_object (self->priv->builder,
	                                   							   "selected_renderer"));
	status_icon_renderer = GTK_CELL_RENDERER (gtk_builder_get_object (self->priv->builder,
	                                                                  "status_icon_renderer"));
	status_name_renderer = GTK_CELL_RENDERER (gtk_builder_get_object (self->priv->builder,
	                                                                  "status_name_renderer"));
	path_renderer = GTK_CELL_RENDERER (gtk_builder_get_object (self->priv->builder,
	                                                           "path_renderer"));
	diff_renderer = anjuta_cell_renderer_diff_new ();
	status_diff_button = GTK_WIDGET (gtk_builder_get_object (self->priv->builder,
	                                                         "status_diff_button"));
	refresh_button = GTK_WIDGET (gtk_builder_get_object (self->priv->builder,
	                                                     "refresh_button"));
	select_all_button = GTK_WIDGET (gtk_builder_get_object (self->priv->builder,
	                                                        "select_all_button"));
	clear_button = GTK_WIDGET (gtk_builder_get_object (self->priv->builder,
	                                                   "clear_button"));
										   
	gtk_tree_view_column_set_cell_data_func (status_column, selected_renderer,
	                                         (GtkTreeCellDataFunc) selected_renderer_data_func,
	                                         NULL, NULL);

	gtk_tree_view_column_set_cell_data_func (status_column, status_icon_renderer,
	                                         (GtkTreeCellDataFunc) status_icon_renderer_data_func,
	                                         NULL, NULL);

	gtk_tree_view_column_set_cell_data_func (status_column, status_name_renderer,
	                                         (GtkTreeCellDataFunc) status_name_renderer_data_func,
	                                         NULL, NULL);

	gtk_tree_view_column_set_cell_data_func (status_column, path_renderer,
	                                         (GtkTreeCellDataFunc) path_renderer_data_func,
	                                         NULL, NULL);

	gtk_tree_view_column_pack_start (status_column, diff_renderer, TRUE);
	gtk_tree_view_column_add_attribute (status_column, diff_renderer, "diff", COL_DIFF);
	
	g_signal_connect (G_OBJECT (selected_renderer), "toggled",
	                  G_CALLBACK (on_selected_renderer_toggled),
	                  self);

	g_signal_connect (G_OBJECT (status_diff_button), "toggled",
	                  G_CALLBACK (on_status_diff_button_toggled),
	                  self);

	/* Don't allow the user to select any row that doesn't have a path,
	 * such as the placeholders or diff rows */
	selection = gtk_tree_view_get_selection (status_view);
	gtk_tree_selection_set_select_function (selection, 
	                                        on_status_view_row_selected,
	                                        NULL, NULL);

	g_signal_connect_swapped (G_OBJECT (refresh_button), "clicked",
	                          G_CALLBACK (anjuta_dock_pane_refresh),
	                          self);

	g_signal_connect (G_OBJECT (select_all_button), "clicked",
	                  G_CALLBACK (on_select_all_button_clicked),
	                  self);

	g_signal_connect (G_OBJECT (clear_button), "clicked",
	                  G_CALLBACK (on_clear_button_clicked),
	                  self);

	/* DND */
	gtk_drag_dest_set (GTK_WIDGET (status_view), 
	                   GTK_DEST_DEFAULT_MOTION | GTK_DEST_DEFAULT_HIGHLIGHT, 
	                   drag_target_targets,
	                   G_N_ELEMENTS (drag_target_targets), 
	                   GDK_ACTION_COPY | GDK_ACTION_MOVE);
	
	g_signal_connect (G_OBJECT (status_view), "drag-drop",
	                  G_CALLBACK (on_status_view_drag_drop),
	                  self);

	g_signal_connect (G_OBJECT (status_view), "drag-data-received",
	                  G_CALLBACK (on_status_view_drag_data_received),
	                  self);

	/* Popup menus */
	g_signal_connect (G_OBJECT (status_view), "button-press-event",
	                  G_CALLBACK (on_status_view_button_press_event),
	                  self);
}

static void
git_status_pane_finalize (GObject *object)
{
	GitStatusPane *self;

	self = GIT_STATUS_PANE (object);

	g_object_unref (self->priv->builder);
	gtk_tree_path_free (self->priv->parents[STATUS_TYPE_COMMIT]);
	gtk_tree_path_free (self->priv->parents[STATUS_TYPE_NOT_UPDATED]);
	g_hash_table_destroy (self->priv->selected_commit_items);
	g_hash_table_destroy (self->priv->selected_not_updated_items);
	g_hash_table_destroy (self->priv->diff_commands);
	g_free (self->priv);

	G_OBJECT_CLASS (git_status_pane_parent_class)->finalize (object);
}

static void
git_status_pane_refresh (AnjutaDockPane *pane)
{
	GitStatusPane *self;
	Git *plugin;

	self = GIT_STATUS_PANE (pane);
	plugin = ANJUTA_PLUGIN_GIT (anjuta_dock_pane_get_plugin (pane));

	/* Don't refresh again if another refresh is still in progress */
	if (g_hash_table_size (self->priv->diff_commands) == 0)
		anjuta_command_start (ANJUTA_COMMAND (plugin->status_command));
	
}

static GtkWidget *
git_status_pane_get_widget (AnjutaDockPane *pane)
{
	GitStatusPane *self;

	self = GIT_STATUS_PANE (pane);

	return GTK_WIDGET (gtk_builder_get_object (self->priv->builder,
	                                           "status_pane"));
}

static void
git_status_pane_class_init (GitStatusPaneClass *klass)
{
	GObjectClass* object_class = G_OBJECT_CLASS (klass);
	AnjutaDockPaneClass* pane_class = ANJUTA_DOCK_PANE_CLASS (klass);

	object_class->finalize = git_status_pane_finalize;
	pane_class->refresh = git_status_pane_refresh;
	pane_class->get_widget = git_status_pane_get_widget;
}

AnjutaDockPane *
git_status_pane_new (Git *plugin)
{
	GitStatusPane *self;
	GObject *status_diff_button;

	self = g_object_new (GIT_TYPE_STATUS_PANE, "plugin", plugin, NULL);
	status_diff_button = gtk_builder_get_object (self->priv->builder, 
	                                             "status_diff_button");

	g_signal_connect_swapped (G_OBJECT (plugin->status_command), 
	                          "command-started",
	                          G_CALLBACK (git_status_pane_clear),
	                          self);

	g_signal_connect (G_OBJECT (plugin->status_command),
	                  "command-finished",
	                  G_CALLBACK (on_status_command_finished),
	                  self);

	g_signal_connect (G_OBJECT (plugin->status_command),
	                  "data-arrived",
	                  G_CALLBACK (on_status_command_data_arrived),
	                  self);

	g_settings_bind (plugin->settings, "show-status-diff",
	                 status_diff_button, "active", G_SETTINGS_BIND_DEFAULT);

	return ANJUTA_DOCK_PANE (self);
}

static void
selected_items_table_foreach (gchar *path, gpointer status, 
                              StatusSelectionData *data)
{
	if (GPOINTER_TO_INT (status) & data->status_codes)
		data->list = g_list_append (data->list, g_strdup (path));
}

GList *
git_status_pane_get_checked_commit_items (GitStatusPane *self,
                                          AnjutaVcsStatus status_codes)
{
	StatusSelectionData data;

	data.status_codes = status_codes;
	data.list = NULL;

	g_hash_table_foreach (self->priv->selected_commit_items, 
	                      (GHFunc) selected_items_table_foreach,
	                      &data);

	return data.list;
}

GList *
git_status_pane_get_checked_not_updated_items (GitStatusPane *self,
                                               AnjutaVcsStatus status_codes)
{
	StatusSelectionData data;

	data.status_codes = status_codes;
	data.list = NULL;

	g_hash_table_foreach (self->priv->selected_not_updated_items, 
	                      (GHFunc) selected_items_table_foreach,
	                      &data);

	return data.list;
}

GList *
git_status_pane_get_all_checked_items (GitStatusPane *self,
                                       AnjutaVcsStatus status_codes)
{
	StatusSelectionData data;

	data.status_codes = status_codes;
	data.list = NULL;

	g_hash_table_foreach (self->priv->selected_commit_items, 
	                      (GHFunc) selected_items_table_foreach,
	                      &data);

	g_hash_table_foreach (self->priv->selected_not_updated_items, 
	                      (GHFunc) selected_items_table_foreach,
	                      &data);

	return data.list;
}

static gchar *
git_status_pane_get_selected_path (GitStatusPane *self, StatusType type)
{
	gchar *path;
	GtkTreeView *status_view;
	GtkTreeSelection *selection;
	GtkTreeModel *status_model;
	GtkTreeIter iter;
	StatusType selected_type;

	path = NULL;
	status_view = GTK_TREE_VIEW (gtk_builder_get_object (self->priv->builder,
	                                                     "status_view"));
	selection = gtk_tree_view_get_selection (status_view);

	if (gtk_tree_selection_get_selected (selection, &status_model, &iter))
	{
		gtk_tree_model_get (status_model, &iter, COL_TYPE, &selected_type, -1);

		if (type == selected_type)
			gtk_tree_model_get (status_model, &iter, COL_PATH, &path, -1);
	}

	return path;
}

gchar *
git_status_pane_get_selected_commit_path (GitStatusPane *self)
{
	return git_status_pane_get_selected_path (self, STATUS_TYPE_COMMIT);
}

gchar *
git_status_pane_get_selected_not_updated_path (GitStatusPane *self)
{
	return git_status_pane_get_selected_path (self, STATUS_TYPE_NOT_UPDATED);
}
