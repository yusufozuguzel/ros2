// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice
#include "levha_detection_system/srv/detail/levha_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "levha_detection_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "levha_detection_system/srv/detail/levha_list__struct.h"
#include "levha_detection_system/srv/detail/levha_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // confidences, xs, ys
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // confidences, xs, ys
#include "rosidl_runtime_c/string.h"  // levha_adlari
#include "rosidl_runtime_c/string_functions.h"  // levha_adlari

// forward declare type support functions


using _LevhaList_Request__ros_msg_type = levha_detection_system__srv__LevhaList_Request;

static bool _LevhaList_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LevhaList_Request__ros_msg_type * ros_message = static_cast<const _LevhaList_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: levha_adlari
  {
    size_t size = ros_message->levha_adlari.size;
    auto array_ptr = ros_message->levha_adlari.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: confidences
  {
    size_t size = ros_message->confidences.size;
    auto array_ptr = ros_message->confidences.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: xs
  {
    size_t size = ros_message->xs.size;
    auto array_ptr = ros_message->xs.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ys
  {
    size_t size = ros_message->ys.size;
    auto array_ptr = ros_message->ys.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: statu
  {
    cdr << (ros_message->statu ? true : false);
  }

  return true;
}

static bool _LevhaList_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LevhaList_Request__ros_msg_type * ros_message = static_cast<_LevhaList_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: levha_adlari
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->levha_adlari.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->levha_adlari);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->levha_adlari, size)) {
      return "failed to create array for field 'levha_adlari'";
    }
    auto array_ptr = ros_message->levha_adlari.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'levha_adlari'\n");
        return false;
      }
    }
  }

  // Field name: confidences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->confidences.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->confidences);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->confidences, size)) {
      return "failed to create array for field 'confidences'";
    }
    auto array_ptr = ros_message->confidences.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: xs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->xs.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->xs);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->xs, size)) {
      return "failed to create array for field 'xs'";
    }
    auto array_ptr = ros_message->xs.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ys
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ys.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ys);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ys, size)) {
      return "failed to create array for field 'ys'";
    }
    auto array_ptr = ros_message->ys.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: statu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->statu = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_levha_detection_system
size_t get_serialized_size_levha_detection_system__srv__LevhaList_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LevhaList_Request__ros_msg_type * ros_message = static_cast<const _LevhaList_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name levha_adlari
  {
    size_t array_size = ros_message->levha_adlari.size;
    auto array_ptr = ros_message->levha_adlari.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name confidences
  {
    size_t array_size = ros_message->confidences.size;
    auto array_ptr = ros_message->confidences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xs
  {
    size_t array_size = ros_message->xs.size;
    auto array_ptr = ros_message->xs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ys
  {
    size_t array_size = ros_message->ys.size;
    auto array_ptr = ros_message->ys.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name statu
  {
    size_t item_size = sizeof(ros_message->statu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LevhaList_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_levha_detection_system__srv__LevhaList_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_levha_detection_system
size_t max_serialized_size_levha_detection_system__srv__LevhaList_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: levha_adlari
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: xs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: statu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LevhaList_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_levha_detection_system__srv__LevhaList_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LevhaList_Request = {
  "levha_detection_system::srv",
  "LevhaList_Request",
  _LevhaList_Request__cdr_serialize,
  _LevhaList_Request__cdr_deserialize,
  _LevhaList_Request__get_serialized_size,
  _LevhaList_Request__max_serialized_size
};

static rosidl_message_type_support_t _LevhaList_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LevhaList_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, levha_detection_system, srv, LevhaList_Request)() {
  return &_LevhaList_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "levha_detection_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__struct.h"
// already included above
// #include "levha_detection_system/srv/detail/levha_list__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // durum, en_yakin_levha
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // durum, en_yakin_levha

// forward declare type support functions


using _LevhaList_Response__ros_msg_type = levha_detection_system__srv__LevhaList_Response;

static bool _LevhaList_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LevhaList_Response__ros_msg_type * ros_message = static_cast<const _LevhaList_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: en_yakin_levha
  {
    const rosidl_runtime_c__String * str = &ros_message->en_yakin_levha;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: uzaklik
  {
    cdr << ros_message->uzaklik;
  }

  // Field name: durum
  {
    const rosidl_runtime_c__String * str = &ros_message->durum;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LevhaList_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LevhaList_Response__ros_msg_type * ros_message = static_cast<_LevhaList_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: en_yakin_levha
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->en_yakin_levha.data) {
      rosidl_runtime_c__String__init(&ros_message->en_yakin_levha);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->en_yakin_levha,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'en_yakin_levha'\n");
      return false;
    }
  }

  // Field name: uzaklik
  {
    cdr >> ros_message->uzaklik;
  }

  // Field name: durum
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->durum.data) {
      rosidl_runtime_c__String__init(&ros_message->durum);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->durum,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'durum'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_levha_detection_system
size_t get_serialized_size_levha_detection_system__srv__LevhaList_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LevhaList_Response__ros_msg_type * ros_message = static_cast<const _LevhaList_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name en_yakin_levha
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->en_yakin_levha.size + 1);
  // field.name uzaklik
  {
    size_t item_size = sizeof(ros_message->uzaklik);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name durum
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->durum.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LevhaList_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_levha_detection_system__srv__LevhaList_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_levha_detection_system
size_t max_serialized_size_levha_detection_system__srv__LevhaList_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: en_yakin_levha
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: uzaklik
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: durum
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LevhaList_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_levha_detection_system__srv__LevhaList_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LevhaList_Response = {
  "levha_detection_system::srv",
  "LevhaList_Response",
  _LevhaList_Response__cdr_serialize,
  _LevhaList_Response__cdr_deserialize,
  _LevhaList_Response__get_serialized_size,
  _LevhaList_Response__max_serialized_size
};

static rosidl_message_type_support_t _LevhaList_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LevhaList_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, levha_detection_system, srv, LevhaList_Response)() {
  return &_LevhaList_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "levha_detection_system/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "levha_detection_system/srv/levha_list.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LevhaList__callbacks = {
  "levha_detection_system::srv",
  "LevhaList",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, levha_detection_system, srv, LevhaList_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, levha_detection_system, srv, LevhaList_Response)(),
};

static rosidl_service_type_support_t LevhaList__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LevhaList__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, levha_detection_system, srv, LevhaList)() {
  return &LevhaList__handle;
}

#if defined(__cplusplus)
}
#endif
