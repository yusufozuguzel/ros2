// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "levha_detection_system/srv/detail/levha_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace levha_detection_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LevhaList_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) levha_detection_system::srv::LevhaList_Request(_init);
}

void LevhaList_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<levha_detection_system::srv::LevhaList_Request *>(message_memory);
  typed_message->~LevhaList_Request();
}

size_t size_function__LevhaList_Request__levha_adlari(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LevhaList_Request__levha_adlari(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__LevhaList_Request__levha_adlari(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__LevhaList_Request__levha_adlari(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LevhaList_Request__confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LevhaList_Request__confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LevhaList_Request__confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LevhaList_Request__confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LevhaList_Request__xs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LevhaList_Request__xs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LevhaList_Request__xs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LevhaList_Request__xs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LevhaList_Request__ys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LevhaList_Request__ys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LevhaList_Request__ys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LevhaList_Request__ys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LevhaList_Request_message_member_array[5] = {
  {
    "levha_adlari",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Request, levha_adlari),  // bytes offset in struct
    nullptr,  // default value
    size_function__LevhaList_Request__levha_adlari,  // size() function pointer
    get_const_function__LevhaList_Request__levha_adlari,  // get_const(index) function pointer
    get_function__LevhaList_Request__levha_adlari,  // get(index) function pointer
    resize_function__LevhaList_Request__levha_adlari  // resize(index) function pointer
  },
  {
    "confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Request, confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__LevhaList_Request__confidences,  // size() function pointer
    get_const_function__LevhaList_Request__confidences,  // get_const(index) function pointer
    get_function__LevhaList_Request__confidences,  // get(index) function pointer
    resize_function__LevhaList_Request__confidences  // resize(index) function pointer
  },
  {
    "xs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Request, xs),  // bytes offset in struct
    nullptr,  // default value
    size_function__LevhaList_Request__xs,  // size() function pointer
    get_const_function__LevhaList_Request__xs,  // get_const(index) function pointer
    get_function__LevhaList_Request__xs,  // get(index) function pointer
    resize_function__LevhaList_Request__xs  // resize(index) function pointer
  },
  {
    "ys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Request, ys),  // bytes offset in struct
    nullptr,  // default value
    size_function__LevhaList_Request__ys,  // size() function pointer
    get_const_function__LevhaList_Request__ys,  // get_const(index) function pointer
    get_function__LevhaList_Request__ys,  // get(index) function pointer
    resize_function__LevhaList_Request__ys  // resize(index) function pointer
  },
  {
    "statu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Request, statu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LevhaList_Request_message_members = {
  "levha_detection_system::srv",  // message namespace
  "LevhaList_Request",  // message name
  5,  // number of fields
  sizeof(levha_detection_system::srv::LevhaList_Request),
  LevhaList_Request_message_member_array,  // message members
  LevhaList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LevhaList_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LevhaList_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LevhaList_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace levha_detection_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<levha_detection_system::srv::LevhaList_Request>()
{
  return &::levha_detection_system::srv::rosidl_typesupport_introspection_cpp::LevhaList_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, levha_detection_system, srv, LevhaList_Request)() {
  return &::levha_detection_system::srv::rosidl_typesupport_introspection_cpp::LevhaList_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace levha_detection_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LevhaList_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) levha_detection_system::srv::LevhaList_Response(_init);
}

void LevhaList_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<levha_detection_system::srv::LevhaList_Response *>(message_memory);
  typed_message->~LevhaList_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LevhaList_Response_message_member_array[3] = {
  {
    "en_yakin_levha",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Response, en_yakin_levha),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uzaklik",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Response, uzaklik),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "durum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system::srv::LevhaList_Response, durum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LevhaList_Response_message_members = {
  "levha_detection_system::srv",  // message namespace
  "LevhaList_Response",  // message name
  3,  // number of fields
  sizeof(levha_detection_system::srv::LevhaList_Response),
  LevhaList_Response_message_member_array,  // message members
  LevhaList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LevhaList_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LevhaList_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LevhaList_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace levha_detection_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<levha_detection_system::srv::LevhaList_Response>()
{
  return &::levha_detection_system::srv::rosidl_typesupport_introspection_cpp::LevhaList_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, levha_detection_system, srv, LevhaList_Response)() {
  return &::levha_detection_system::srv::rosidl_typesupport_introspection_cpp::LevhaList_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace levha_detection_system
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers LevhaList_service_members = {
  "levha_detection_system::srv",  // service namespace
  "LevhaList",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<levha_detection_system::srv::LevhaList>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t LevhaList_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LevhaList_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace levha_detection_system


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<levha_detection_system::srv::LevhaList>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::levha_detection_system::srv::rosidl_typesupport_introspection_cpp::LevhaList_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::levha_detection_system::srv::LevhaList_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::levha_detection_system::srv::LevhaList_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, levha_detection_system, srv, LevhaList)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<levha_detection_system::srv::LevhaList>();
}

#ifdef __cplusplus
}
#endif
