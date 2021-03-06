// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyTest.proto

#ifndef PROTOBUF_INCLUDED_MyTest_2eproto
#define PROTOBUF_INCLUDED_MyTest_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_MyTest_2eproto 

namespace protobuf_MyTest_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_MyTest_2eproto
namespace MyTest {
class AllMessage;
class AllMessageDefaultTypeInternal;
extern AllMessageDefaultTypeInternal _AllMessage_default_instance_;
class TestMessage;
class TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}  // namespace MyTest
namespace google {
namespace protobuf {
template<> ::MyTest::AllMessage* Arena::CreateMaybeMessage<::MyTest::AllMessage>(Arena*);
template<> ::MyTest::TestMessage* Arena::CreateMaybeMessage<::MyTest::TestMessage>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace MyTest {

// ===================================================================

class TestMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MyTest.TestMessage) */ {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(TestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestMessage* other);
  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMessage* New() const final {
    return CreateMaybeMessage<TestMessage>(NULL);
  }

  TestMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // uint64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // uint32 state = 2;
  void clear_state();
  static const int kStateFieldNumber = 2;
  ::google::protobuf::uint32 state() const;
  void set_state(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MyTest.TestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint64 id_;
  ::google::protobuf::uint32 state_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_MyTest_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AllMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MyTest.AllMessage) */ {
 public:
  AllMessage();
  virtual ~AllMessage();

  AllMessage(const AllMessage& from);

  inline AllMessage& operator=(const AllMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AllMessage(AllMessage&& from) noexcept
    : AllMessage() {
    *this = ::std::move(from);
  }

  inline AllMessage& operator=(AllMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AllMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AllMessage* internal_default_instance() {
    return reinterpret_cast<const AllMessage*>(
               &_AllMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AllMessage* other);
  friend void swap(AllMessage& a, AllMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AllMessage* New() const final {
    return CreateMaybeMessage<AllMessage>(NULL);
  }

  AllMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AllMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AllMessage& from);
  void MergeFrom(const AllMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AllMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .MyTest.TestMessage testmsg = 3;
  bool has_testmsg() const;
  void clear_testmsg();
  static const int kTestmsgFieldNumber = 3;
  private:
  const ::MyTest::TestMessage& _internal_testmsg() const;
  public:
  const ::MyTest::TestMessage& testmsg() const;
  ::MyTest::TestMessage* release_testmsg();
  ::MyTest::TestMessage* mutable_testmsg();
  void set_allocated_testmsg(::MyTest::TestMessage* testmsg);

  // uint64 all_id = 1;
  void clear_all_id();
  static const int kAllIdFieldNumber = 1;
  ::google::protobuf::uint64 all_id() const;
  void set_all_id(::google::protobuf::uint64 value);

  // uint32 all_state = 2;
  void clear_all_state();
  static const int kAllStateFieldNumber = 2;
  ::google::protobuf::uint32 all_state() const;
  void set_all_state(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MyTest.AllMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::MyTest::TestMessage* testmsg_;
  ::google::protobuf::uint64 all_id_;
  ::google::protobuf::uint32 all_state_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_MyTest_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessage

// uint64 id = 1;
inline void TestMessage::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 TestMessage::id() const {
  // @@protoc_insertion_point(field_get:MyTest.TestMessage.id)
  return id_;
}
inline void TestMessage::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:MyTest.TestMessage.id)
}

// uint32 state = 2;
inline void TestMessage::clear_state() {
  state_ = 0u;
}
inline ::google::protobuf::uint32 TestMessage::state() const {
  // @@protoc_insertion_point(field_get:MyTest.TestMessage.state)
  return state_;
}
inline void TestMessage::set_state(::google::protobuf::uint32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:MyTest.TestMessage.state)
}

// string name = 3;
inline void TestMessage::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestMessage::name() const {
  // @@protoc_insertion_point(field_get:MyTest.TestMessage.name)
  return name_.GetNoArena();
}
inline void TestMessage::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MyTest.TestMessage.name)
}
#if LANG_CXX11
inline void TestMessage::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MyTest.TestMessage.name)
}
#endif
inline void TestMessage::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MyTest.TestMessage.name)
}
inline void TestMessage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MyTest.TestMessage.name)
}
inline ::std::string* TestMessage::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:MyTest.TestMessage.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestMessage::release_name() {
  // @@protoc_insertion_point(field_release:MyTest.TestMessage.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestMessage::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:MyTest.TestMessage.name)
}

// -------------------------------------------------------------------

// AllMessage

// uint64 all_id = 1;
inline void AllMessage::clear_all_id() {
  all_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 AllMessage::all_id() const {
  // @@protoc_insertion_point(field_get:MyTest.AllMessage.all_id)
  return all_id_;
}
inline void AllMessage::set_all_id(::google::protobuf::uint64 value) {
  
  all_id_ = value;
  // @@protoc_insertion_point(field_set:MyTest.AllMessage.all_id)
}

// uint32 all_state = 2;
inline void AllMessage::clear_all_state() {
  all_state_ = 0u;
}
inline ::google::protobuf::uint32 AllMessage::all_state() const {
  // @@protoc_insertion_point(field_get:MyTest.AllMessage.all_state)
  return all_state_;
}
inline void AllMessage::set_all_state(::google::protobuf::uint32 value) {
  
  all_state_ = value;
  // @@protoc_insertion_point(field_set:MyTest.AllMessage.all_state)
}

// .MyTest.TestMessage testmsg = 3;
inline bool AllMessage::has_testmsg() const {
  return this != internal_default_instance() && testmsg_ != NULL;
}
inline void AllMessage::clear_testmsg() {
  if (GetArenaNoVirtual() == NULL && testmsg_ != NULL) {
    delete testmsg_;
  }
  testmsg_ = NULL;
}
inline const ::MyTest::TestMessage& AllMessage::_internal_testmsg() const {
  return *testmsg_;
}
inline const ::MyTest::TestMessage& AllMessage::testmsg() const {
  const ::MyTest::TestMessage* p = testmsg_;
  // @@protoc_insertion_point(field_get:MyTest.AllMessage.testmsg)
  return p != NULL ? *p : *reinterpret_cast<const ::MyTest::TestMessage*>(
      &::MyTest::_TestMessage_default_instance_);
}
inline ::MyTest::TestMessage* AllMessage::release_testmsg() {
  // @@protoc_insertion_point(field_release:MyTest.AllMessage.testmsg)
  
  ::MyTest::TestMessage* temp = testmsg_;
  testmsg_ = NULL;
  return temp;
}
inline ::MyTest::TestMessage* AllMessage::mutable_testmsg() {
  
  if (testmsg_ == NULL) {
    auto* p = CreateMaybeMessage<::MyTest::TestMessage>(GetArenaNoVirtual());
    testmsg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:MyTest.AllMessage.testmsg)
  return testmsg_;
}
inline void AllMessage::set_allocated_testmsg(::MyTest::TestMessage* testmsg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete testmsg_;
  }
  if (testmsg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      testmsg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, testmsg, submessage_arena);
    }
    
  } else {
    
  }
  testmsg_ = testmsg;
  // @@protoc_insertion_point(field_set_allocated:MyTest.AllMessage.testmsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace MyTest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_MyTest_2eproto
