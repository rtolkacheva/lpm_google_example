// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: libfuzzer_example.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_libfuzzer_5fexample_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_libfuzzer_5fexample_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_libfuzzer_5fexample_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_libfuzzer_5fexample_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_libfuzzer_5fexample_2eproto;
namespace libfuzzer_example {
class Msg;
struct MsgDefaultTypeInternal;
extern MsgDefaultTypeInternal _Msg_default_instance_;
}  // namespace libfuzzer_example
PROTOBUF_NAMESPACE_OPEN
template<> ::libfuzzer_example::Msg* Arena::CreateMaybeMessage<::libfuzzer_example::Msg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace libfuzzer_example {

// ===================================================================

class Msg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:libfuzzer_example.Msg) */ {
 public:
  inline Msg() : Msg(nullptr) {}
  ~Msg() override;
  explicit PROTOBUF_CONSTEXPR Msg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Msg(const Msg& from);
  Msg(Msg&& from) noexcept
    : Msg() {
    *this = ::std::move(from);
  }

  inline Msg& operator=(const Msg& from) {
    CopyFrom(from);
    return *this;
  }
  inline Msg& operator=(Msg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Msg& default_instance() {
    return *internal_default_instance();
  }
  static inline const Msg* internal_default_instance() {
    return reinterpret_cast<const Msg*>(
               &_Msg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Msg& a, Msg& b) {
    a.Swap(&b);
  }
  inline void Swap(Msg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Msg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Msg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Msg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Msg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Msg& from) {
    Msg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Msg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "libfuzzer_example.Msg";
  }
  protected:
  explicit Msg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOptionalStringFieldNumber = 3,
    kAnyFieldNumber = 4,
    kOptionalUint64FieldNumber = 2,
    kOptionalFloatFieldNumber = 1,
  };
  // optional string optional_string = 3;
  bool has_optional_string() const;
  private:
  bool _internal_has_optional_string() const;
  public:
  void clear_optional_string();
  const std::string& optional_string() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_optional_string(ArgT0&& arg0, ArgT... args);
  std::string* mutable_optional_string();
  PROTOBUF_NODISCARD std::string* release_optional_string();
  void set_allocated_optional_string(std::string* optional_string);
  private:
  const std::string& _internal_optional_string() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_optional_string(const std::string& value);
  std::string* _internal_mutable_optional_string();
  public:

  // optional .google.protobuf.Any any = 4;
  bool has_any() const;
  private:
  bool _internal_has_any() const;
  public:
  void clear_any();
  const ::PROTOBUF_NAMESPACE_ID::Any& any() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Any* release_any();
  ::PROTOBUF_NAMESPACE_ID::Any* mutable_any();
  void set_allocated_any(::PROTOBUF_NAMESPACE_ID::Any* any);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Any& _internal_any() const;
  ::PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_any();
  public:
  void unsafe_arena_set_allocated_any(
      ::PROTOBUF_NAMESPACE_ID::Any* any);
  ::PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_any();

  // optional uint64 optional_uint64 = 2;
  bool has_optional_uint64() const;
  private:
  bool _internal_has_optional_uint64() const;
  public:
  void clear_optional_uint64();
  uint64_t optional_uint64() const;
  void set_optional_uint64(uint64_t value);
  private:
  uint64_t _internal_optional_uint64() const;
  void _internal_set_optional_uint64(uint64_t value);
  public:

  // optional float optional_float = 1;
  bool has_optional_float() const;
  private:
  bool _internal_has_optional_float() const;
  public:
  void clear_optional_float();
  float optional_float() const;
  void set_optional_float(float value);
  private:
  float _internal_optional_float() const;
  void _internal_set_optional_float(float value);
  public:

  // @@protoc_insertion_point(class_scope:libfuzzer_example.Msg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr optional_string_;
    ::PROTOBUF_NAMESPACE_ID::Any* any_;
    uint64_t optional_uint64_;
    float optional_float_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_libfuzzer_5fexample_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Msg

// optional float optional_float = 1;
inline bool Msg::_internal_has_optional_float() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Msg::has_optional_float() const {
  return _internal_has_optional_float();
}
inline void Msg::clear_optional_float() {
  _impl_.optional_float_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline float Msg::_internal_optional_float() const {
  return _impl_.optional_float_;
}
inline float Msg::optional_float() const {
  // @@protoc_insertion_point(field_get:libfuzzer_example.Msg.optional_float)
  return _internal_optional_float();
}
inline void Msg::_internal_set_optional_float(float value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.optional_float_ = value;
}
inline void Msg::set_optional_float(float value) {
  _internal_set_optional_float(value);
  // @@protoc_insertion_point(field_set:libfuzzer_example.Msg.optional_float)
}

// optional uint64 optional_uint64 = 2;
inline bool Msg::_internal_has_optional_uint64() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Msg::has_optional_uint64() const {
  return _internal_has_optional_uint64();
}
inline void Msg::clear_optional_uint64() {
  _impl_.optional_uint64_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline uint64_t Msg::_internal_optional_uint64() const {
  return _impl_.optional_uint64_;
}
inline uint64_t Msg::optional_uint64() const {
  // @@protoc_insertion_point(field_get:libfuzzer_example.Msg.optional_uint64)
  return _internal_optional_uint64();
}
inline void Msg::_internal_set_optional_uint64(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.optional_uint64_ = value;
}
inline void Msg::set_optional_uint64(uint64_t value) {
  _internal_set_optional_uint64(value);
  // @@protoc_insertion_point(field_set:libfuzzer_example.Msg.optional_uint64)
}

// optional string optional_string = 3;
inline bool Msg::_internal_has_optional_string() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Msg::has_optional_string() const {
  return _internal_has_optional_string();
}
inline void Msg::clear_optional_string() {
  _impl_.optional_string_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Msg::optional_string() const {
  // @@protoc_insertion_point(field_get:libfuzzer_example.Msg.optional_string)
  return _internal_optional_string();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Msg::set_optional_string(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.optional_string_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:libfuzzer_example.Msg.optional_string)
}
inline std::string* Msg::mutable_optional_string() {
  std::string* _s = _internal_mutable_optional_string();
  // @@protoc_insertion_point(field_mutable:libfuzzer_example.Msg.optional_string)
  return _s;
}
inline const std::string& Msg::_internal_optional_string() const {
  return _impl_.optional_string_.Get();
}
inline void Msg::_internal_set_optional_string(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.optional_string_.Set(value, GetArenaForAllocation());
}
inline std::string* Msg::_internal_mutable_optional_string() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.optional_string_.Mutable(GetArenaForAllocation());
}
inline std::string* Msg::release_optional_string() {
  // @@protoc_insertion_point(field_release:libfuzzer_example.Msg.optional_string)
  if (!_internal_has_optional_string()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.optional_string_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.optional_string_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Msg::set_allocated_optional_string(std::string* optional_string) {
  if (optional_string != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.optional_string_.SetAllocated(optional_string, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.optional_string_.IsDefault()) {
    _impl_.optional_string_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:libfuzzer_example.Msg.optional_string)
}

// optional .google.protobuf.Any any = 4;
inline bool Msg::_internal_has_any() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.any_ != nullptr);
  return value;
}
inline bool Msg::has_any() const {
  return _internal_has_any();
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& Msg::_internal_any() const {
  const ::PROTOBUF_NAMESPACE_ID::Any* p = _impl_.any_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Any&>(
      ::PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& Msg::any() const {
  // @@protoc_insertion_point(field_get:libfuzzer_example.Msg.any)
  return _internal_any();
}
inline void Msg::unsafe_arena_set_allocated_any(
    ::PROTOBUF_NAMESPACE_ID::Any* any) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.any_);
  }
  _impl_.any_ = any;
  if (any) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:libfuzzer_example.Msg.any)
}
inline ::PROTOBUF_NAMESPACE_ID::Any* Msg::release_any() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Any* temp = _impl_.any_;
  _impl_.any_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* Msg::unsafe_arena_release_any() {
  // @@protoc_insertion_point(field_release:libfuzzer_example.Msg.any)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Any* temp = _impl_.any_;
  _impl_.any_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* Msg::_internal_mutable_any() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.any_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Any>(GetArenaForAllocation());
    _impl_.any_ = p;
  }
  return _impl_.any_;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* Msg::mutable_any() {
  ::PROTOBUF_NAMESPACE_ID::Any* _msg = _internal_mutable_any();
  // @@protoc_insertion_point(field_mutable:libfuzzer_example.Msg.any)
  return _msg;
}
inline void Msg::set_allocated_any(::PROTOBUF_NAMESPACE_ID::Any* any) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.any_);
  }
  if (any) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(any));
    if (message_arena != submessage_arena) {
      any = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, any, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.any_ = any;
  // @@protoc_insertion_point(field_set_allocated:libfuzzer_example.Msg.any)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace libfuzzer_example

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_libfuzzer_5fexample_2eproto
