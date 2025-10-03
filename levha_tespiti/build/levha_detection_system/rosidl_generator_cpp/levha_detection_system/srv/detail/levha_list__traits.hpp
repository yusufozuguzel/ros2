// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#ifndef LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__TRAITS_HPP_
#define LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__TRAITS_HPP_

#include "levha_detection_system/srv/detail/levha_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<levha_detection_system::srv::LevhaList_Request>()
{
  return "levha_detection_system::srv::LevhaList_Request";
}

template<>
inline const char * name<levha_detection_system::srv::LevhaList_Request>()
{
  return "levha_detection_system/srv/LevhaList_Request";
}

template<>
struct has_fixed_size<levha_detection_system::srv::LevhaList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<levha_detection_system::srv::LevhaList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<levha_detection_system::srv::LevhaList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<levha_detection_system::srv::LevhaList_Response>()
{
  return "levha_detection_system::srv::LevhaList_Response";
}

template<>
inline const char * name<levha_detection_system::srv::LevhaList_Response>()
{
  return "levha_detection_system/srv/LevhaList_Response";
}

template<>
struct has_fixed_size<levha_detection_system::srv::LevhaList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<levha_detection_system::srv::LevhaList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<levha_detection_system::srv::LevhaList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<levha_detection_system::srv::LevhaList>()
{
  return "levha_detection_system::srv::LevhaList";
}

template<>
inline const char * name<levha_detection_system::srv::LevhaList>()
{
  return "levha_detection_system/srv/LevhaList";
}

template<>
struct has_fixed_size<levha_detection_system::srv::LevhaList>
  : std::integral_constant<
    bool,
    has_fixed_size<levha_detection_system::srv::LevhaList_Request>::value &&
    has_fixed_size<levha_detection_system::srv::LevhaList_Response>::value
  >
{
};

template<>
struct has_bounded_size<levha_detection_system::srv::LevhaList>
  : std::integral_constant<
    bool,
    has_bounded_size<levha_detection_system::srv::LevhaList_Request>::value &&
    has_bounded_size<levha_detection_system::srv::LevhaList_Response>::value
  >
{
};

template<>
struct is_service<levha_detection_system::srv::LevhaList>
  : std::true_type
{
};

template<>
struct is_service_request<levha_detection_system::srv::LevhaList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<levha_detection_system::srv::LevhaList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__TRAITS_HPP_
