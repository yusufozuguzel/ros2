// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "levha_detection_system/srv/detail/levha_list__rosidl_typesupport_introspection_c.h"
#include "levha_detection_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "levha_detection_system/srv/detail/levha_list__functions.h"
#include "levha_detection_system/srv/detail/levha_list__struct.h"


// Include directives for member types
// Member `levha_adlari`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidences`
// Member `xs`
// Member `ys`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  levha_detection_system__srv__LevhaList_Request__init(message_memory);
}

void LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_fini_function(void * message_memory)
{
  levha_detection_system__srv__LevhaList_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_member_array[5] = {
  {
    "levha_adlari",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Request, levha_adlari),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Request, confidences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Request, xs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Request, ys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Request, statu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_members = {
  "levha_detection_system__srv",  // message namespace
  "LevhaList_Request",  // message name
  5,  // number of fields
  sizeof(levha_detection_system__srv__LevhaList_Request),
  LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_member_array,  // message members
  LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_type_support_handle = {
  0,
  &LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_levha_detection_system
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Request)() {
  if (!LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_type_support_handle.typesupport_identifier) {
    LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LevhaList_Request__rosidl_typesupport_introspection_c__LevhaList_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "levha_detection_system/srv/detail/levha_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "levha_detection_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__functions.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__struct.h"


// Include directives for member types
// Member `en_yakin_levha`
// Member `durum`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  levha_detection_system__srv__LevhaList_Response__init(message_memory);
}

void LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_fini_function(void * message_memory)
{
  levha_detection_system__srv__LevhaList_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_member_array[3] = {
  {
    "en_yakin_levha",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Response, en_yakin_levha),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uzaklik",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Response, uzaklik),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "durum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(levha_detection_system__srv__LevhaList_Response, durum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_members = {
  "levha_detection_system__srv",  // message namespace
  "LevhaList_Response",  // message name
  3,  // number of fields
  sizeof(levha_detection_system__srv__LevhaList_Response),
  LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_member_array,  // message members
  LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_type_support_handle = {
  0,
  &LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_levha_detection_system
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Response)() {
  if (!LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_type_support_handle.typesupport_identifier) {
    LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LevhaList_Response__rosidl_typesupport_introspection_c__LevhaList_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "levha_detection_system/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_members = {
  "levha_detection_system__srv",  // service namespace
  "LevhaList",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_Request_message_type_support_handle,
  NULL  // response message
  // levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_Response_message_type_support_handle
};

static rosidl_service_type_support_t levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_type_support_handle = {
  0,
  &levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_levha_detection_system
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList)() {
  if (!levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_type_support_handle.typesupport_identifier) {
    levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, levha_detection_system, srv, LevhaList_Response)()->data;
  }

  return &levha_detection_system__srv__detail__levha_list__rosidl_typesupport_introspection_c__LevhaList_service_type_support_handle;
}
