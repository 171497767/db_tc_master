// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/common/v1/club_type.proto

#ifndef PROTOBUF_api_2fcommon_2fv1_2fclub_5ftype_2eproto__INCLUDED
#define PROTOBUF_api_2fcommon_2fv1_2fclub_5ftype_2eproto__INCLUDED

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
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace club {
namespace v1 {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_api_2fcommon_2fv1_2fclub_5ftype_2eproto();
void protobuf_AssignDesc_api_2fcommon_2fv1_2fclub_5ftype_2eproto();
void protobuf_ShutdownFile_api_2fcommon_2fv1_2fclub_5ftype_2eproto();

class UniqueClubType;

// ===================================================================

class TC_PROTO_API UniqueClubType : public ::google::protobuf::Message {
 public:
  UniqueClubType();
  virtual ~UniqueClubType();

  UniqueClubType(const UniqueClubType& from);

  inline UniqueClubType& operator=(const UniqueClubType& from) {
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
  static const UniqueClubType& default_instance();

  void Swap(UniqueClubType* other);

  // implements Message ----------------------------------------------

  UniqueClubType* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional fixed32 program = 1;
  inline bool has_program() const;
  inline void clear_program();
  static const int kProgramFieldNumber = 1;
  inline ::google::protobuf::uint32 program() const;
  inline void set_program(::google::protobuf::uint32 value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:bgs.protocol.club.v1.UniqueClubType)
 private:
  inline void set_has_program();
  inline void clear_has_program();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::uint32 program_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fcommon_2fv1_2fclub_5ftype_2eproto();
  friend void protobuf_AssignDesc_api_2fcommon_2fv1_2fclub_5ftype_2eproto();
  friend void protobuf_ShutdownFile_api_2fcommon_2fv1_2fclub_5ftype_2eproto();

  void InitAsDefaultInstance();
  static UniqueClubType* default_instance_;
};
// ===================================================================

// ===================================================================

// ===================================================================

// UniqueClubType

// optional fixed32 program = 1;
inline bool UniqueClubType::has_program() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UniqueClubType::set_has_program() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UniqueClubType::clear_has_program() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UniqueClubType::clear_program() {
  program_ = 0u;
  clear_has_program();
}
inline ::google::protobuf::uint32 UniqueClubType::program() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.UniqueClubType.program)
  return program_;
}
inline void UniqueClubType::set_program(::google::protobuf::uint32 value) {
  set_has_program();
  program_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.UniqueClubType.program)
}

// optional string name = 2;
inline bool UniqueClubType::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UniqueClubType::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UniqueClubType::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UniqueClubType::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& UniqueClubType::name() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.UniqueClubType.name)
  return *name_;
}
inline void UniqueClubType::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.UniqueClubType.name)
}
inline void UniqueClubType::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.UniqueClubType.name)
}
inline void UniqueClubType::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.UniqueClubType.name)
}
inline ::std::string* UniqueClubType::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.UniqueClubType.name)
  return name_;
}
inline ::std::string* UniqueClubType::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void UniqueClubType::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.UniqueClubType.name)
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace club
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2fcommon_2fv1_2fclub_5ftype_2eproto__INCLUDED
