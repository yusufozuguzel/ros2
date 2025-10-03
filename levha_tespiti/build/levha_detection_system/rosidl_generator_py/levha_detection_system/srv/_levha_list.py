# generated from rosidl_generator_py/resource/_idl.py.em
# with input from levha_detection_system:srv/LevhaList.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'confidences'
# Member 'xs'
# Member 'ys'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LevhaList_Request(type):
    """Metaclass of message 'LevhaList_Request'."""

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
            module = import_type_support('levha_detection_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'levha_detection_system.srv.LevhaList_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__levha_list__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__levha_list__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__levha_list__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__levha_list__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__levha_list__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LevhaList_Request(metaclass=Metaclass_LevhaList_Request):
    """Message class 'LevhaList_Request'."""

    __slots__ = [
        '_levha_adlari',
        '_confidences',
        '_xs',
        '_ys',
        '_statu',
    ]

    _fields_and_field_types = {
        'levha_adlari': 'sequence<string>',
        'confidences': 'sequence<float>',
        'xs': 'sequence<float>',
        'ys': 'sequence<float>',
        'statu': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.levha_adlari = kwargs.get('levha_adlari', [])
        self.confidences = array.array('f', kwargs.get('confidences', []))
        self.xs = array.array('f', kwargs.get('xs', []))
        self.ys = array.array('f', kwargs.get('ys', []))
        self.statu = kwargs.get('statu', bool())

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
        if self.levha_adlari != other.levha_adlari:
            return False
        if self.confidences != other.confidences:
            return False
        if self.xs != other.xs:
            return False
        if self.ys != other.ys:
            return False
        if self.statu != other.statu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def levha_adlari(self):
        """Message field 'levha_adlari'."""
        return self._levha_adlari

    @levha_adlari.setter
    def levha_adlari(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'levha_adlari' field must be a set or sequence and each value of type 'str'"
        self._levha_adlari = value

    @property
    def confidences(self):
        """Message field 'confidences'."""
        return self._confidences

    @confidences.setter
    def confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'confidences' array.array() must have the type code of 'f'"
            self._confidences = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'confidences' field must be a set or sequence and each value of type 'float'"
        self._confidences = array.array('f', value)

    @property
    def xs(self):
        """Message field 'xs'."""
        return self._xs

    @xs.setter
    def xs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'xs' array.array() must have the type code of 'f'"
            self._xs = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'xs' field must be a set or sequence and each value of type 'float'"
        self._xs = array.array('f', value)

    @property
    def ys(self):
        """Message field 'ys'."""
        return self._ys

    @ys.setter
    def ys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ys' array.array() must have the type code of 'f'"
            self._ys = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'ys' field must be a set or sequence and each value of type 'float'"
        self._ys = array.array('f', value)

    @property
    def statu(self):
        """Message field 'statu'."""
        return self._statu

    @statu.setter
    def statu(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'statu' field must be of type 'bool'"
        self._statu = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_LevhaList_Response(type):
    """Metaclass of message 'LevhaList_Response'."""

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
            module = import_type_support('levha_detection_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'levha_detection_system.srv.LevhaList_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__levha_list__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__levha_list__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__levha_list__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__levha_list__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__levha_list__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LevhaList_Response(metaclass=Metaclass_LevhaList_Response):
    """Message class 'LevhaList_Response'."""

    __slots__ = [
        '_en_yakin_levha',
        '_uzaklik',
        '_durum',
    ]

    _fields_and_field_types = {
        'en_yakin_levha': 'string',
        'uzaklik': 'float',
        'durum': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.en_yakin_levha = kwargs.get('en_yakin_levha', str())
        self.uzaklik = kwargs.get('uzaklik', float())
        self.durum = kwargs.get('durum', str())

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
        if self.en_yakin_levha != other.en_yakin_levha:
            return False
        if self.uzaklik != other.uzaklik:
            return False
        if self.durum != other.durum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def en_yakin_levha(self):
        """Message field 'en_yakin_levha'."""
        return self._en_yakin_levha

    @en_yakin_levha.setter
    def en_yakin_levha(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'en_yakin_levha' field must be of type 'str'"
        self._en_yakin_levha = value

    @property
    def uzaklik(self):
        """Message field 'uzaklik'."""
        return self._uzaklik

    @uzaklik.setter
    def uzaklik(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uzaklik' field must be of type 'float'"
        self._uzaklik = value

    @property
    def durum(self):
        """Message field 'durum'."""
        return self._durum

    @durum.setter
    def durum(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'durum' field must be of type 'str'"
        self._durum = value


class Metaclass_LevhaList(type):
    """Metaclass of service 'LevhaList'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('levha_detection_system')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'levha_detection_system.srv.LevhaList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__levha_list

            from levha_detection_system.srv import _levha_list
            if _levha_list.Metaclass_LevhaList_Request._TYPE_SUPPORT is None:
                _levha_list.Metaclass_LevhaList_Request.__import_type_support__()
            if _levha_list.Metaclass_LevhaList_Response._TYPE_SUPPORT is None:
                _levha_list.Metaclass_LevhaList_Response.__import_type_support__()


class LevhaList(metaclass=Metaclass_LevhaList):
    from levha_detection_system.srv._levha_list import LevhaList_Request as Request
    from levha_detection_system.srv._levha_list import LevhaList_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
