/*
 * Generated by gdbus-codegen 2.50.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __OFONO_VOICECALLMANAGER_INTERFACE_H__
#define __OFONO_VOICECALLMANAGER_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.ofono.VoiceCallManager */

#define TYPE_ORG_OFONO_VOICE_CALL_MANAGER (org_ofono_voice_call_manager_get_type ())
#define ORG_OFONO_VOICE_CALL_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER, OrgOfonoVoiceCallManager))
#define IS_ORG_OFONO_VOICE_CALL_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER))
#define ORG_OFONO_VOICE_CALL_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER, OrgOfonoVoiceCallManagerIface))

struct _OrgOfonoVoiceCallManager;
typedef struct _OrgOfonoVoiceCallManager OrgOfonoVoiceCallManager;
typedef struct _OrgOfonoVoiceCallManagerIface OrgOfonoVoiceCallManagerIface;

struct _OrgOfonoVoiceCallManagerIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_create_multiparty) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_dial) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_unnamed_arg0,
    const gchar *arg_unnamed_arg1);

  gboolean (*handle_get_calls) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_properties) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hangup_all) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hangup_multiparty) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hold_and_answer) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_private_chat) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_unnamed_arg0);

  gboolean (*handle_release_and_answer) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_send_tones) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_unnamed_arg0);

  gboolean (*handle_swap_calls) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_transfer) (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

  void (*barring_active) (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);

  void (*call_added) (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

  void (*call_removed) (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);

  void (*forwarded) (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);

  void (*property_changed) (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

};

GType org_ofono_voice_call_manager_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *org_ofono_voice_call_manager_interface_info (void);
guint org_ofono_voice_call_manager_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void org_ofono_voice_call_manager_complete_get_properties (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    GVariant *unnamed_arg0);

void org_ofono_voice_call_manager_complete_dial (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *unnamed_arg2);

void org_ofono_voice_call_manager_complete_transfer (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_swap_calls (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_release_and_answer (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_hold_and_answer (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_hangup_all (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_private_chat (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *unnamed_arg1);

void org_ofono_voice_call_manager_complete_create_multiparty (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *unnamed_arg0);

void org_ofono_voice_call_manager_complete_hangup_multiparty (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_send_tones (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation);

void org_ofono_voice_call_manager_complete_get_calls (
    OrgOfonoVoiceCallManager *object,
    GDBusMethodInvocation *invocation,
    GVariant *unnamed_arg0);



/* D-Bus signal emissions functions: */
void org_ofono_voice_call_manager_emit_property_changed (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

void org_ofono_voice_call_manager_emit_call_added (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0,
    GVariant *arg_unnamed_arg1);

void org_ofono_voice_call_manager_emit_call_removed (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);

void org_ofono_voice_call_manager_emit_barring_active (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);

void org_ofono_voice_call_manager_emit_forwarded (
    OrgOfonoVoiceCallManager *object,
    const gchar *arg_unnamed_arg0);



/* D-Bus method calls: */
void org_ofono_voice_call_manager_call_get_properties (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_get_properties_finish (
    OrgOfonoVoiceCallManager *proxy,
    GVariant **out_unnamed_arg0,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_get_properties_sync (
    OrgOfonoVoiceCallManager *proxy,
    GVariant **out_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_dial (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    const gchar *arg_unnamed_arg1,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_dial_finish (
    OrgOfonoVoiceCallManager *proxy,
    gchar **out_unnamed_arg2,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_dial_sync (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    const gchar *arg_unnamed_arg1,
    gchar **out_unnamed_arg2,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_transfer (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_transfer_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_transfer_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_swap_calls (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_swap_calls_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_swap_calls_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_release_and_answer (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_release_and_answer_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_release_and_answer_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_hold_and_answer (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_hold_and_answer_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_hold_and_answer_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_hangup_all (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_hangup_all_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_hangup_all_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_private_chat (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_private_chat_finish (
    OrgOfonoVoiceCallManager *proxy,
    gchar ***out_unnamed_arg1,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_private_chat_sync (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    gchar ***out_unnamed_arg1,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_create_multiparty (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_create_multiparty_finish (
    OrgOfonoVoiceCallManager *proxy,
    gchar ***out_unnamed_arg0,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_create_multiparty_sync (
    OrgOfonoVoiceCallManager *proxy,
    gchar ***out_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_hangup_multiparty (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_hangup_multiparty_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_hangup_multiparty_sync (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_send_tones (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_send_tones_finish (
    OrgOfonoVoiceCallManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_send_tones_sync (
    OrgOfonoVoiceCallManager *proxy,
    const gchar *arg_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);

void org_ofono_voice_call_manager_call_get_calls (
    OrgOfonoVoiceCallManager *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean org_ofono_voice_call_manager_call_get_calls_finish (
    OrgOfonoVoiceCallManager *proxy,
    GVariant **out_unnamed_arg0,
    GAsyncResult *res,
    GError **error);

gboolean org_ofono_voice_call_manager_call_get_calls_sync (
    OrgOfonoVoiceCallManager *proxy,
    GVariant **out_unnamed_arg0,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY (org_ofono_voice_call_manager_proxy_get_type ())
#define ORG_OFONO_VOICE_CALL_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY, OrgOfonoVoiceCallManagerProxy))
#define ORG_OFONO_VOICE_CALL_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY, OrgOfonoVoiceCallManagerProxyClass))
#define ORG_OFONO_VOICE_CALL_MANAGER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY, OrgOfonoVoiceCallManagerProxyClass))
#define IS_ORG_OFONO_VOICE_CALL_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY))
#define IS_ORG_OFONO_VOICE_CALL_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_PROXY))

typedef struct _OrgOfonoVoiceCallManagerProxy OrgOfonoVoiceCallManagerProxy;
typedef struct _OrgOfonoVoiceCallManagerProxyClass OrgOfonoVoiceCallManagerProxyClass;
typedef struct _OrgOfonoVoiceCallManagerProxyPrivate OrgOfonoVoiceCallManagerProxyPrivate;

struct _OrgOfonoVoiceCallManagerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  OrgOfonoVoiceCallManagerProxyPrivate *priv;
};

struct _OrgOfonoVoiceCallManagerProxyClass
{
  GDBusProxyClass parent_class;
};

GType org_ofono_voice_call_manager_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgOfonoVoiceCallManagerProxy, g_object_unref)
#endif

void org_ofono_voice_call_manager_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgOfonoVoiceCallManager *org_ofono_voice_call_manager_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
OrgOfonoVoiceCallManager *org_ofono_voice_call_manager_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void org_ofono_voice_call_manager_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
OrgOfonoVoiceCallManager *org_ofono_voice_call_manager_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
OrgOfonoVoiceCallManager *org_ofono_voice_call_manager_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON (org_ofono_voice_call_manager_skeleton_get_type ())
#define ORG_OFONO_VOICE_CALL_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON, OrgOfonoVoiceCallManagerSkeleton))
#define ORG_OFONO_VOICE_CALL_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON, OrgOfonoVoiceCallManagerSkeletonClass))
#define ORG_OFONO_VOICE_CALL_MANAGER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON, OrgOfonoVoiceCallManagerSkeletonClass))
#define IS_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON))
#define IS_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_ORG_OFONO_VOICE_CALL_MANAGER_SKELETON))

typedef struct _OrgOfonoVoiceCallManagerSkeleton OrgOfonoVoiceCallManagerSkeleton;
typedef struct _OrgOfonoVoiceCallManagerSkeletonClass OrgOfonoVoiceCallManagerSkeletonClass;
typedef struct _OrgOfonoVoiceCallManagerSkeletonPrivate OrgOfonoVoiceCallManagerSkeletonPrivate;

struct _OrgOfonoVoiceCallManagerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  OrgOfonoVoiceCallManagerSkeletonPrivate *priv;
};

struct _OrgOfonoVoiceCallManagerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType org_ofono_voice_call_manager_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (OrgOfonoVoiceCallManagerSkeleton, g_object_unref)
#endif

OrgOfonoVoiceCallManager *org_ofono_voice_call_manager_skeleton_new (void);


G_END_DECLS

#endif /* __OFONO_VOICECALLMANAGER_INTERFACE_H__ */
