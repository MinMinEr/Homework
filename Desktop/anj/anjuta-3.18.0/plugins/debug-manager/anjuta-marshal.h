
#ifndef __anjuta_marshal_MARSHAL_H__
#define __anjuta_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:ULONG,ULONG (anjuta-marshal.list:1) */
extern void anjuta_marshal_VOID__ULONG_ULONG (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:VOID (anjuta-marshal.list:2) */
#define anjuta_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:INT,INT (anjuta-marshal.list:3) */
extern void anjuta_marshal_VOID__INT_INT (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

G_END_DECLS

#endif /* __anjuta_marshal_MARSHAL_H__ */

