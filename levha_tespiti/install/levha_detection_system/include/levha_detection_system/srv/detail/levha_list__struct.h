// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#ifndef LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_H_
#define LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'levha_adlari'
#include "rosidl_runtime_c/string.h"
// Member 'confidences'
// Member 'xs'
// Member 'ys'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/LevhaList in the package levha_detection_system.
typedef struct levha_detection_system__srv__LevhaList_Request
{
  rosidl_runtime_c__String__Sequence levha_adlari;
  rosidl_runtime_c__float__Sequence confidences;
  rosidl_runtime_c__float__Sequence xs;
  rosidl_runtime_c__float__Sequence ys;
  bool statu;
} levha_detection_system__srv__LevhaList_Request;

// Struct for a sequence of levha_detection_system__srv__LevhaList_Request.
typedef struct levha_detection_system__srv__LevhaList_Request__Sequence
{
  levha_detection_system__srv__LevhaList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} levha_detection_system__srv__LevhaList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'en_yakin_levha'
// Member 'durum'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/LevhaList in the package levha_detection_system.
typedef struct levha_detection_system__srv__LevhaList_Response
{
  rosidl_runtime_c__String en_yakin_levha;
  float uzaklik;
  rosidl_runtime_c__String durum;
} levha_detection_system__srv__LevhaList_Response;

// Struct for a sequence of levha_detection_system__srv__LevhaList_Response.
typedef struct levha_detection_system__srv__LevhaList_Response__Sequence
{
  levha_detection_system__srv__LevhaList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} levha_detection_system__srv__LevhaList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_H_
