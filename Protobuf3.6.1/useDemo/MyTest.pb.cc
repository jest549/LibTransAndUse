// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyTest.proto

#include "MyTest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_MyTest_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_MyTest_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_TestMessage;
}  // namespace protobuf_MyTest_2eproto
namespace MyTest {
class TestMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestMessage>
      _instance;
} _TestMessage_default_instance_;
class AllMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AllMessage>
      _instance;
} _AllMessage_default_instance_;
}  // namespace MyTest
namespace protobuf_MyTest_2eproto {
static void InitDefaultsTestMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::MyTest::_TestMessage_default_instance_;
    new (ptr) ::MyTest::TestMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::MyTest::TestMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TestMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTestMessage}, {}};

static void InitDefaultsAllMessage() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::MyTest::_AllMessage_default_instance_;
    new (ptr) ::MyTest::AllMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::MyTest::AllMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AllMessage =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAllMessage}, {
      &protobuf_MyTest_2eproto::scc_info_TestMessage.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TestMessage.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AllMessage.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::TestMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::TestMessage, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::TestMessage, state_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::TestMessage, name_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::AllMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::AllMessage, all_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::AllMessage, all_state_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::MyTest::AllMessage, testmsg_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::MyTest::TestMessage)},
  { 8, -1, sizeof(::MyTest::AllMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::MyTest::_TestMessage_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::MyTest::_AllMessage_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "MyTest.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014MyTest.proto\022\006MyTest\"6\n\013TestMessage\022\n\n"
      "\002id\030\001 \001(\004\022\r\n\005state\030\002 \001(\r\022\014\n\004name\030\003 \001(\t\"U"
      "\n\nAllMessage\022\016\n\006all_id\030\001 \001(\004\022\021\n\tall_stat"
      "e\030\002 \001(\r\022$\n\007testmsg\030\003 \001(\0132\023.MyTest.TestMe"
      "ssageb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 173);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MyTest.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_MyTest_2eproto
namespace MyTest {

// ===================================================================

void TestMessage::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMessage::kIdFieldNumber;
const int TestMessage::kStateFieldNumber;
const int TestMessage::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMessage::TestMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_MyTest_2eproto::scc_info_TestMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:MyTest.TestMessage)
}
TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&id_)) + sizeof(state_));
  // @@protoc_insertion_point(copy_constructor:MyTest.TestMessage)
}

void TestMessage::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&id_)) + sizeof(state_));
}

TestMessage::~TestMessage() {
  // @@protoc_insertion_point(destructor:MyTest.TestMessage)
  SharedDtor();
}

void TestMessage::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TestMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  ::protobuf_MyTest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_MyTest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TestMessage& TestMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_MyTest_2eproto::scc_info_TestMessage.base);
  return *internal_default_instance();
}


void TestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:MyTest.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&id_)) + sizeof(state_));
  _internal_metadata_.Clear();
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MyTest.TestMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 state = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "MyTest.TestMessage.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MyTest.TestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MyTest.TestMessage)
  return false;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MyTest.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->id(), output);
  }

  // uint32 state = 2;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->state(), output);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "MyTest.TestMessage.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:MyTest.TestMessage)
}

::google::protobuf::uint8* TestMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:MyTest.TestMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->id(), target);
  }

  // uint32 state = 2;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->state(), target);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "MyTest.TestMessage.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyTest.TestMessage)
  return target;
}

size_t TestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyTest.TestMessage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // uint64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->id());
  }

  // uint32 state = 2;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MyTest.TestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const TestMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MyTest.TestMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MyTest.TestMessage)
    MergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MyTest.TestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.state() != 0) {
    set_state(from.state());
  }
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MyTest.TestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyTest.TestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessage::IsInitialized() const {
  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMessage::InternalSwap(TestMessage* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(state_, other->state_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_MyTest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_MyTest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AllMessage::InitAsDefaultInstance() {
  ::MyTest::_AllMessage_default_instance_._instance.get_mutable()->testmsg_ = const_cast< ::MyTest::TestMessage*>(
      ::MyTest::TestMessage::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AllMessage::kAllIdFieldNumber;
const int AllMessage::kAllStateFieldNumber;
const int AllMessage::kTestmsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AllMessage::AllMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_MyTest_2eproto::scc_info_AllMessage.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:MyTest.AllMessage)
}
AllMessage::AllMessage(const AllMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_testmsg()) {
    testmsg_ = new ::MyTest::TestMessage(*from.testmsg_);
  } else {
    testmsg_ = NULL;
  }
  ::memcpy(&all_id_, &from.all_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&all_state_) -
    reinterpret_cast<char*>(&all_id_)) + sizeof(all_state_));
  // @@protoc_insertion_point(copy_constructor:MyTest.AllMessage)
}

void AllMessage::SharedCtor() {
  ::memset(&testmsg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&all_state_) -
      reinterpret_cast<char*>(&testmsg_)) + sizeof(all_state_));
}

AllMessage::~AllMessage() {
  // @@protoc_insertion_point(destructor:MyTest.AllMessage)
  SharedDtor();
}

void AllMessage::SharedDtor() {
  if (this != internal_default_instance()) delete testmsg_;
}

void AllMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AllMessage::descriptor() {
  ::protobuf_MyTest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_MyTest_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AllMessage& AllMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_MyTest_2eproto::scc_info_AllMessage.base);
  return *internal_default_instance();
}


void AllMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:MyTest.AllMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && testmsg_ != NULL) {
    delete testmsg_;
  }
  testmsg_ = NULL;
  ::memset(&all_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&all_state_) -
      reinterpret_cast<char*>(&all_id_)) + sizeof(all_state_));
  _internal_metadata_.Clear();
}

bool AllMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MyTest.AllMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 all_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &all_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 all_state = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &all_state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .MyTest.TestMessage testmsg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_testmsg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MyTest.AllMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MyTest.AllMessage)
  return false;
#undef DO_
}

void AllMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MyTest.AllMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 all_id = 1;
  if (this->all_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->all_id(), output);
  }

  // uint32 all_state = 2;
  if (this->all_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->all_state(), output);
  }

  // .MyTest.TestMessage testmsg = 3;
  if (this->has_testmsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_testmsg(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:MyTest.AllMessage)
}

::google::protobuf::uint8* AllMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:MyTest.AllMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 all_id = 1;
  if (this->all_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->all_id(), target);
  }

  // uint32 all_state = 2;
  if (this->all_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->all_state(), target);
  }

  // .MyTest.TestMessage testmsg = 3;
  if (this->has_testmsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_testmsg(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyTest.AllMessage)
  return target;
}

size_t AllMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyTest.AllMessage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .MyTest.TestMessage testmsg = 3;
  if (this->has_testmsg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *testmsg_);
  }

  // uint64 all_id = 1;
  if (this->all_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->all_id());
  }

  // uint32 all_state = 2;
  if (this->all_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->all_state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AllMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MyTest.AllMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const AllMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AllMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MyTest.AllMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MyTest.AllMessage)
    MergeFrom(*source);
  }
}

void AllMessage::MergeFrom(const AllMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MyTest.AllMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_testmsg()) {
    mutable_testmsg()->::MyTest::TestMessage::MergeFrom(from.testmsg());
  }
  if (from.all_id() != 0) {
    set_all_id(from.all_id());
  }
  if (from.all_state() != 0) {
    set_all_state(from.all_state());
  }
}

void AllMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MyTest.AllMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AllMessage::CopyFrom(const AllMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyTest.AllMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AllMessage::IsInitialized() const {
  return true;
}

void AllMessage::Swap(AllMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AllMessage::InternalSwap(AllMessage* other) {
  using std::swap;
  swap(testmsg_, other->testmsg_);
  swap(all_id_, other->all_id_);
  swap(all_state_, other->all_state_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AllMessage::GetMetadata() const {
  protobuf_MyTest_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_MyTest_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace MyTest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::MyTest::TestMessage* Arena::CreateMaybeMessage< ::MyTest::TestMessage >(Arena* arena) {
  return Arena::CreateInternal< ::MyTest::TestMessage >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::MyTest::AllMessage* Arena::CreateMaybeMessage< ::MyTest::AllMessage >(Arena* arena) {
  return Arena::CreateInternal< ::MyTest::AllMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
