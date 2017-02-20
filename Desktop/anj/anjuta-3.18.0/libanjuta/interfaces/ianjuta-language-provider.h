/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 *  ianjuta-language-provider.h -- Autogenerated from libanjuta.idl
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _IANJUTA_LANGUAGE_PROVIDER_H_
#define _IANJUTA_LANGUAGE_PROVIDER_H_

#include <glib-object.h>
#include <libanjuta/interfaces/ianjuta-editor.h>
#include <libanjuta/interfaces/ianjuta-iterable.h>
#include <libanjuta/interfaces/ianjuta-symbol.h>
#include <libanjuta/interfaces/ianjuta-provider.h>

G_BEGIN_DECLS

#define IANJUTA_TYPE_LANGUAGE_PROVIDER (ianjuta_language_provider_get_type ())
#define IANJUTA_LANGUAGE_PROVIDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), IANJUTA_TYPE_LANGUAGE_PROVIDER, IAnjutaLanguageProvider))
#define IANJUTA_IS_LANGUAGE_PROVIDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), IANJUTA_TYPE_LANGUAGE_PROVIDER))
#define IANJUTA_LANGUAGE_PROVIDER_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), IANJUTA_TYPE_LANGUAGE_PROVIDER, IAnjutaLanguageProviderIface))

#define IANJUTA_LANGUAGE_PROVIDER_ERROR ianjuta_language_provider_error_quark()

/**
 * IANJUTA_LANGUAGE_PROVIDER_PREF_CALLTIP_ENABLE:
 *
 * Boolean key, true is calltips has to be shown.
 */
#define	IANJUTA_LANGUAGE_PROVIDER_PREF_CALLTIP_ENABLE	"calltip-enable"

/**
 * IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_ENABLE:
 *
 * Boolean key, true is code completion is enable.
 */
#define	IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_ENABLE	"completion-enable"

/**
 * IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_SPACE_AFTER_FUNC:
 *
 * Boolean key, true is adding a space after function call autocompletion
 */
#define	IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_SPACE_AFTER_FUNC	"completion-space-after-func"

/**
 * IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_BRACE_AFTER_FUNC:
 *
 * Boolean key, true is adding '(' after function call autocompletion
 */
#define	IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_BRACE_AFTER_FUNC	"completion-brace-after-func"

/**
 * IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_CLOSEBRACE_AFTER_FUNC:
 *
 * Boolean key, true is adding ')' after function call autocompletion
 */
#define	IANJUTA_LANGUAGE_PROVIDER_PREF_AUTOCOMPLETE_CLOSEBRACE_AFTER_FUNC	"completion-closebrace-after-func"


typedef struct _IAnjutaLanguageProvider IAnjutaLanguageProvider;
typedef struct _IAnjutaLanguageProviderIface IAnjutaLanguageProviderIface;


struct _IAnjutaLanguageProviderIface {
	IAnjutaProviderIface g_iface;
	

	GList* (*get_calltip_cache) (IAnjutaLanguageProvider *obj, gchar* call_context, GError **err);
	gchar* (*get_calltip_context) (IAnjutaLanguageProvider *obj, IAnjutaIterable* iter, GError **err);
	void (*new_calltip) (IAnjutaLanguageProvider *obj, gchar* call_context,  IAnjutaIterable* iter, GError **err);
	IAnjutaIterable* (*populate_completions) (IAnjutaLanguageProvider *obj, IAnjutaIterable* iter, GError **err);

};


GQuark ianjuta_language_provider_error_quark     (void);
GType  ianjuta_language_provider_get_type        (void);

GList* ianjuta_language_provider_get_calltip_cache (IAnjutaLanguageProvider *obj, gchar* call_context, GError **err);

gchar* ianjuta_language_provider_get_calltip_context (IAnjutaLanguageProvider *obj, IAnjutaIterable* iter, GError **err);

void ianjuta_language_provider_new_calltip (IAnjutaLanguageProvider *obj, gchar* call_context,  IAnjutaIterable* iter, GError **err);

IAnjutaIterable* ianjuta_language_provider_populate_completions (IAnjutaLanguageProvider *obj, IAnjutaIterable* iter, GError **err);


G_END_DECLS

#endif