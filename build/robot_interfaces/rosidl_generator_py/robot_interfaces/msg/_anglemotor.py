# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:msg/Anglemotor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Anglemotor(type):
    """Metaclass of message 'Anglemotor'."""

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
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.msg.Anglemotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__anglemotor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__anglemotor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__anglemotor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__anglemotor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__anglemotor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Anglemotor(metaclass=Metaclass_Anglemotor):
    """Message class 'Anglemotor'."""

    __slots__ = [
        '_message',
        '_p0z0',
        '_p0z1',
        '_p0z2',
        '_p1z0',
        '_p1z1',
        '_p1z2',
        '_p2z0',
        '_p2z1',
        '_p2z2',
        '_p3z0',
        '_p3z1',
        '_p3z2',
        '_armz0',
        '_armz1',
        '_armz2',
        '_armz3',
        '_armz4',
        '_gripper',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'p0z0': 'double',
        'p0z1': 'double',
        'p0z2': 'double',
        'p1z0': 'double',
        'p1z1': 'double',
        'p1z2': 'double',
        'p2z0': 'double',
        'p2z1': 'double',
        'p2z2': 'double',
        'p3z0': 'double',
        'p3z1': 'double',
        'p3z2': 'double',
        'armz0': 'double',
        'armz1': 'double',
        'armz2': 'double',
        'armz3': 'double',
        'armz4': 'double',
        'gripper': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.p0z0 = kwargs.get('p0z0', float())
        self.p0z1 = kwargs.get('p0z1', float())
        self.p0z2 = kwargs.get('p0z2', float())
        self.p1z0 = kwargs.get('p1z0', float())
        self.p1z1 = kwargs.get('p1z1', float())
        self.p1z2 = kwargs.get('p1z2', float())
        self.p2z0 = kwargs.get('p2z0', float())
        self.p2z1 = kwargs.get('p2z1', float())
        self.p2z2 = kwargs.get('p2z2', float())
        self.p3z0 = kwargs.get('p3z0', float())
        self.p3z1 = kwargs.get('p3z1', float())
        self.p3z2 = kwargs.get('p3z2', float())
        self.armz0 = kwargs.get('armz0', float())
        self.armz1 = kwargs.get('armz1', float())
        self.armz2 = kwargs.get('armz2', float())
        self.armz3 = kwargs.get('armz3', float())
        self.armz4 = kwargs.get('armz4', float())
        self.gripper = kwargs.get('gripper', float())

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
        if self.message != other.message:
            return False
        if self.p0z0 != other.p0z0:
            return False
        if self.p0z1 != other.p0z1:
            return False
        if self.p0z2 != other.p0z2:
            return False
        if self.p1z0 != other.p1z0:
            return False
        if self.p1z1 != other.p1z1:
            return False
        if self.p1z2 != other.p1z2:
            return False
        if self.p2z0 != other.p2z0:
            return False
        if self.p2z1 != other.p2z1:
            return False
        if self.p2z2 != other.p2z2:
            return False
        if self.p3z0 != other.p3z0:
            return False
        if self.p3z1 != other.p3z1:
            return False
        if self.p3z2 != other.p3z2:
            return False
        if self.armz0 != other.armz0:
            return False
        if self.armz1 != other.armz1:
            return False
        if self.armz2 != other.armz2:
            return False
        if self.armz3 != other.armz3:
            return False
        if self.armz4 != other.armz4:
            return False
        if self.gripper != other.gripper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def p0z0(self):
        """Message field 'p0z0'."""
        return self._p0z0

    @p0z0.setter
    def p0z0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p0z0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p0z0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p0z0 = value

    @builtins.property
    def p0z1(self):
        """Message field 'p0z1'."""
        return self._p0z1

    @p0z1.setter
    def p0z1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p0z1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p0z1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p0z1 = value

    @builtins.property
    def p0z2(self):
        """Message field 'p0z2'."""
        return self._p0z2

    @p0z2.setter
    def p0z2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p0z2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p0z2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p0z2 = value

    @builtins.property
    def p1z0(self):
        """Message field 'p1z0'."""
        return self._p1z0

    @p1z0.setter
    def p1z0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1z0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p1z0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p1z0 = value

    @builtins.property
    def p1z1(self):
        """Message field 'p1z1'."""
        return self._p1z1

    @p1z1.setter
    def p1z1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1z1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p1z1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p1z1 = value

    @builtins.property
    def p1z2(self):
        """Message field 'p1z2'."""
        return self._p1z2

    @p1z2.setter
    def p1z2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1z2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p1z2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p1z2 = value

    @builtins.property
    def p2z0(self):
        """Message field 'p2z0'."""
        return self._p2z0

    @p2z0.setter
    def p2z0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2z0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p2z0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p2z0 = value

    @builtins.property
    def p2z1(self):
        """Message field 'p2z1'."""
        return self._p2z1

    @p2z1.setter
    def p2z1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2z1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p2z1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p2z1 = value

    @builtins.property
    def p2z2(self):
        """Message field 'p2z2'."""
        return self._p2z2

    @p2z2.setter
    def p2z2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2z2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p2z2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p2z2 = value

    @builtins.property
    def p3z0(self):
        """Message field 'p3z0'."""
        return self._p3z0

    @p3z0.setter
    def p3z0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p3z0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p3z0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p3z0 = value

    @builtins.property
    def p3z1(self):
        """Message field 'p3z1'."""
        return self._p3z1

    @p3z1.setter
    def p3z1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p3z1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p3z1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p3z1 = value

    @builtins.property
    def p3z2(self):
        """Message field 'p3z2'."""
        return self._p3z2

    @p3z2.setter
    def p3z2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p3z2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p3z2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p3z2 = value

    @builtins.property
    def armz0(self):
        """Message field 'armz0'."""
        return self._armz0

    @armz0.setter
    def armz0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armz0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armz0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armz0 = value

    @builtins.property
    def armz1(self):
        """Message field 'armz1'."""
        return self._armz1

    @armz1.setter
    def armz1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armz1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armz1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armz1 = value

    @builtins.property
    def armz2(self):
        """Message field 'armz2'."""
        return self._armz2

    @armz2.setter
    def armz2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armz2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armz2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armz2 = value

    @builtins.property
    def armz3(self):
        """Message field 'armz3'."""
        return self._armz3

    @armz3.setter
    def armz3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armz3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armz3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armz3 = value

    @builtins.property
    def armz4(self):
        """Message field 'armz4'."""
        return self._armz4

    @armz4.setter
    def armz4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armz4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'armz4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._armz4 = value

    @builtins.property
    def gripper(self):
        """Message field 'gripper'."""
        return self._gripper

    @gripper.setter
    def gripper(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper = value
