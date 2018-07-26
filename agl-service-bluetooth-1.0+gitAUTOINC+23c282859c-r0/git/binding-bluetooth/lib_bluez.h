/*
 * Generated by gdbus-codegen 2.48.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __LIB_BLUEZ_H__
#define __LIB_BLUEZ_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ---- */

#define BLUEZ_TYPE_OBJECT (bluez_object_get_type ())
#define BLUEZ_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_TYPE_OBJECT, BLUEZObject))
#define BLUEZ_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_TYPE_OBJECT))
#define BLUEZ_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), BLUEZ_TYPE_OBJECT, BLUEZObject))

struct _BLUEZObject;
typedef struct _BLUEZObject BLUEZObject;
typedef struct _BLUEZObjectIface BLUEZObjectIface;

struct _BLUEZObjectIface
{
  GTypeInterface parent_iface;
};

GType bluez_object_get_type (void) G_GNUC_CONST;


#define BLUEZ_TYPE_OBJECT_PROXY (bluez_object_proxy_get_type ())
#define BLUEZ_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_TYPE_OBJECT_PROXY, BLUEZObjectProxy))
#define BLUEZ_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_TYPE_OBJECT_PROXY, BLUEZObjectProxyClass))
#define BLUEZ_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_TYPE_OBJECT_PROXY, BLUEZObjectProxyClass))
#define BLUEZ_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_TYPE_OBJECT_PROXY))
#define BLUEZ_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_TYPE_OBJECT_PROXY))

typedef struct _BLUEZObjectProxy BLUEZObjectProxy;
typedef struct _BLUEZObjectProxyClass BLUEZObjectProxyClass;
typedef struct _BLUEZObjectProxyPrivate BLUEZObjectProxyPrivate;

struct _BLUEZObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  BLUEZObjectProxyPrivate *priv;
};

struct _BLUEZObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType bluez_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BLUEZObjectProxy, g_object_unref)
#endif

BLUEZObjectProxy *bluez_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define BLUEZ_TYPE_OBJECT_SKELETON (bluez_object_skeleton_get_type ())
#define BLUEZ_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_TYPE_OBJECT_SKELETON, BLUEZObjectSkeleton))
#define BLUEZ_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_TYPE_OBJECT_SKELETON, BLUEZObjectSkeletonClass))
#define BLUEZ_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_TYPE_OBJECT_SKELETON, BLUEZObjectSkeletonClass))
#define BLUEZ_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_TYPE_OBJECT_SKELETON))
#define BLUEZ_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_TYPE_OBJECT_SKELETON))

typedef struct _BLUEZObjectSkeleton BLUEZObjectSkeleton;
typedef struct _BLUEZObjectSkeletonClass BLUEZObjectSkeletonClass;
typedef struct _BLUEZObjectSkeletonPrivate BLUEZObjectSkeletonPrivate;

struct _BLUEZObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  BLUEZObjectSkeletonPrivate *priv;
};

struct _BLUEZObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType bluez_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BLUEZObjectSkeleton, g_object_unref)
#endif

BLUEZObjectSkeleton *bluez_object_skeleton_new (const gchar *object_path);

/* ---- */

#define BLUEZ_TYPE_OBJECT_MANAGER_CLIENT (bluez_object_manager_client_get_type ())
#define BLUEZ_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), BLUEZ_TYPE_OBJECT_MANAGER_CLIENT, BLUEZObjectManagerClient))
#define BLUEZ_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), BLUEZ_TYPE_OBJECT_MANAGER_CLIENT, BLUEZObjectManagerClientClass))
#define BLUEZ_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), BLUEZ_TYPE_OBJECT_MANAGER_CLIENT, BLUEZObjectManagerClientClass))
#define BLUEZ_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), BLUEZ_TYPE_OBJECT_MANAGER_CLIENT))
#define BLUEZ_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), BLUEZ_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _BLUEZObjectManagerClient BLUEZObjectManagerClient;
typedef struct _BLUEZObjectManagerClientClass BLUEZObjectManagerClientClass;
typedef struct _BLUEZObjectManagerClientPrivate BLUEZObjectManagerClientPrivate;

struct _BLUEZObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  BLUEZObjectManagerClientPrivate *priv;
};

struct _BLUEZObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BLUEZObjectManagerClient, g_object_unref)
#endif

GType bluez_object_manager_client_get_type (void) G_GNUC_CONST;

GType bluez_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void bluez_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *bluez_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *bluez_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void bluez_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *bluez_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *bluez_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __LIB_BLUEZ_H__ */