
#ifndef __anjuta_marshal_MARSHAL_H__
#define __anjuta_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* BOOLEAN:OBJECT (anjuta-marshal.list:1) */
extern void anjuta_marshal_BOOLEAN__OBJECT (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* BOOLEAN:NONE (anjuta-marshal.list:2) */
extern void anjuta_marshal_BOOLEAN__VOID (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);
#define anjuta_marshal_BOOLEAN__NONE	anjuta_marshal_BOOLEAN__VOID

/* VOID:VOID (anjuta-marshal.list:3) */
#define anjuta_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:BOOLEAN (anjuta-marshal.list:4) */
#define anjuta_marshal_VOID__BOOLEAN	g_cclosure_marshal_VOID__BOOLEAN

/* VOID:OBJECT (anjuta-marshal.list:5) */
#define anjuta_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT

/* VOID:POINTER (anjuta-marshal.list:6) */
#define anjuta_marshal_VOID__POINTER	g_cclosure_marshal_VOID__POINTER

/* VOID:UINT64,UINT64 (anjuta-marshal.list:7) */
extern void anjuta_marshal_VOID__UINT64_UINT64 (GClosure     *closure,
                                                GValue       *return_value,
                                                guint         n_param_values,
                                                const GValue *param_values,
                                                gpointer      invocation_hint,
                                                gpointer      marshal_data);

/* VOID:BOOLEAN,POINTER (anjuta-marshal.list:8) */
extern void anjuta_marshal_VOID__BOOLEAN_POINTER (GClosure     *closure,
                                                  GValue       *return_value,
                                                  guint         n_param_values,
                                                  const GValue *param_values,
                                                  gpointer      invocation_hint,
                                                  gpointer      marshal_data);

/* VOID:BOXED,BOXED (anjuta-marshal.list:9) */
extern void anjuta_marshal_VOID__BOXED_BOXED (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:OBJECT,CHAR (anjuta-marshal.list:10) */
extern void anjuta_marshal_VOID__OBJECT_CHAR (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

G_END_DECLS

#endif /* __anjuta_marshal_MARSHAL_H__ */

