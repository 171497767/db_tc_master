// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v2/notification_listener.proto

#ifndef PROTOBUF_api_2fclient_2fv2_2fnotification_5flistener_2eproto__INCLUDED
#define PROTOBUF_api_2fclient_2fv2_2fnotification_5flistener_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "rpc_types.pb.h"
#include "api/client/v2/notification_types.pb.h"
#include "ServiceBase.h"
#include "MessageBuffer.h"
#include <functional>
#include <type_traits>
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace notification {
namespace v2 {
namespace client {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5flistener_2eproto();

class NotificationReceivedNotification;

// ===================================================================

class TC_PROTO_API NotificationReceivedNotification : public ::google::protobuf::Message {
 public:
  NotificationReceivedNotification();
  virtual ~NotificationReceivedNotification();

  NotificationReceivedNotification(const NotificationReceivedNotification& from);

  inline NotificationReceivedNotification& operator=(const NotificationReceivedNotification& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NotificationReceivedNotification& default_instance();

  void Swap(NotificationReceivedNotification* other);

  // implements Message ----------------------------------------------

  NotificationReceivedNotification* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .bgs.protocol.notification.v2.client.Notification notifications = 1;
  inline int notifications_size() const;
  inline void clear_notifications();
  static const int kNotificationsFieldNumber = 1;
  inline const ::bgs::protocol::notification::v2::client::Notification& notifications(int index) const;
  inline ::bgs::protocol::notification::v2::client::Notification* mutable_notifications(int index);
  inline ::bgs::protocol::notification::v2::client::Notification* add_notifications();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::notification::v2::client::Notification >&
      notifications() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::notification::v2::client::Notification >*
      mutable_notifications();

  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.NotificationReceivedNotification)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::notification::v2::client::Notification > notifications_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5flistener_2eproto();

  void InitAsDefaultInstance();
  static NotificationReceivedNotification* default_instance_;
};
// ===================================================================

class TC_PROTO_API NotificationListener : public ServiceBase
{
 public:

  explicit NotificationListener(bool use_original_hash);
  NotificationListener(NotificationListener const&) = delete;
  NotificationListener(NotificationListener&&) = delete;
  NotificationListener& operator=(NotificationListener const&) = delete;
  NotificationListener& operator=(NotificationListener&&) = delete;
  virtual ~NotificationListener();

  typedef std::integral_constant<uint32, 0x2362BECDu> OriginalHash;
  typedef std::integral_constant<uint32, 0xF98DCEBCu> NameHash;

  static google::protobuf::ServiceDescriptor const* descriptor();

  // client methods --------------------------------------------------
  void OnNotificationReceived(::bgs::protocol::notification::v2::client::NotificationReceivedNotification const* request, bool client = false, bool server = false);

  void CallServerMethod(uint32 token, uint32 methodId, MessageBuffer buffer) final;
};

// ===================================================================

// ===================================================================

// NotificationReceivedNotification

// repeated .bgs.protocol.notification.v2.client.Notification notifications = 1;
inline int NotificationReceivedNotification::notifications_size() const {
  return notifications_.size();
}
inline void NotificationReceivedNotification::clear_notifications() {
  notifications_.Clear();
}
inline const ::bgs::protocol::notification::v2::client::Notification& NotificationReceivedNotification::notifications(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.NotificationReceivedNotification.notifications)
  return notifications_.Get(index);
}
inline ::bgs::protocol::notification::v2::client::Notification* NotificationReceivedNotification::mutable_notifications(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.NotificationReceivedNotification.notifications)
  return notifications_.Mutable(index);
}
inline ::bgs::protocol::notification::v2::client::Notification* NotificationReceivedNotification::add_notifications() {
  // @@protoc_insertion_point(field_add:bgs.protocol.notification.v2.client.NotificationReceivedNotification.notifications)
  return notifications_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::notification::v2::client::Notification >&
NotificationReceivedNotification::notifications() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.notification.v2.client.NotificationReceivedNotification.notifications)
  return notifications_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::notification::v2::client::Notification >*
NotificationReceivedNotification::mutable_notifications() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.notification.v2.client.NotificationReceivedNotification.notifications)
  return &notifications_;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace v2
}  // namespace notification
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2fclient_2fv2_2fnotification_5flistener_2eproto__INCLUDED
