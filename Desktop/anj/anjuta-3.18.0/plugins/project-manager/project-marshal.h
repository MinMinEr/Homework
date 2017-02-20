
#ifndef __pm_cclosure_marshal_MARSHAL_H__
#define __pm_cclosure_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:POINTER,BOOLEAN,BOXED (./project-marshal.list:1) */
extern void pm_cclosure_marshal_VOID__POINTER_BOOLEAN_BOXED (GClosure     *closure,
                                                             GValue       *return_value,
                                                             guint         n_param_values,
                                                             const GValue *param_values,
                                                             gpointer      invocation_hint,
                                                             gpointer      marshal_data);

G_END_DECLS

#endif /* __pm_cclosure_marshal_MARSHAL_H__ */

