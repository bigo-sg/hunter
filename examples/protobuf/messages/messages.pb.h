// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef PROTOBUF_messages_2eproto__INCLUDED
#define PROTOBUF_messages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_messages_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMessageImpl();
void InitDefaultsMessage();
inline void InitDefaults() {
  InitDefaultsMessage();
}
}  // namespace protobuf_messages_2eproto
namespace brec {
namespace example {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace example
}  // namespace brec
namespace brec {
namespace example {

// ===================================================================

class Message : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:brec.example.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(Message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Message* other);
  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const PROTOBUF_FINAL { return New(NULL); }

  Message* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Message* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string line = 1;
  void clear_line();
  static const int kLineFieldNumber = 1;
  const ::std::string& line() const;
  void set_line(const ::std::string& value);
  #if LANG_CXX11
  void set_line(::std::string&& value);
  #endif
  void set_line(const char* value);
  void set_line(const char* value, size_t size);
  ::std::string* mutable_line();
  ::std::string* release_line();
  void set_allocated_line(::std::string* line);

  // @@protoc_insertion_point(class_scope:brec.example.Message)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr line_;
  mutable int _cached_size_;
  friend struct ::protobuf_messages_2eproto::TableStruct;
  friend void ::protobuf_messages_2eproto::InitDefaultsMessageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// string line = 1;
inline void Message::clear_line() {
  line_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Message::line() const {
  // @@protoc_insertion_point(field_get:brec.example.Message.line)
  return line_.GetNoArena();
}
inline void Message::set_line(const ::std::string& value) {
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brec.example.Message.line)
}
#if LANG_CXX11
inline void Message::set_line(::std::string&& value) {
  
  line_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:brec.example.Message.line)
}
#endif
inline void Message::set_line(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brec.example.Message.line)
}
inline void Message::set_line(const char* value, size_t size) {
  
  line_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brec.example.Message.line)
}
inline ::std::string* Message::mutable_line() {
  
  // @@protoc_insertion_point(field_mutable:brec.example.Message.line)
  return line_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Message::release_line() {
  // @@protoc_insertion_point(field_release:brec.example.Message.line)
  
  return line_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_line(::std::string* line) {
  if (line != NULL) {
    
  } else {
    
  }
  line_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), line);
  // @@protoc_insertion_point(field_set_allocated:brec.example.Message.line)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace example
}  // namespace brec

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_2eproto__INCLUDED
