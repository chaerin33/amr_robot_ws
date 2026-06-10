// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_interfaces:srv/Cargo.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_HPP_
#define ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__Cargo_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__Cargo_Request __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cargo_Request_
{
  using Type = Cargo_Request_<ContainerAllocator>;

  explicit Cargo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->object_id = 0l;
      this->slot = 0l;
    }
  }

  explicit Cargo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->object_id = 0l;
      this->slot = 0l;
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;
  using _object_id_type =
    int32_t;
  _object_id_type object_id;
  using _slot_type =
    int32_t;
  _slot_type slot;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__object_id(
    const int32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__slot(
    const int32_t & _arg)
  {
    this->slot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::Cargo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::Cargo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::Cargo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::Cargo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__Cargo_Request
    std::shared_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__Cargo_Request
    std::shared_ptr<arm_interfaces::srv::Cargo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cargo_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->slot != other.slot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cargo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cargo_Request_

// alias to use template instance with default allocator
using Cargo_Request =
  arm_interfaces::srv::Cargo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__Cargo_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__Cargo_Response __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Cargo_Response_
{
  using Type = Cargo_Response_<ContainerAllocator>;

  explicit Cargo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->slot = 0l;
      this->message = "";
    }
  }

  explicit Cargo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->slot = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _slot_type =
    int32_t;
  _slot_type slot;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__slot(
    const int32_t & _arg)
  {
    this->slot = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::Cargo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::Cargo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::Cargo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::Cargo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__Cargo_Response
    std::shared_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__Cargo_Response
    std::shared_ptr<arm_interfaces::srv::Cargo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cargo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->slot != other.slot) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cargo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cargo_Response_

// alias to use template instance with default allocator
using Cargo_Response =
  arm_interfaces::srv::Cargo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces

namespace arm_interfaces
{

namespace srv
{

struct Cargo
{
  using Request = arm_interfaces::srv::Cargo_Request;
  using Response = arm_interfaces::srv::Cargo_Response;
};

}  // namespace srv

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_HPP_
