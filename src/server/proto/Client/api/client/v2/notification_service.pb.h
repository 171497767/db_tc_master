// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v2/notification_service.proto

#ifndef PROTOBUF_api_2fclient_2fv2_2fnotification_5fservice_2eproto__INCLUDED
#define PROTOBUF_api_2fclient_2fv2_2fnotification_5fservice_2eproto__INCLUDED

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
#include "api/client/v2/notification_types.pb.h"
#include "rpc_types.pb.h"
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
void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5fservice_2eproto();
void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5fservice_2eproto();
void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5fservice_2eproto();

class SendNotificationRequest;

// ===================================================================

class TC_PROTO_API SendNotificationRequest : public ::google::protobuf::Message {
 public:
  SendNotificationRequest();
  virtual ~SendNotificationRequest();

  SendNotificationRequest(const SendNotificationRequest& from);

  inline SendNotificationRequest& operator=(const SendNotificationRequest& from) {
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
  static const SendNotificationRequest& default_instance();

  void Swap(SendNotificationRequest* other);

  // implements Message ----------------------------------------------

  SendNotificationRequest* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .bgs.protocol.notification.v2.client.SendNotificationOptions options = 2;
  inline bool has_options() const;
  inline void clear_options();
  static const int kOptionsFieldNumber = 2;
  inline const ::bgs::protocol::notification::v2::client::SendNotificationOptions& options() const;
  inline ::bgs::protocol::notification::v2::client::SendNotificationOptions* mutable_options();
  inline ::bgs::protocol::notification::v2::client::SendNotificationOptions* release_options();
  inline void set_allocated_options(::bgs::protocol::notification::v2::client::SendNotificationOptions* options);

  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.SendNotificationRequest)
 private:
  inline void set_has_options();
  inline void clear_has_options();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::bgs::protocol::notification::v2::client::SendNotificationOptions* options_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5fservice_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5fservice_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5fservice_2eproto();

  void InitAsDefaultInstance();
  static SendNotificationRequest* default_instance_;
};
// ===================================================================

class TC_PROTO_API NotificationService : public ServiceBase
{
 public:

  explicit NotificationService(bool use_original_hash);
  NotificationService(NotificationService const&) = delete;
  NotificationService(NotificationService&&) = delete;
  NotificationService& operator=(NotificationService const&) = delete;
  NotificationService& operator=(NotificationService&&) = delete;
  virtual ~NotificationService();

  typedef std::integral_constant<uint32, 0xF8E1EB98u> OriginalHash;
  typedef std::integral_constant<uint32, 0xBC7B33AFu> NameHash;

  static google::protobuf::ServiceDescriptor const* descriptor();

  void CallServerMethod(uint32 token, uint32 methodId, MessageBuffer buffer) final;

 protected:
  // server methods --------------------------------------------------
  virtual uint32 HandleSendNotification(::bgs::protocol::notification::v2::client::SendNotificationRequest const* request, ::bgs::protocol::NoData* response, std::function<void(ServiceBase*, uint32, ::google::protobuf::Message const*)>& continuation);

 private:
  void ParseAndHandleSendNotification(uint32 token, uint32 methodId, MessageBuffer& buffer);
};

// ===================================================================

// ===================================================================

// SendNotificationRequest

// optional .bgs.protocol.notification.v2.client.SendNotificationOptions options = 2;
inline bool SendNotificationRequest::has_options() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendNotificationRequest::set_has_options() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendNotificationRequest::clear_has_options() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendNotificationRequest::clear_options() {
  if (options_ != NULL) options_->::bgs::protocol::notification::v2::client::SendNotificationOptions::Clear();
  clear_has_options();
}
inline const ::bgs::protocol::notification::v2::client::SendNotificationOptions& SendNotificationRequest::options() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.SendNotificationRequest.options)
  return options_ != NULL ? *options_ : *default_instance_->options_;
}
inline ::bgs::protocol::notification::v2::client::SendNotificationOptions* SendNotificationRequest::mutable_options() {
  set_has_options();
  if (options_ == NULL) options_ = new ::bgs::protocol::notification::v2::client::SendNotificationOptions;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.SendNotificationRequest.options)
  return options_;
}
inline ::bgs::protocol::notification::v2::client::SendNotificationOptions* SendNotificationRequest::release_options() {
  clear_has_options();
  ::bgs::protocol::notification::v2::client::SendNotificationOptions* temp = options_;
  options_ = NULL;
  return temp;
}
inline void SendNotificationRequest::set_allocated_options(::bgs::protocol::notification::v2::client::SendNotificationOptions* options) {
  delete options_;
  options_ = options;
  if (options) {
    set_has_options();
  } else {
    clear_has_options();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.SendNotificationRequest.options)
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

#endif  // PROTOBUF_api_2fclient_2fv2_2fnotification_5fservice_2eproto__INCLUDED
