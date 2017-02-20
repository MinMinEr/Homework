


#include "anjuta-enum-types.h"

/* enumerations from "anjuta-shell.h" */
GType
anjuta_shell_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_SHELL_ERROR_DOESNT_EXIST, "ANJUTA_SHELL_ERROR_DOESNT_EXIST", "exist" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaShellError"), values);
  }
  return etype;
}
GType
anjuta_shell_placement_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_SHELL_PLACEMENT_NONE, "ANJUTA_SHELL_PLACEMENT_NONE", "none" },
      { ANJUTA_SHELL_PLACEMENT_TOP, "ANJUTA_SHELL_PLACEMENT_TOP", "top" },
      { ANJUTA_SHELL_PLACEMENT_BOTTOM, "ANJUTA_SHELL_PLACEMENT_BOTTOM", "bottom" },
      { ANJUTA_SHELL_PLACEMENT_RIGHT, "ANJUTA_SHELL_PLACEMENT_RIGHT", "right" },
      { ANJUTA_SHELL_PLACEMENT_LEFT, "ANJUTA_SHELL_PLACEMENT_LEFT", "left" },
      { ANJUTA_SHELL_PLACEMENT_CENTER, "ANJUTA_SHELL_PLACEMENT_CENTER", "center" },
      { ANJUTA_SHELL_PLACEMENT_FLOATING, "ANJUTA_SHELL_PLACEMENT_FLOATING", "floating" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaShellPlacement"), values);
  }
  return etype;
}

/* enumerations from "anjuta-convert.h" */
GType
anjuta_convert_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_CONVERT_ERROR_AUTO_DETECTION_FAILED, "ANJUTA_CONVERT_ERROR_AUTO_DETECTION_FAILED", "failed" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaConvertError"), values);
  }
  return etype;
}

/* enumerations from "anjuta-plugin-description.h" */
GType
anjuta_plugin_description_parse_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_SYNTAX, "ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_SYNTAX", "syntax" },
      { ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_ESCAPES, "ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_ESCAPES", "escapes" },
      { ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_CHARS, "ANJUTA_PLUGIN_DESCRIPTION_PARSE_ERROR_INVALID_CHARS", "chars" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaPluginDescriptionParseError"), values);
  }
  return etype;
}

/* enumerations from "anjuta-plugin-manager.h" */
GType
anjuta_plugin_manager_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_PLUGIN_MANAGER_MISSING_FACTORY, "ANJUTA_PLUGIN_MANAGER_MISSING_FACTORY", "missing-factory" },
      { ANJUTA_PLUGIN_MANAGER_ERROR_UNKNOWN, "ANJUTA_PLUGIN_MANAGER_ERROR_UNKNOWN", "error-unknown" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaPluginManagerError"), values);
  }
  return etype;
}

/* enumerations from "anjuta-profile.h" */
GType
anjuta_profile_error_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_PROFILE_ERROR_URI_READ_FAILED, "ANJUTA_PROFILE_ERROR_URI_READ_FAILED", "uri-read-failed" },
      { ANJUTA_PROFILE_ERROR_URI_WRITE_FAILED, "ANJUTA_PROFILE_ERROR_URI_WRITE_FAILED", "uri-write-failed" },
      { ANJUTA_PROFILE_ERROR_PLUGIN_MISSING, "ANJUTA_PROFILE_ERROR_PLUGIN_MISSING", "plugin-missing" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaProfileError"), values);
  }
  return etype;
}

/* enumerations from "anjuta-launcher.h" */
GType
anjuta_launcher_output_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_LAUNCHER_OUTPUT_STDOUT, "ANJUTA_LAUNCHER_OUTPUT_STDOUT", "stdout" },
      { ANJUTA_LAUNCHER_OUTPUT_STDERR, "ANJUTA_LAUNCHER_OUTPUT_STDERR", "stderr" },
      { ANJUTA_LAUNCHER_OUTPUT_PTY, "ANJUTA_LAUNCHER_OUTPUT_PTY", "pty" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaLauncherOutputType"), values);
  }
  return etype;
}

/* enumerations from "anjuta-session.h" */
GType
anjuta_session_phase_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_SESSION_PHASE_START, "ANJUTA_SESSION_PHASE_START", "start" },
      { ANJUTA_SESSION_PHASE_FIRST, "ANJUTA_SESSION_PHASE_FIRST", "first" },
      { ANJUTA_SESSION_PHASE_NORMAL, "ANJUTA_SESSION_PHASE_NORMAL", "normal" },
      { ANJUTA_SESSION_PHASE_LAST, "ANJUTA_SESSION_PHASE_LAST", "last" },
      { ANJUTA_SESSION_PHASE_END, "ANJUTA_SESSION_PHASE_END", "end" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaSessionPhase"), values);
  }
  return etype;
}

/* enumerations from "anjuta-serializer.h" */
GType
anjuta_serializer_mode_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_SERIALIZER_READ, "ANJUTA_SERIALIZER_READ", "read" },
      { ANJUTA_SERIALIZER_WRITE, "ANJUTA_SERIALIZER_WRITE", "write" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaSerializerMode"), values);
  }
  return etype;
}

/* enumerations from "anjuta-vcs-status.h" */
GType
anjuta_vcs_status_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { ANJUTA_VCS_STATUS_MODIFIED, "ANJUTA_VCS_STATUS_MODIFIED", "modified" },
      { ANJUTA_VCS_STATUS_ADDED, "ANJUTA_VCS_STATUS_ADDED", "added" },
      { ANJUTA_VCS_STATUS_DELETED, "ANJUTA_VCS_STATUS_DELETED", "deleted" },
      { ANJUTA_VCS_STATUS_CONFLICTED, "ANJUTA_VCS_STATUS_CONFLICTED", "conflicted" },
      { ANJUTA_VCS_STATUS_UPTODATE, "ANJUTA_VCS_STATUS_UPTODATE", "uptodate" },
      { ANJUTA_VCS_STATUS_LOCKED, "ANJUTA_VCS_STATUS_LOCKED", "locked" },
      { ANJUTA_VCS_STATUS_MISSING, "ANJUTA_VCS_STATUS_MISSING", "missing" },
      { ANJUTA_VCS_STATUS_UNVERSIONED, "ANJUTA_VCS_STATUS_UNVERSIONED", "unversioned" },
      { ANJUTA_VCS_STATUS_IGNORED, "ANJUTA_VCS_STATUS_IGNORED", "ignored" },
      { ANJUTA_VCS_STATUS_ALL, "ANJUTA_VCS_STATUS_ALL", "all" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("AnjutaVcsStatus"), values);
  }
  return etype;
}

/* enumerations from "anjuta-project.h" */
GType
anjuta_project_value_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_PROJECT_PROPERTY_STRING, "ANJUTA_PROJECT_PROPERTY_STRING", "string" },
      { ANJUTA_PROJECT_PROPERTY_LIST, "ANJUTA_PROJECT_PROPERTY_LIST", "list" },
      { ANJUTA_PROJECT_PROPERTY_BOOLEAN, "ANJUTA_PROJECT_PROPERTY_BOOLEAN", "boolean" },
      { ANJUTA_PROJECT_PROPERTY_MAP, "ANJUTA_PROJECT_PROPERTY_MAP", "map" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaProjectValueType"), values);
  }
  return etype;
}
GType
anjuta_project_property_flags_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { ANJUTA_PROJECT_PROPERTY_READ_ONLY, "ANJUTA_PROJECT_PROPERTY_READ_ONLY", "read-only" },
      { ANJUTA_PROJECT_PROPERTY_READ_WRITE, "ANJUTA_PROJECT_PROPERTY_READ_WRITE", "read-write" },
      { ANJUTA_PROJECT_PROPERTY_HIDDEN, "ANJUTA_PROJECT_PROPERTY_HIDDEN", "hidden" },
      { ANJUTA_PROJECT_PROPERTY_STATIC, "ANJUTA_PROJECT_PROPERTY_STATIC", "static" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("AnjutaProjectPropertyFlags"), values);
  }
  return etype;
}
GType
anjuta_project_node_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { ANJUTA_PROJECT_UNKNOWN, "ANJUTA_PROJECT_UNKNOWN", "unknown" },
      { ANJUTA_PROJECT_SHAREDLIB, "ANJUTA_PROJECT_SHAREDLIB", "sharedlib" },
      { ANJUTA_PROJECT_STATICLIB, "ANJUTA_PROJECT_STATICLIB", "staticlib" },
      { ANJUTA_PROJECT_PROGRAM, "ANJUTA_PROJECT_PROGRAM", "program" },
      { ANJUTA_PROJECT_PYTHON, "ANJUTA_PROJECT_PYTHON", "python" },
      { ANJUTA_PROJECT_JAVA, "ANJUTA_PROJECT_JAVA", "java" },
      { ANJUTA_PROJECT_LISP, "ANJUTA_PROJECT_LISP", "lisp" },
      { ANJUTA_PROJECT_HEADER, "ANJUTA_PROJECT_HEADER", "header" },
      { ANJUTA_PROJECT_MAN, "ANJUTA_PROJECT_MAN", "man" },
      { ANJUTA_PROJECT_INFO, "ANJUTA_PROJECT_INFO", "info" },
      { ANJUTA_PROJECT_GENERIC, "ANJUTA_PROJECT_GENERIC", "generic" },
      { ANJUTA_PROJECT_DATA, "ANJUTA_PROJECT_DATA", "data" },
      { ANJUTA_PROJECT_EXTRA, "ANJUTA_PROJECT_EXTRA", "extra" },
      { ANJUTA_PROJECT_INTLTOOL, "ANJUTA_PROJECT_INTLTOOL", "intltool" },
      { ANJUTA_PROJECT_CONFIGURE, "ANJUTA_PROJECT_CONFIGURE", "configure" },
      { ANJUTA_PROJECT_IDL, "ANJUTA_PROJECT_IDL", "idl" },
      { ANJUTA_PROJECT_MKENUMS, "ANJUTA_PROJECT_MKENUMS", "mkenums" },
      { ANJUTA_PROJECT_GENMARSHAL, "ANJUTA_PROJECT_GENMARSHAL", "genmarshal" },
      { ANJUTA_PROJECT_SCRIPT, "ANJUTA_PROJECT_SCRIPT", "script" },
      { ANJUTA_PROJECT_ROOT_GROUP, "ANJUTA_PROJECT_ROOT_GROUP", "root-group" },
      { ANJUTA_PROJECT_LT_MODULE, "ANJUTA_PROJECT_LT_MODULE", "lt-module" },
      { ANJUTA_PROJECT_PROXY, "ANJUTA_PROJECT_PROXY", "proxy" },
      { ANJUTA_PROJECT_PROJECT, "ANJUTA_PROJECT_PROJECT", "project" },
      { ANJUTA_PROJECT_PRIMARY, "ANJUTA_PROJECT_PRIMARY", "primary" },
      { ANJUTA_PROJECT_EXECUTABLE, "ANJUTA_PROJECT_EXECUTABLE", "executable" },
      { ANJUTA_PROJECT_READ_ONLY, "ANJUTA_PROJECT_READ_ONLY", "read-only" },
      { ANJUTA_PROJECT_FRAME, "ANJUTA_PROJECT_FRAME", "frame" },
      { ANJUTA_PROJECT_ID_MASK, "ANJUTA_PROJECT_ID_MASK", "id-mask" },
      { ANJUTA_PROJECT_FLAG_MASK, "ANJUTA_PROJECT_FLAG_MASK", "flag-mask" },
      { ANJUTA_PROJECT_TYPE_MASK, "ANJUTA_PROJECT_TYPE_MASK", "type-mask" },
      { ANJUTA_PROJECT_ROOT, "ANJUTA_PROJECT_ROOT", "root" },
      { ANJUTA_PROJECT_GROUP, "ANJUTA_PROJECT_GROUP", "group" },
      { ANJUTA_PROJECT_TARGET, "ANJUTA_PROJECT_TARGET", "target" },
      { ANJUTA_PROJECT_SOURCE, "ANJUTA_PROJECT_SOURCE", "source" },
      { ANJUTA_PROJECT_MODULE, "ANJUTA_PROJECT_MODULE", "module" },
      { ANJUTA_PROJECT_PACKAGE, "ANJUTA_PROJECT_PACKAGE", "package" },
      { ANJUTA_PROJECT_VARIABLE, "ANJUTA_PROJECT_VARIABLE", "variable" },
      { ANJUTA_PROJECT_OBJECT, "ANJUTA_PROJECT_OBJECT", "object" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("AnjutaProjectNodeType"), values);
  }
  return etype;
}
GType
anjuta_project_node_state_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { ANJUTA_PROJECT_OK, "ANJUTA_PROJECT_OK", "ok" },
      { ANJUTA_PROJECT_MODIFIED, "ANJUTA_PROJECT_MODIFIED", "modified" },
      { ANJUTA_PROJECT_INCOMPLETE, "ANJUTA_PROJECT_INCOMPLETE", "incomplete" },
      { ANJUTA_PROJECT_LOADING, "ANJUTA_PROJECT_LOADING", "loading" },
      { ANJUTA_PROJECT_REMOVED, "ANJUTA_PROJECT_REMOVED", "removed" },
      { ANJUTA_PROJECT_CAN_ADD_GROUP, "ANJUTA_PROJECT_CAN_ADD_GROUP", "can-add-group" },
      { ANJUTA_PROJECT_CAN_ADD_TARGET, "ANJUTA_PROJECT_CAN_ADD_TARGET", "can-add-target" },
      { ANJUTA_PROJECT_CAN_ADD_SOURCE, "ANJUTA_PROJECT_CAN_ADD_SOURCE", "can-add-source" },
      { ANJUTA_PROJECT_CAN_ADD_MODULE, "ANJUTA_PROJECT_CAN_ADD_MODULE", "can-add-module" },
      { ANJUTA_PROJECT_CAN_ADD_PACKAGE, "ANJUTA_PROJECT_CAN_ADD_PACKAGE", "can-add-package" },
      { ANJUTA_PROJECT_CAN_REMOVE, "ANJUTA_PROJECT_CAN_REMOVE", "can-remove" },
      { ANJUTA_PROJECT_CAN_SAVE, "ANJUTA_PROJECT_CAN_SAVE", "can-save" },
      { ANJUTA_PROJECT_REMOVE_FILE, "ANJUTA_PROJECT_REMOVE_FILE", "remove-file" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("AnjutaProjectNodeState"), values);
  }
  return etype;
}

/* enumerations from "anjuta-command-queue.h" */
GType
anjuta_command_queue_execute_mode_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_COMMAND_QUEUE_EXECUTE_AUTOMATIC, "ANJUTA_COMMAND_QUEUE_EXECUTE_AUTOMATIC", "automatic" },
      { ANJUTA_COMMAND_QUEUE_EXECUTE_MANUAL, "ANJUTA_COMMAND_QUEUE_EXECUTE_MANUAL", "manual" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaCommandQueueExecuteMode"), values);
  }
  return etype;
}

/* enumerations from "anjuta-command-bar.h" */
GType
anjuta_command_bar_entry_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { ANJUTA_COMMAND_BAR_ENTRY_FRAME, "ANJUTA_COMMAND_BAR_ENTRY_FRAME", "frame" },
      { ANJUTA_COMMAND_BAR_ENTRY_BUTTON, "ANJUTA_COMMAND_BAR_ENTRY_BUTTON", "button" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("AnjutaCommandBarEntryType"), values);
  }
  return etype;
}

/* enumerations from "anjuta-token.h" */
GType
anjuta_token_type_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GFlagsValue values[] = {
      { ANJUTA_TOKEN_NONE, "ANJUTA_TOKEN_NONE", "none" },
      { ANJUTA_TOKEN_EOL, "ANJUTA_TOKEN_EOL", "eol" },
      { ANJUTA_TOKEN_COMMA, "ANJUTA_TOKEN_COMMA", "comma" },
      { ANJUTA_TOKEN_TYPE, "ANJUTA_TOKEN_TYPE", "type" },
      { ANJUTA_TOKEN_FIRST, "ANJUTA_TOKEN_FIRST", "first" },
      { ANJUTA_TOKEN_FILE, "ANJUTA_TOKEN_FILE", "file" },
      { ANJUTA_TOKEN_MACRO, "ANJUTA_TOKEN_MACRO", "macro" },
      { ANJUTA_TOKEN_CONTENT, "ANJUTA_TOKEN_CONTENT", "content" },
      { ANJUTA_TOKEN_ARGUMENT, "ANJUTA_TOKEN_ARGUMENT", "argument" },
      { ANJUTA_TOKEN_VALUE, "ANJUTA_TOKEN_VALUE", "value" },
      { ANJUTA_TOKEN_EOV, "ANJUTA_TOKEN_EOV", "eov" },
      { ANJUTA_TOKEN_PARSED, "ANJUTA_TOKEN_PARSED", "parsed" },
      { ANJUTA_TOKEN_KEYWORD, "ANJUTA_TOKEN_KEYWORD", "keyword" },
      { ANJUTA_TOKEN_OPERATOR, "ANJUTA_TOKEN_OPERATOR", "operator" },
      { ANJUTA_TOKEN_NAME, "ANJUTA_TOKEN_NAME", "name" },
      { ANJUTA_TOKEN_VARIABLE, "ANJUTA_TOKEN_VARIABLE", "variable" },
      { ANJUTA_TOKEN_DEFINITION, "ANJUTA_TOKEN_DEFINITION", "definition" },
      { ANJUTA_TOKEN_STATEMENT, "ANJUTA_TOKEN_STATEMENT", "statement" },
      { ANJUTA_TOKEN_NUMBER, "ANJUTA_TOKEN_NUMBER", "number" },
      { ANJUTA_TOKEN_JUNK, "ANJUTA_TOKEN_JUNK", "junk" },
      { ANJUTA_TOKEN_COMMENT, "ANJUTA_TOKEN_COMMENT", "comment" },
      { ANJUTA_TOKEN_OPEN_QUOTE, "ANJUTA_TOKEN_OPEN_QUOTE", "open-quote" },
      { ANJUTA_TOKEN_CLOSE_QUOTE, "ANJUTA_TOKEN_CLOSE_QUOTE", "close-quote" },
      { ANJUTA_TOKEN_ESCAPE, "ANJUTA_TOKEN_ESCAPE", "escape" },
      { ANJUTA_TOKEN_FUNCTION, "ANJUTA_TOKEN_FUNCTION", "function" },
      { ANJUTA_TOKEN_SPACE, "ANJUTA_TOKEN_SPACE", "space" },
      { ANJUTA_TOKEN_START, "ANJUTA_TOKEN_START", "start" },
      { ANJUTA_TOKEN_NEXT, "ANJUTA_TOKEN_NEXT", "next" },
      { ANJUTA_TOKEN_LAST, "ANJUTA_TOKEN_LAST", "last" },
      { ANJUTA_TOKEN_ITEM, "ANJUTA_TOKEN_ITEM", "item" },
      { ANJUTA_TOKEN_STRING, "ANJUTA_TOKEN_STRING", "string" },
      { ANJUTA_TOKEN_ERROR, "ANJUTA_TOKEN_ERROR", "error" },
      { ANJUTA_TOKEN_WORD, "ANJUTA_TOKEN_WORD", "word" },
      { ANJUTA_TOKEN_LIST, "ANJUTA_TOKEN_LIST", "list" },
      { ANJUTA_TOKEN_ANY, "ANJUTA_TOKEN_ANY", "any" },
      { ANJUTA_TOKEN_USER, "ANJUTA_TOKEN_USER", "user" },
      { ANJUTA_TOKEN_FLAGS, "ANJUTA_TOKEN_FLAGS", "flags" },
      { ANJUTA_TOKEN_PUBLIC_FLAGS, "ANJUTA_TOKEN_PUBLIC_FLAGS", "public-flags" },
      { ANJUTA_TOKEN_IRRELEVANT, "ANJUTA_TOKEN_IRRELEVANT", "irrelevant" },
      { ANJUTA_TOKEN_OPEN, "ANJUTA_TOKEN_OPEN", "open" },
      { ANJUTA_TOKEN_CLOSE, "ANJUTA_TOKEN_CLOSE", "close" },
      { ANJUTA_TOKEN_SIGNIFICANT, "ANJUTA_TOKEN_SIGNIFICANT", "significant" },
      { ANJUTA_TOKEN_PRIVATE_FLAGS, "ANJUTA_TOKEN_PRIVATE_FLAGS", "private-flags" },
      { ANJUTA_TOKEN_CASE_INSENSITIVE, "ANJUTA_TOKEN_CASE_INSENSITIVE", "case-insensitive" },
      { ANJUTA_TOKEN_STATIC, "ANJUTA_TOKEN_STATIC", "static" },
      { ANJUTA_TOKEN_REMOVED, "ANJUTA_TOKEN_REMOVED", "removed" },
      { ANJUTA_TOKEN_ADDED, "ANJUTA_TOKEN_ADDED", "added" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("AnjutaTokenType"), values);
  }
  return etype;
}

#define __ANJUTA_ENUM_TYPES_C__



