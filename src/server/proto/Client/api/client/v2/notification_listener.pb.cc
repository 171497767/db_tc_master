// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v2/notification_listener.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "api/client/v2/notification_listener.pb.h"

#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "BattlenetRpcErrorCodes.h"
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace notification {
namespace v2 {
namespace client {

namespace {

const ::google::protobuf::Descriptor* NotificationReceivedNotification_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NotificationReceivedNotification_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* NotificationListener_descriptor_ = NULL;

}  // namespace

void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto() {
  protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "api/client/v2/notification_listener.proto");
  GOOGLE_CHECK(file != NULL);
  NotificationReceivedNotification_descriptor_ = file->message_type(0);
  static const int NotificationReceivedNotification_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NotificationReceivedNotification, notifications_),
  };
  NotificationReceivedNotification_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      NotificationReceivedNotification_descriptor_,
      NotificationReceivedNotification::default_instance_,
      NotificationReceivedNotification_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NotificationReceivedNotification, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NotificationReceivedNotification, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(NotificationReceivedNotification));
  NotificationListener_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    NotificationReceivedNotification_descriptor_, &NotificationReceivedNotification::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5flistener_2eproto() {
  delete NotificationReceivedNotification::default_instance_;
  delete NotificationReceivedNotification_reflection_;
}

void protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::protobuf_AddDesc_rpc_5ftypes_2eproto();
  ::bgs::protocol::notification::v2::client::protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n)api/client/v2/notification_listener.pr"
    "oto\022#bgs.protocol.notification.v2.client"
    "\032\017rpc_types.proto\032&api/client/v2/notific"
    "ation_types.proto\"l\n NotificationReceive"
    "dNotification\022H\n\rnotifications\030\001 \003(\01321.b"
    "gs.protocol.notification.v2.client.Notif"
    "ication2\346\001\n\024NotificationListener\022\202\001\n\026OnN"
    "otificationReceived\022E.bgs.protocol.notif"
    "ication.v2.client.NotificationReceivedNo"
    "tification\032\031.bgs.protocol.NO_RESPONSE\"\006\202"
    "\371+\002\010\001\032I\202\371+=\n9bnet.protocol.notification."
    "v2.client.NotificationListener8\001\212\371+\004\010\001\030\001"
    "B\005H\002\200\001\000", 487);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "api/client/v2/notification_listener.proto", &protobuf_RegisterTypes);
  NotificationReceivedNotification::default_instance_ = new NotificationReceivedNotification();
  NotificationReceivedNotification::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5flistener_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_api_2fclient_2fv2_2fnotification_5flistener_2eproto {
  StaticDescriptorInitializer_api_2fclient_2fv2_2fnotification_5flistener_2eproto() {
    protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
  }
} static_descriptor_initializer_api_2fclient_2fv2_2fnotification_5flistener_2eproto_;
// ===================================================================

#ifndef _MSC_VER
const int NotificationReceivedNotification::kNotificationsFieldNumber;
#endif  // !_MSC_VER

NotificationReceivedNotification::NotificationReceivedNotification()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.notification.v2.client.NotificationReceivedNotification)
}

void NotificationReceivedNotification::InitAsDefaultInstance() {
}

NotificationReceivedNotification::NotificationReceivedNotification(const NotificationReceivedNotification& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.notification.v2.client.NotificationReceivedNotification)
}

void NotificationReceivedNotification::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotificationReceivedNotification::~NotificationReceivedNotification() {
  // @@protoc_insertion_point(destructor:bgs.protocol.notification.v2.client.NotificationReceivedNotification)
  SharedDtor();
}

void NotificationReceivedNotification::SharedDtor() {
  if (this != default_instance_) {
  }
}

void NotificationReceivedNotification::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NotificationReceivedNotification::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NotificationReceivedNotification_descriptor_;
}

const NotificationReceivedNotification& NotificationReceivedNotification::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5flistener_2eproto();
  return *default_instance_;
}

NotificationReceivedNotification* NotificationReceivedNotification::default_instance_ = NULL;

NotificationReceivedNotification* NotificationReceivedNotification::New() const {
  return new NotificationReceivedNotification;
}

void NotificationReceivedNotification::Swap(NotificationReceivedNotification* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata NotificationReceivedNotification::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NotificationReceivedNotification_descriptor_;
  metadata.reflection = NotificationReceivedNotification_reflection_;
  return metadata;
}

// ===================================================================

NotificationListener::NotificationListener(bool use_original_hash) : ServiceBase(use_original_hash ? OriginalHash::value : NameHash::value) {
}

NotificationListener::~NotificationListener() {
}

google::protobuf::ServiceDescriptor const* NotificationListener::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NotificationListener_descriptor_;
}

void NotificationListener::OnNotificationReceived(::bgs::protocol::notification::v2::client::NotificationReceivedNotification const* request, bool client /*= false*/, bool server /*= false*/) {
  LogCallClientMethod("NotificationListener.OnNotificationReceived", "bgs.protocol.notification.v2.client.NotificationReceivedNotification", request);
  SendRequest(service_hash_, 1 | (client ? 0x40000000 : 0) | (server ? 0x80000000 : 0), request);
}

void NotificationListener::CallServerMethod(uint32 /*token*/, uint32 methodId, MessageBuffer /*buffer*/) {
  LogDisallowedMethod(methodId);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace v2
}  // namespace notification
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
