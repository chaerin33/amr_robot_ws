# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_interfaces:srv/Cargo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Cargo_Request(type):
    """Metaclass of message 'Cargo_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.Cargo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cargo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cargo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cargo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cargo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cargo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Cargo_Request(metaclass=Metaclass_Cargo_Request):
    """Message class 'Cargo_Request'."""

    __slots__ = [
        '_action',
        '_object_id',
        '_slot',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'object_id': 'int32',
        'slot': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.object_id = kwargs.get('object_id', int())
        self.slot = kwargs.get('slot', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.action != other.action:
            return False
        if self.object_id != other.object_id:
            return False
        if self.slot != other.slot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_id' field must be an integer in [-2147483648, 2147483647]"
        self._object_id = value

    @builtins.property
    def slot(self):
        """Message field 'slot'."""
        return self._slot

    @slot.setter
    def slot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'slot' field must be an integer in [-2147483648, 2147483647]"
        self._slot = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Cargo_Response(type):
    """Metaclass of message 'Cargo_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.Cargo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cargo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cargo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cargo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cargo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cargo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Cargo_Response(metaclass=Metaclass_Cargo_Response):
    """Message class 'Cargo_Response'."""

    __slots__ = [
        '_success',
        '_slot',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'slot': 'int32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.slot = kwargs.get('slot', int())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.slot != other.slot:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def slot(self):
        """Message field 'slot'."""
        return self._slot

    @slot.setter
    def slot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'slot' field must be an integer in [-2147483648, 2147483647]"
        self._slot = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_Cargo(type):
    """Metaclass of service 'Cargo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.Cargo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cargo

            from arm_interfaces.srv import _cargo
            if _cargo.Metaclass_Cargo_Request._TYPE_SUPPORT is None:
                _cargo.Metaclass_Cargo_Request.__import_type_support__()
            if _cargo.Metaclass_Cargo_Response._TYPE_SUPPORT is None:
                _cargo.Metaclass_Cargo_Response.__import_type_support__()


class Cargo(metaclass=Metaclass_Cargo):
    from arm_interfaces.srv._cargo import Cargo_Request as Request
    from arm_interfaces.srv._cargo import Cargo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
