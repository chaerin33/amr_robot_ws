#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__ArmCommand_Request() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__ArmCommand_Request__init(msg: *mut ArmCommand_Request) -> bool;
    fn arm_interfaces__srv__ArmCommand_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Request>, size: usize) -> bool;
    fn arm_interfaces__srv__ArmCommand_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Request>);
    fn arm_interfaces__srv__ArmCommand_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmCommand_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Request>) -> bool;
}

// Corresponds to arm_interfaces__srv__ArmCommand_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_ids: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location: rosidl_runtime_rs::String,

}



impl Default for ArmCommand_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__ArmCommand_Request__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__ArmCommand_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmCommand_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmCommand_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmCommand_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/ArmCommand_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__ArmCommand_Request() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__ArmCommand_Response() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__ArmCommand_Response__init(msg: *mut ArmCommand_Response) -> bool;
    fn arm_interfaces__srv__ArmCommand_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Response>, size: usize) -> bool;
    fn arm_interfaces__srv__ArmCommand_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Response>);
    fn arm_interfaces__srv__ArmCommand_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmCommand_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmCommand_Response>) -> bool;
}

// Corresponds to arm_interfaces__srv__ArmCommand_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slots: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_ids: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ArmCommand_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__ArmCommand_Response__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__ArmCommand_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmCommand_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__ArmCommand_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmCommand_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmCommand_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/ArmCommand_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__ArmCommand_Response() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__Cargo_Request() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__Cargo_Request__init(msg: *mut Cargo_Request) -> bool;
    fn arm_interfaces__srv__Cargo_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Cargo_Request>, size: usize) -> bool;
    fn arm_interfaces__srv__Cargo_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Cargo_Request>);
    fn arm_interfaces__srv__Cargo_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Cargo_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Cargo_Request>) -> bool;
}

// Corresponds to arm_interfaces__srv__Cargo_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cargo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slot: i32,

}



impl Default for Cargo_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__Cargo_Request__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__Cargo_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Cargo_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Cargo_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Cargo_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/Cargo_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__Cargo_Request() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__Cargo_Response() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__Cargo_Response__init(msg: *mut Cargo_Response) -> bool;
    fn arm_interfaces__srv__Cargo_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Cargo_Response>, size: usize) -> bool;
    fn arm_interfaces__srv__Cargo_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Cargo_Response>);
    fn arm_interfaces__srv__Cargo_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Cargo_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Cargo_Response>) -> bool;
}

// Corresponds to arm_interfaces__srv__Cargo_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cargo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slot: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Cargo_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__Cargo_Response__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__Cargo_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Cargo_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__Cargo_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Cargo_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Cargo_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/Cargo_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__Cargo_Response() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__GetTargetPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__GetTargetPose_Request__init(msg: *mut GetTargetPose_Request) -> bool;
    fn arm_interfaces__srv__GetTargetPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Request>, size: usize) -> bool;
    fn arm_interfaces__srv__GetTargetPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Request>);
    fn arm_interfaces__srv__GetTargetPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTargetPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Request>) -> bool;
}

// Corresponds to arm_interfaces__srv__GetTargetPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTargetPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_color: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_size: rosidl_runtime_rs::String,

}



impl Default for GetTargetPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__GetTargetPose_Request__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__GetTargetPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTargetPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTargetPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTargetPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/GetTargetPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__GetTargetPose_Request() }
  }
}


#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__GetTargetPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "arm_interfaces__rosidl_generator_c")]
extern "C" {
    fn arm_interfaces__srv__GetTargetPose_Response__init(msg: *mut GetTargetPose_Response) -> bool;
    fn arm_interfaces__srv__GetTargetPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Response>, size: usize) -> bool;
    fn arm_interfaces__srv__GetTargetPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Response>);
    fn arm_interfaces__srv__GetTargetPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetTargetPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetTargetPose_Response>) -> bool;
}

// Corresponds to arm_interfaces__srv__GetTargetPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTargetPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,

}



impl Default for GetTargetPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !arm_interfaces__srv__GetTargetPose_Response__init(&mut msg as *mut _) {
        panic!("Call to arm_interfaces__srv__GetTargetPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetTargetPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { arm_interfaces__srv__GetTargetPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetTargetPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetTargetPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "arm_interfaces/srv/GetTargetPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__arm_interfaces__srv__GetTargetPose_Response() }
  }
}






#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__ArmCommand() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__ArmCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct ArmCommand;

impl rosidl_runtime_rs::Service for ArmCommand {
    type Request = ArmCommand_Request;
    type Response = ArmCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__ArmCommand() }
    }
}




#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__Cargo() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__Cargo
#[allow(missing_docs, non_camel_case_types)]
pub struct Cargo;

impl rosidl_runtime_rs::Service for Cargo {
    type Request = Cargo_Request;
    type Response = Cargo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__Cargo() }
    }
}




#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__GetTargetPose() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__GetTargetPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTargetPose;

impl rosidl_runtime_rs::Service for GetTargetPose {
    type Request = GetTargetPose_Request;
    type Response = GetTargetPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__GetTargetPose() }
    }
}


