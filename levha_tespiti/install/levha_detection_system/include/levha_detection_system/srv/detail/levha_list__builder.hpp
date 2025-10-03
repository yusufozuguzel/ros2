// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#ifndef LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__BUILDER_HPP_
#define LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__BUILDER_HPP_

#include "levha_detection_system/srv/detail/levha_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace levha_detection_system
{

namespace srv
{

namespace builder
{

class Init_LevhaList_Request_statu
{
public:
  explicit Init_LevhaList_Request_statu(::levha_detection_system::srv::LevhaList_Request & msg)
  : msg_(msg)
  {}
  ::levha_detection_system::srv::LevhaList_Request statu(::levha_detection_system::srv::LevhaList_Request::_statu_type arg)
  {
    msg_.statu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Request msg_;
};

class Init_LevhaList_Request_ys
{
public:
  explicit Init_LevhaList_Request_ys(::levha_detection_system::srv::LevhaList_Request & msg)
  : msg_(msg)
  {}
  Init_LevhaList_Request_statu ys(::levha_detection_system::srv::LevhaList_Request::_ys_type arg)
  {
    msg_.ys = std::move(arg);
    return Init_LevhaList_Request_statu(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Request msg_;
};

class Init_LevhaList_Request_xs
{
public:
  explicit Init_LevhaList_Request_xs(::levha_detection_system::srv::LevhaList_Request & msg)
  : msg_(msg)
  {}
  Init_LevhaList_Request_ys xs(::levha_detection_system::srv::LevhaList_Request::_xs_type arg)
  {
    msg_.xs = std::move(arg);
    return Init_LevhaList_Request_ys(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Request msg_;
};

class Init_LevhaList_Request_confidences
{
public:
  explicit Init_LevhaList_Request_confidences(::levha_detection_system::srv::LevhaList_Request & msg)
  : msg_(msg)
  {}
  Init_LevhaList_Request_xs confidences(::levha_detection_system::srv::LevhaList_Request::_confidences_type arg)
  {
    msg_.confidences = std::move(arg);
    return Init_LevhaList_Request_xs(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Request msg_;
};

class Init_LevhaList_Request_levha_adlari
{
public:
  Init_LevhaList_Request_levha_adlari()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LevhaList_Request_confidences levha_adlari(::levha_detection_system::srv::LevhaList_Request::_levha_adlari_type arg)
  {
    msg_.levha_adlari = std::move(arg);
    return Init_LevhaList_Request_confidences(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::levha_detection_system::srv::LevhaList_Request>()
{
  return levha_detection_system::srv::builder::Init_LevhaList_Request_levha_adlari();
}

}  // namespace levha_detection_system


namespace levha_detection_system
{

namespace srv
{

namespace builder
{

class Init_LevhaList_Response_durum
{
public:
  explicit Init_LevhaList_Response_durum(::levha_detection_system::srv::LevhaList_Response & msg)
  : msg_(msg)
  {}
  ::levha_detection_system::srv::LevhaList_Response durum(::levha_detection_system::srv::LevhaList_Response::_durum_type arg)
  {
    msg_.durum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Response msg_;
};

class Init_LevhaList_Response_uzaklik
{
public:
  explicit Init_LevhaList_Response_uzaklik(::levha_detection_system::srv::LevhaList_Response & msg)
  : msg_(msg)
  {}
  Init_LevhaList_Response_durum uzaklik(::levha_detection_system::srv::LevhaList_Response::_uzaklik_type arg)
  {
    msg_.uzaklik = std::move(arg);
    return Init_LevhaList_Response_durum(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Response msg_;
};

class Init_LevhaList_Response_en_yakin_levha
{
public:
  Init_LevhaList_Response_en_yakin_levha()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LevhaList_Response_uzaklik en_yakin_levha(::levha_detection_system::srv::LevhaList_Response::_en_yakin_levha_type arg)
  {
    msg_.en_yakin_levha = std::move(arg);
    return Init_LevhaList_Response_uzaklik(msg_);
  }

private:
  ::levha_detection_system::srv::LevhaList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::levha_detection_system::srv::LevhaList_Response>()
{
  return levha_detection_system::srv::builder::Init_LevhaList_Response_en_yakin_levha();
}

}  // namespace levha_detection_system

#endif  // LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__BUILDER_HPP_
