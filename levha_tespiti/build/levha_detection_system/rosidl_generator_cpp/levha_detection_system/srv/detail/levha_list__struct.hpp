// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice

#ifndef LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_HPP_
#define LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__levha_detection_system__srv__LevhaList_Request __attribute__((deprecated))
#else
# define DEPRECATED__levha_detection_system__srv__LevhaList_Request __declspec(deprecated)
#endif

namespace levha_detection_system
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LevhaList_Request_
{
  using Type = LevhaList_Request_<ContainerAllocator>;

  explicit LevhaList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statu = false;
    }
  }

  explicit LevhaList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statu = false;
    }
  }

  // field types and members
  using _levha_adlari_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _levha_adlari_type levha_adlari;
  using _confidences_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _confidences_type confidences;
  using _xs_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _xs_type xs;
  using _ys_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ys_type ys;
  using _statu_type =
    bool;
  _statu_type statu;

  // setters for named parameter idiom
  Type & set__levha_adlari(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->levha_adlari = _arg;
    return *this;
  }
  Type & set__confidences(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->confidences = _arg;
    return *this;
  }
  Type & set__xs(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->xs = _arg;
    return *this;
  }
  Type & set__ys(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ys = _arg;
    return *this;
  }
  Type & set__statu(
    const bool & _arg)
  {
    this->statu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__levha_detection_system__srv__LevhaList_Request
    std::shared_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__levha_detection_system__srv__LevhaList_Request
    std::shared_ptr<levha_detection_system::srv::LevhaList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LevhaList_Request_ & other) const
  {
    if (this->levha_adlari != other.levha_adlari) {
      return false;
    }
    if (this->confidences != other.confidences) {
      return false;
    }
    if (this->xs != other.xs) {
      return false;
    }
    if (this->ys != other.ys) {
      return false;
    }
    if (this->statu != other.statu) {
      return false;
    }
    return true;
  }
  bool operator!=(const LevhaList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LevhaList_Request_

// alias to use template instance with default allocator
using LevhaList_Request =
  levha_detection_system::srv::LevhaList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace levha_detection_system


#ifndef _WIN32
# define DEPRECATED__levha_detection_system__srv__LevhaList_Response __attribute__((deprecated))
#else
# define DEPRECATED__levha_detection_system__srv__LevhaList_Response __declspec(deprecated)
#endif

namespace levha_detection_system
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LevhaList_Response_
{
  using Type = LevhaList_Response_<ContainerAllocator>;

  explicit LevhaList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->en_yakin_levha = "";
      this->uzaklik = 0.0f;
      this->durum = "";
    }
  }

  explicit LevhaList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : en_yakin_levha(_alloc),
    durum(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->en_yakin_levha = "";
      this->uzaklik = 0.0f;
      this->durum = "";
    }
  }

  // field types and members
  using _en_yakin_levha_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _en_yakin_levha_type en_yakin_levha;
  using _uzaklik_type =
    float;
  _uzaklik_type uzaklik;
  using _durum_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _durum_type durum;

  // setters for named parameter idiom
  Type & set__en_yakin_levha(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->en_yakin_levha = _arg;
    return *this;
  }
  Type & set__uzaklik(
    const float & _arg)
  {
    this->uzaklik = _arg;
    return *this;
  }
  Type & set__durum(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->durum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__levha_detection_system__srv__LevhaList_Response
    std::shared_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__levha_detection_system__srv__LevhaList_Response
    std::shared_ptr<levha_detection_system::srv::LevhaList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LevhaList_Response_ & other) const
  {
    if (this->en_yakin_levha != other.en_yakin_levha) {
      return false;
    }
    if (this->uzaklik != other.uzaklik) {
      return false;
    }
    if (this->durum != other.durum) {
      return false;
    }
    return true;
  }
  bool operator!=(const LevhaList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LevhaList_Response_

// alias to use template instance with default allocator
using LevhaList_Response =
  levha_detection_system::srv::LevhaList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace levha_detection_system

namespace levha_detection_system
{

namespace srv
{

struct LevhaList
{
  using Request = levha_detection_system::srv::LevhaList_Request;
  using Response = levha_detection_system::srv::LevhaList_Response;
};

}  // namespace srv

}  // namespace levha_detection_system

#endif  // LEVHA_DETECTION_SYSTEM__SRV__DETAIL__LEVHA_LIST__STRUCT_HPP_
