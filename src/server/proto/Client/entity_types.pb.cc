// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: entity_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "entity_types.pb.h"

#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

namespace {

const ::google::protobuf::Descriptor* EntityId_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EntityId_reflection_ = NULL;
const ::google::protobuf::Descriptor* Identity_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Identity_reflection_ = NULL;

}  // namespace

void protobuf_AssignDesc_entity_5ftypes_2eproto() {
  protobuf_AddDesc_entity_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "entity_types.proto");
  GOOGLE_CHECK(file != NULL);
  EntityId_descriptor_ = file->message_type(0);
  static const int EntityId_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityId, high_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityId, low_),
  };
  EntityId_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EntityId_descriptor_,
      EntityId::default_instance_,
      EntityId_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityId, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntityId, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EntityId));
  Identity_descriptor_ = file->message_type(1);
  static const int Identity_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Identity, account_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Identity, game_account_id_),
  };
  Identity_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Identity_descriptor_,
      Identity::default_instance_,
      Identity_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Identity, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Identity, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Identity));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_entity_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EntityId_descriptor_, &EntityId::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Identity_descriptor_, &Identity::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_entity_5ftypes_2eproto() {
  delete EntityId::default_instance_;
  delete EntityId_reflection_;
  delete Identity::default_instance_;
  delete Identity_reflection_;
}

void protobuf_AddDesc_entity_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::protobuf_AddDesc_global_5fextensions_2ffield_5foptions_2eproto();
  ::bgs::protocol::protobuf_AddDesc_global_5fextensions_2fmessage_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022entity_types.proto\022\014bgs.protocol\032%glob"
    "al_extensions/field_options.proto\032\'globa"
    "l_extensions/message_options.proto\"=\n\010En"
    "tityId\022\024\n\004high\030\001 \001(\006B\006\202\371+\002\010\002\022\023\n\003low\030\002 \001("
    "\006B\006\202\371+\002\010\002:\006\202\371+\002\010\001\"{\n\010Identity\0224\n\naccount"
    "_id\030\001 \001(\0132\026.bgs.protocol.EntityIdB\010\212\371+\004:"
    "\002\020\001\0229\n\017game_account_id\030\002 \001(\0132\026.bgs.proto"
    "col.EntityIdB\010\212\371+\004:\002\020\002B\035\n\014bgs.protocolB\013"
    "EntityProtoH\002", 333);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "entity_types.proto", &protobuf_RegisterTypes);
  EntityId::default_instance_ = new EntityId();
  Identity::default_instance_ = new Identity();
  EntityId::default_instance_->InitAsDefaultInstance();
  Identity::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_entity_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_entity_5ftypes_2eproto {
  StaticDescriptorInitializer_entity_5ftypes_2eproto() {
    protobuf_AddDesc_entity_5ftypes_2eproto();
  }
} static_descriptor_initializer_entity_5ftypes_2eproto_;
// ===================================================================

#ifndef _MSC_VER
const int EntityId::kHighFieldNumber;
const int EntityId::kLowFieldNumber;
#endif  // !_MSC_VER

EntityId::EntityId()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.EntityId)
}

void EntityId::InitAsDefaultInstance() {
}

EntityId::EntityId(const EntityId& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.EntityId)
}

void EntityId::SharedCtor() {
  _cached_size_ = 0;
  high_ = GOOGLE_ULONGLONG(0);
  low_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntityId::~EntityId() {
  // @@protoc_insertion_point(destructor:bgs.protocol.EntityId)
  SharedDtor();
}

void EntityId::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EntityId::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntityId::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntityId_descriptor_;
}

const EntityId& EntityId::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_entity_5ftypes_2eproto();
  return *default_instance_;
}

EntityId* EntityId::default_instance_ = NULL;

EntityId* EntityId::New() const {
  return new EntityId;
}

void EntityId::Swap(EntityId* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata EntityId::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EntityId_descriptor_;
  metadata.reflection = EntityId_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int Identity::kAccountIdFieldNumber;
const int Identity::kGameAccountIdFieldNumber;
#endif  // !_MSC_VER

Identity::Identity()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.Identity)
}

void Identity::InitAsDefaultInstance() {
  account_id_ = const_cast< ::bgs::protocol::EntityId*>(&::bgs::protocol::EntityId::default_instance());
  game_account_id_ = const_cast< ::bgs::protocol::EntityId*>(&::bgs::protocol::EntityId::default_instance());
}

Identity::Identity(const Identity& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.Identity)
}

void Identity::SharedCtor() {
  _cached_size_ = 0;
  account_id_ = NULL;
  game_account_id_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Identity::~Identity() {
  // @@protoc_insertion_point(destructor:bgs.protocol.Identity)
  SharedDtor();
}

void Identity::SharedDtor() {
  if (this != default_instance_) {
    delete account_id_;
    delete game_account_id_;
  }
}

void Identity::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Identity::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Identity_descriptor_;
}

const Identity& Identity::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_entity_5ftypes_2eproto();
  return *default_instance_;
}

Identity* Identity::default_instance_ = NULL;

Identity* Identity::New() const {
  return new Identity;
}

void Identity::Swap(Identity* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata Identity::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Identity_descriptor_;
  metadata.reflection = Identity_reflection_;
  return metadata;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
