// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v1/club_enum.proto

#ifndef PROTOBUF_api_2fclient_2fv1_2fclub_5fenum_2eproto__INCLUDED
#define PROTOBUF_api_2fclient_2fv1_2fclub_5fenum_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace club {
namespace v1 {
namespace client {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv1_2fclub_5fenum_2eproto();
void protobuf_AssignDesc_api_2fclient_2fv1_2fclub_5fenum_2eproto();
void protobuf_ShutdownFile_api_2fclient_2fv1_2fclub_5fenum_2eproto();

enum ClubRemovedReason {
  CLUB_REMOVED_REASON_NONE = 0,
  CLUB_REMOVED_REASON_MEMBER_LEFT = 1,
  CLUB_REMOVED_REASON_MEMBER_KICKED = 2,
  CLUB_REMOVED_REASON_MEMBER_BANNED = 3,
  CLUB_REMOVED_REASON_MEMBER_REMOVED_BY_SERVICE = 4,
  CLUB_REMOVED_REASON_DESTROYED_BY_MEMBER = 5,
  CLUB_REMOVED_REASON_DESTROYED_BY_SERVICE = 6
};
TC_PROTO_API bool ClubRemovedReason_IsValid(int value);
const ClubRemovedReason ClubRemovedReason_MIN = CLUB_REMOVED_REASON_NONE;
const ClubRemovedReason ClubRemovedReason_MAX = CLUB_REMOVED_REASON_DESTROYED_BY_SERVICE;
const int ClubRemovedReason_ARRAYSIZE = ClubRemovedReason_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* ClubRemovedReason_descriptor();
inline const ::std::string& ClubRemovedReason_Name(ClubRemovedReason value) {
  return ::google::protobuf::internal::NameOfEnum(
    ClubRemovedReason_descriptor(), value);
}
inline bool ClubRemovedReason_Parse(
    const ::std::string& name, ClubRemovedReason* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ClubRemovedReason>(
    ClubRemovedReason_descriptor(), name, value);
}
enum StreamVoiceLevel {
  VOICE_LEVEL_DISABLED = 0,
  VOICE_LEVEL_PUSH_TO_TALK = 1,
  VOICE_LEVEL_OPEN_MIC = 2
};
TC_PROTO_API bool StreamVoiceLevel_IsValid(int value);
const StreamVoiceLevel StreamVoiceLevel_MIN = VOICE_LEVEL_DISABLED;
const StreamVoiceLevel StreamVoiceLevel_MAX = VOICE_LEVEL_OPEN_MIC;
const int StreamVoiceLevel_ARRAYSIZE = StreamVoiceLevel_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* StreamVoiceLevel_descriptor();
inline const ::std::string& StreamVoiceLevel_Name(StreamVoiceLevel value) {
  return ::google::protobuf::internal::NameOfEnum(
    StreamVoiceLevel_descriptor(), value);
}
inline bool StreamVoiceLevel_Parse(
    const ::std::string& name, StreamVoiceLevel* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StreamVoiceLevel>(
    StreamVoiceLevel_descriptor(), name, value);
}
enum VoiceMicrophoneState {
  MICROPHONE_STATE_NORMAL = 0,
  MICROPHONE_STATE_SELF_MUTE = 1,
  MICROPHONE_STATE_SELF_DEAF = 2
};
TC_PROTO_API bool VoiceMicrophoneState_IsValid(int value);
const VoiceMicrophoneState VoiceMicrophoneState_MIN = MICROPHONE_STATE_NORMAL;
const VoiceMicrophoneState VoiceMicrophoneState_MAX = MICROPHONE_STATE_SELF_DEAF;
const int VoiceMicrophoneState_ARRAYSIZE = VoiceMicrophoneState_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* VoiceMicrophoneState_descriptor();
inline const ::std::string& VoiceMicrophoneState_Name(VoiceMicrophoneState value) {
  return ::google::protobuf::internal::NameOfEnum(
    VoiceMicrophoneState_descriptor(), value);
}
inline bool VoiceMicrophoneState_Parse(
    const ::std::string& name, VoiceMicrophoneState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VoiceMicrophoneState>(
    VoiceMicrophoneState_descriptor(), name, value);
}
enum PresenceLevel {
  PRESENCE_LEVEL_NONE = 0,
  PRESENCE_LEVEL_BASIC = 1,
  PRESENCE_LEVEL_RICH = 2
};
TC_PROTO_API bool PresenceLevel_IsValid(int value);
const PresenceLevel PresenceLevel_MIN = PRESENCE_LEVEL_NONE;
const PresenceLevel PresenceLevel_MAX = PRESENCE_LEVEL_RICH;
const int PresenceLevel_ARRAYSIZE = PresenceLevel_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* PresenceLevel_descriptor();
inline const ::std::string& PresenceLevel_Name(PresenceLevel value) {
  return ::google::protobuf::internal::NameOfEnum(
    PresenceLevel_descriptor(), value);
}
inline bool PresenceLevel_Parse(
    const ::std::string& name, PresenceLevel* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PresenceLevel>(
    PresenceLevel_descriptor(), name, value);
}
enum WhisperLevel {
  WHISPER_LEVEL_OPEN = 0,
  WHISPER_LEVEL_RESTRICTED = 1
};
TC_PROTO_API bool WhisperLevel_IsValid(int value);
const WhisperLevel WhisperLevel_MIN = WHISPER_LEVEL_OPEN;
const WhisperLevel WhisperLevel_MAX = WHISPER_LEVEL_RESTRICTED;
const int WhisperLevel_ARRAYSIZE = WhisperLevel_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* WhisperLevel_descriptor();
inline const ::std::string& WhisperLevel_Name(WhisperLevel value) {
  return ::google::protobuf::internal::NameOfEnum(
    WhisperLevel_descriptor(), value);
}
inline bool WhisperLevel_Parse(
    const ::std::string& name, WhisperLevel* value) {
  return ::google::protobuf::internal::ParseNamedEnum<WhisperLevel>(
    WhisperLevel_descriptor(), name, value);
}
enum StreamNotificationFilter {
  STREAM_NOTIFICATION_FILTER_NONE = 0,
  STREAM_NOTIFICATION_FILTER_MENTION = 1,
  STREAM_NOTIFICATION_FILTER_ALL = 2
};
TC_PROTO_API bool StreamNotificationFilter_IsValid(int value);
const StreamNotificationFilter StreamNotificationFilter_MIN = STREAM_NOTIFICATION_FILTER_NONE;
const StreamNotificationFilter StreamNotificationFilter_MAX = STREAM_NOTIFICATION_FILTER_ALL;
const int StreamNotificationFilter_ARRAYSIZE = StreamNotificationFilter_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* StreamNotificationFilter_descriptor();
inline const ::std::string& StreamNotificationFilter_Name(StreamNotificationFilter value) {
  return ::google::protobuf::internal::NameOfEnum(
    StreamNotificationFilter_descriptor(), value);
}
inline bool StreamNotificationFilter_Parse(
    const ::std::string& name, StreamNotificationFilter* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StreamNotificationFilter>(
    StreamNotificationFilter_descriptor(), name, value);
}
// ===================================================================

// ===================================================================

// ===================================================================

// ===================================================================
// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace v1
}  // namespace club
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::ClubRemovedReason> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::ClubRemovedReason>() {
  return ::bgs::protocol::club::v1::client::ClubRemovedReason_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::StreamVoiceLevel> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::StreamVoiceLevel>() {
  return ::bgs::protocol::club::v1::client::StreamVoiceLevel_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::VoiceMicrophoneState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::VoiceMicrophoneState>() {
  return ::bgs::protocol::club::v1::client::VoiceMicrophoneState_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::PresenceLevel> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::PresenceLevel>() {
  return ::bgs::protocol::club::v1::client::PresenceLevel_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::WhisperLevel> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::WhisperLevel>() {
  return ::bgs::protocol::club::v1::client::WhisperLevel_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::club::v1::client::StreamNotificationFilter> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::club::v1::client::StreamNotificationFilter>() {
  return ::bgs::protocol::club::v1::client::StreamNotificationFilter_descriptor();
}
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2fclient_2fv1_2fclub_5fenum_2eproto__INCLUDED
