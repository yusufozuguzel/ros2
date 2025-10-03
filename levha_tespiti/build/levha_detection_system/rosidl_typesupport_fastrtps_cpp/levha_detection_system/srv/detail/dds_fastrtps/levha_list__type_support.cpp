// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice
#include "levha_detection_system/srv/detail/levha_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "levha_detection_system/srv/detail/levha_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace levha_detection_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
cdr_serialize(
  const levha_detection_system::srv::LevhaList_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: levha_adlari
  {
    cdr << ros_message.levha_adlari;
  }
  // Member: confidences
  {
    cdr << ros_message.confidences;
  }
  // Member: xs
  {
    cdr << ros_message.xs;
  }
  // Member: ys
  {
    cdr << ros_message.ys;
  }
  // Member: statu
  cdr << (ros_message.statu ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  levha_detection_system::srv::LevhaList_Request & ros_message)
{
  // Member: levha_adlari
  {
    cdr >> ros_message.levha_adlari;
  }

  // Member: confidences
  {
    cdr >> ros_message.confidences;
  }

  // Member: xs
  {
    cdr >> ros_message.xs;
  }

  // Member: ys
  {
    cdr >> ros_message.ys;
  }

  // Member: statu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.statu = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
get_serialized_size(
  const levha_detection_system::srv::LevhaList_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: levha_adlari
  {
    size_t array_size = ros_message.levha_adlari.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.levha_adlari[index].size() + 1);
    }
  }
  // Member: confidences
  {
    size_t array_size = ros_message.confidences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.confidences[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xs
  {
    size_t array_size = ros_message.xs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.xs[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ys
  {
    size_t array_size = ros_message.ys.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ys[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: statu
  {
    size_t item_size = sizeof(ros_message.statu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
max_serialized_size_LevhaList_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: levha_adlari
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

  // Member: confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: xs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ys
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: statu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _LevhaList_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const levha_detection_system::srv::LevhaList_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LevhaList_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<levha_detection_system::srv::LevhaList_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LevhaList_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const levha_detection_system::srv::LevhaList_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LevhaList_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LevhaList_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _LevhaList_Request__callbacks = {
  "levha_detection_system::srv",
  "LevhaList_Request",
  _LevhaList_Request__cdr_serialize,
  _LevhaList_Request__cdr_deserialize,
  _LevhaList_Request__get_serialized_size,
  _LevhaList_Request__max_serialized_size
};

static rosidl_message_type_support_t _LevhaList_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LevhaList_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace levha_detection_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_levha_detection_system
const rosidl_message_type_support_t *
get_message_type_support_handle<levha_detection_system::srv::LevhaList_Request>()
{
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, levha_detection_system, srv, LevhaList_Request)() {
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace levha_detection_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
cdr_serialize(
  const levha_detection_system::srv::LevhaList_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: en_yakin_levha
  cdr << ros_message.en_yakin_levha;
  // Member: uzaklik
  cdr << ros_message.uzaklik;
  // Member: durum
  cdr << ros_message.durum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  levha_detection_system::srv::LevhaList_Response & ros_message)
{
  // Member: en_yakin_levha
  cdr >> ros_message.en_yakin_levha;

  // Member: uzaklik
  cdr >> ros_message.uzaklik;

  // Member: durum
  cdr >> ros_message.durum;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
get_serialized_size(
  const levha_detection_system::srv::LevhaList_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: en_yakin_levha
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.en_yakin_levha.size() + 1);
  // Member: uzaklik
  {
    size_t item_size = sizeof(ros_message.uzaklik);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: durum
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.durum.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_levha_detection_system
max_serialized_size_LevhaList_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: en_yakin_levha
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: uzaklik
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: durum
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

static bool _LevhaList_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const levha_detection_system::srv::LevhaList_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LevhaList_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<levha_detection_system::srv::LevhaList_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LevhaList_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const levha_detection_system::srv::LevhaList_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LevhaList_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LevhaList_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _LevhaList_Response__callbacks = {
  "levha_detection_system::srv",
  "LevhaList_Response",
  _LevhaList_Response__cdr_serialize,
  _LevhaList_Response__cdr_deserialize,
  _LevhaList_Response__get_serialized_size,
  _LevhaList_Response__max_serialized_size
};

static rosidl_message_type_support_t _LevhaList_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LevhaList_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace levha_detection_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_levha_detection_system
const rosidl_message_type_support_t *
get_message_type_support_handle<levha_detection_system::srv::LevhaList_Response>()
{
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, levha_detection_system, srv, LevhaList_Response)() {
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace levha_detection_system
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _LevhaList__callbacks = {
  "levha_detection_system::srv",
  "LevhaList",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, levha_detection_system, srv, LevhaList_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, levha_detection_system, srv, LevhaList_Response)(),
};

static rosidl_service_type_support_t _LevhaList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LevhaList__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace levha_detection_system

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_levha_detection_system
const rosidl_service_type_support_t *
get_service_type_support_handle<levha_detection_system::srv::LevhaList>()
{
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, levha_detection_system, srv, LevhaList)() {
  return &levha_detection_system::srv::typesupport_fastrtps_cpp::_LevhaList__handle;
}

#ifdef __cplusplus
}
#endif
