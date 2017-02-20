
#ifndef __symbol_db_cclosure_marshal_MARSHAL_H__
#define __symbol_db_cclosure_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* OBJECT:INT,POINTER,INT,INT (./symbol-db-marshal.list:1) */
extern void symbol_db_cclosure_marshal_OBJECT__INT_POINTER_INT_INT (GClosure     *closure,
                                                                    GValue       *return_value,
                                                                    guint         n_param_values,
                                                                    const GValue *param_values,
                                                                    gpointer      invocation_hint,
                                                                    gpointer      marshal_data);

/* BOOLEAN:INT,POINTER (./symbol-db-marshal.list:2) */
extern void symbol_db_cclosure_marshal_BOOLEAN__INT_POINTER (GClosure     *closure,
                                                             GValue       *return_value,
                                                             guint         n_param_values,
                                                             const GValue *param_values,
                                                             gpointer      invocation_hint,
                                                             gpointer      marshal_data);

/* INT:INT,POINTER (./symbol-db-marshal.list:3) */
extern void symbol_db_cclosure_marshal_INT__INT_POINTER (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

G_END_DECLS

#endif /* __symbol_db_cclosure_marshal_MARSHAL_H__ */

