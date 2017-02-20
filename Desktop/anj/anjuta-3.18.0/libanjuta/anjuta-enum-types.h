


#ifndef __ANJUTA_ENUM_TYPES_H__
#define __ANJUTA_ENUM_TYPES_H__

#include <libanjuta/libanjuta.h>

G_BEGIN_DECLS
/* enumerations from "anjuta-shell.h" */
GType anjuta_shell_error_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_SHELL_ERROR (anjuta_shell_error_get_type())
GType anjuta_shell_placement_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_SHELL_PLACEMENT (anjuta_shell_placement_get_type())
/* enumerations from "anjuta-convert.h" */
GType anjuta_convert_error_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_CONVERT_ERROR (anjuta_convert_error_get_type())
/* enumerations from "anjuta-plugin-description.h" */
GType anjuta_plugin_description_parse_error_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PLUGIN_DESCRIPTION_PARSE_ERROR (anjuta_plugin_description_parse_error_get_type())
/* enumerations from "anjuta-plugin-manager.h" */
GType anjuta_plugin_manager_error_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PLUGIN_MANAGER_ERROR (anjuta_plugin_manager_error_get_type())
/* enumerations from "anjuta-profile.h" */
GType anjuta_profile_error_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PROFILE_ERROR (anjuta_profile_error_get_type())
/* enumerations from "anjuta-launcher.h" */
GType anjuta_launcher_output_type_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_LAUNCHER_OUTPUT_TYPE (anjuta_launcher_output_type_get_type())
/* enumerations from "anjuta-session.h" */
GType anjuta_session_phase_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_SESSION_PHASE (anjuta_session_phase_get_type())
/* enumerations from "anjuta-serializer.h" */
GType anjuta_serializer_mode_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_SERIALIZER_MODE (anjuta_serializer_mode_get_type())
/* enumerations from "anjuta-vcs-status.h" */
GType anjuta_vcs_status_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_VCS_STATUS (anjuta_vcs_status_get_type())
/* enumerations from "anjuta-project.h" */
GType anjuta_project_value_type_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PROJECT_VALUE_TYPE (anjuta_project_value_type_get_type())
GType anjuta_project_property_flags_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PROJECT_PROPERTY_FLAGS (anjuta_project_property_flags_get_type())
GType anjuta_project_node_type_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PROJECT_NODE_TYPE (anjuta_project_node_type_get_type())
GType anjuta_project_node_state_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_PROJECT_NODE_STATE (anjuta_project_node_state_get_type())
/* enumerations from "anjuta-command-queue.h" */
GType anjuta_command_queue_execute_mode_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_COMMAND_QUEUE_EXECUTE_MODE (anjuta_command_queue_execute_mode_get_type())
/* enumerations from "anjuta-command-bar.h" */
GType anjuta_command_bar_entry_type_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_COMMAND_BAR_ENTRY_TYPE (anjuta_command_bar_entry_type_get_type())
/* enumerations from "anjuta-token.h" */
GType anjuta_token_type_get_type (void) G_GNUC_CONST;
#define ANJUTA_TYPE_TOKEN_TYPE (anjuta_token_type_get_type())
G_END_DECLS

#endif /* __ANJUTA_ENUM_TYPES_H__ */



