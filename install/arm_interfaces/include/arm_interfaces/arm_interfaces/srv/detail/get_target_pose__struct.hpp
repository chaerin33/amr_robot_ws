// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_interfaces:srv/GetTargetPose.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_HPP_
#define ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__GetTargetPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__GetTargetPose_Request __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTargetPose_Request_
{
  using Type = GetTargetPose_Request_<ContainerAllocator>;

  explicit GetTargetPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_color = "";
      this->target_size = "";
    }
  }

  explicit GetTargetPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_color(_alloc),
    target_size(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_color = "";
      this->target_size = "";
    }
  }

  // field types and members
  using _target_color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_color_type target_color;
  using _target_size_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_size_type target_size;

  // setters for named parameter idiom
  Type & set__target_color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_color = _arg;
    return *this;
  }
  Type & set__target_size(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__GetTargetPose_Request
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__GetTargetPose_Request
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTargetPose_Request_ & other) const
  {
    if (this->target_color != other.target_color) {
      return false;
    }
    if (this->target_size != other.target_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTargetPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTargetPose_Request_

// alias to use template instance with default allocator
using GetTargetPose_Request =
  arm_interfaces::srv::GetTargetPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__GetTargetPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__GetTargetPose_Response __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTargetPose_Response_
{
  using Type = GetTargetPose_Response_<ContainerAllocator>;

  explicit GetTargetPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->yaw = 0.0;
      this->class_name = "";
    }
  }

  explicit GetTargetPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->yaw = 0.0;
      this->class_name = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__GetTargetPose_Response
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__GetTargetPose_Response
    std::shared_ptr<arm_interfaces::srv::GetTargetPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTargetPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTargetPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTargetPose_Response_

// alias to use template instance with default allocator
using GetTargetPose_Response =
  arm_interfaces::srv::GetTargetPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces

namespace arm_interfaces
{

namespace srv
{

struct GetTargetPose
{
  using Request = arm_interfaces::srv::GetTargetPose_Request;
  using Response = arm_interfaces::srv::GetTargetPose_Response;
};

}  // namespace srv

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_HPP_
