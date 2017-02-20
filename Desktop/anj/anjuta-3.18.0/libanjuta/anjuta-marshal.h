
#ifndef __anjuta_cclosure_marshal_MARSHAL_H__
#define __anjuta_cclosure_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:VOID (./anjuta-marshal.list:24) */
#define anjuta_cclosure_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:BOOLEAN (./anjuta-marshal.list:25) */
#define anjuta_cclosure_marshal_VOID__BOOLEAN	g_cclosure_marshal_VOID__BOOLEAN

/* VOID:BOXED (./anjuta-marshal.list:26) */
#define anjuta_cclosure_marshal_VOID__BOXED	g_cclosure_marshal_VOID__BOXED

/* VOID:INT,STRING (./anjuta-marshal.list:27) */
extern void anjuta_cclosure_marshal_VOID__INT_STRING (GClosure     *closure,
                                                      GValue       *return_value,
                                                      guint         n_param_values,
                                                      const GValue *param_values,
                                                      gpointer      invocation_hint,
                                                      gpointer      marshal_data);

/* VOID:INT,OBJECT (./anjuta-marshal.list:28) */
extern void anjuta_cclosure_marshal_VOID__INT_OBJECT (GClosure     *closure,
                                                      GValue       *return_value,
                                                      guint         n_param_values,
                                                      const GValue *param_values,
                                                      gpointer      invocation_hint,
                                                      gpointer      marshal_data);

/* VOID:INT,INT,ULONG (./anjuta-marshal.list:29) */
extern void anjuta_cclosure_marshal_VOID__INT_INT_ULONG (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

/* VOID:STRING,POINTER (./anjuta-marshal.list:30) */
extern void anjuta_cclosure_marshal_VOID__STRING_POINTER (GClosure     *closure,
                                                          GValue       *return_value,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint,
                                                          gpointer      marshal_data);

/* VOID:STRING (./anjuta-marshal.list:31) */
#define anjuta_cclosure_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING

/* VOID:STRING,INT (./anjuta-marshal.list:32) */
extern void anjuta_cclosure_marshal_VOID__STRING_INT (GClosure     *closure,
                                                      GValue       *return_value,
                                                      guint         n_param_values,
                                                      const GValue *param_values,
                                                      gpointer      invocation_hint,
                                                      gpointer      marshal_data);

/* VOID:STRING,INT,STRING (./anjuta-marshal.list:33) */
extern void anjuta_cclosure_marshal_VOID__STRING_INT_STRING (GClosure     *closure,
                                                             GValue       *return_value,
                                                             guint         n_param_values,
                                                             const GValue *param_values,
                                                             gpointer      invocation_hint,
                                                             gpointer      marshal_data);

/* VOID:STRING,BOXED (./anjuta-marshal.list:34) */
extern void anjuta_cclosure_marshal_VOID__STRING_BOXED (GClosure     *closure,
                                                        GValue       *return_value,
                                                        guint         n_param_values,
                                                        const GValue *param_values,
                                                        gpointer      invocation_hint,
                                                        gpointer      marshal_data);

/* VOID:POINTER (./anjuta-marshal.list:35) */
#define anjuta_cclosure_marshal_VOID__POINTER	g_cclosure_marshal_VOID__POINTER

/* VOID:OBJECT (./anjuta-marshal.list:36) */
#define anjuta_cclosure_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT

/* VOID:BOXED,ENUM (./anjuta-marshal.list:37) */
extern void anjuta_cclosure_marshal_VOID__BOXED_ENUM (GClosure     *closure,
                                                      GValue       *return_value,
                                                      guint         n_param_values,
                                                      const GValue *param_values,
                                                      gpointer      invocation_hint,
                                                      gpointer      marshal_data);

/* VOID:POINTER,OBJECT (./anjuta-marshal.list:38) */
extern void anjuta_cclosure_marshal_VOID__POINTER_OBJECT (GClosure     *closure,
                                                          GValue       *return_value,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint,
                                                          gpointer      marshal_data);

/* VOID:POINTER (./anjuta-marshal.list:39) */

G_END_DECLS

#endif /* __anjuta_cclosure_marshal_MARSHAL_H__ */

