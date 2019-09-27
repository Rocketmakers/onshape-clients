# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.104
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTNotice(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'location_infos': 'list[BTLocationInfo]',
        'parameter_id': 'str',
        'type': 'str',
        'try_node': 'BTNodeReference',
        'level': 'str',
        'message': 'str',
        'stack_trace': 'list[BTLocationInfo]',
        'node_id': 'str'
    }

    attribute_map = {
        'location_infos': 'locationInfos',
        'parameter_id': 'parameterId',
        'type': 'type',
        'try_node': 'tryNode',
        'level': 'level',
        'message': 'message',
        'stack_trace': 'stackTrace',
        'node_id': 'nodeId'
    }

    def __init__(self, location_infos=None, parameter_id=None, type=None, try_node=None, level=None, message=None, stack_trace=None, node_id=None):  # noqa: E501
        """BTNotice - a model defined in OpenAPI"""  # noqa: E501

        self._location_infos = None
        self._parameter_id = None
        self._type = None
        self._try_node = None
        self._level = None
        self._message = None
        self._stack_trace = None
        self._node_id = None
        self.discriminator = None

        if location_infos is not None:
            self.location_infos = location_infos
        if parameter_id is not None:
            self.parameter_id = parameter_id
        if type is not None:
            self.type = type
        if try_node is not None:
            self.try_node = try_node
        if level is not None:
            self.level = level
        if message is not None:
            self.message = message
        if stack_trace is not None:
            self.stack_trace = stack_trace
        if node_id is not None:
            self.node_id = node_id

    @property
    def location_infos(self):
        """Gets the location_infos of this BTNotice.  # noqa: E501


        :return: The location_infos of this BTNotice.  # noqa: E501
        :rtype: list[BTLocationInfo]
        """
        return self._location_infos

    @location_infos.setter
    def location_infos(self, location_infos):
        """Sets the location_infos of this BTNotice.


        :param location_infos: The location_infos of this BTNotice.  # noqa: E501
        :type: list[BTLocationInfo]
        """

        self._location_infos = location_infos

    @property
    def parameter_id(self):
        """Gets the parameter_id of this BTNotice.  # noqa: E501


        :return: The parameter_id of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._parameter_id

    @parameter_id.setter
    def parameter_id(self, parameter_id):
        """Sets the parameter_id of this BTNotice.


        :param parameter_id: The parameter_id of this BTNotice.  # noqa: E501
        :type: str
        """

        self._parameter_id = parameter_id

    @property
    def type(self):
        """Gets the type of this BTNotice.  # noqa: E501


        :return: The type of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTNotice.


        :param type: The type of this BTNotice.  # noqa: E501
        :type: str
        """
        allowed_values = ["PARSE", "SEMANTIC", "EXECUTION", "GEOMETRY", "TEST", "OTHER", "UNKNOWN"]  # noqa: E501
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"  # noqa: E501
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def try_node(self):
        """Gets the try_node of this BTNotice.  # noqa: E501


        :return: The try_node of this BTNotice.  # noqa: E501
        :rtype: BTNodeReference
        """
        return self._try_node

    @try_node.setter
    def try_node(self, try_node):
        """Sets the try_node of this BTNotice.


        :param try_node: The try_node of this BTNotice.  # noqa: E501
        :type: BTNodeReference
        """

        self._try_node = try_node

    @property
    def level(self):
        """Gets the level of this BTNotice.  # noqa: E501


        :return: The level of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._level

    @level.setter
    def level(self, level):
        """Sets the level of this BTNotice.


        :param level: The level of this BTNotice.  # noqa: E501
        :type: str
        """
        allowed_values = ["INTERNAL", "ERROR", "WARNING", "INFO", "UNKNOWN"]  # noqa: E501
        if level not in allowed_values:
            raise ValueError(
                "Invalid value for `level` ({0}), must be one of {1}"  # noqa: E501
                .format(level, allowed_values)
            )

        self._level = level

    @property
    def message(self):
        """Gets the message of this BTNotice.  # noqa: E501


        :return: The message of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._message

    @message.setter
    def message(self, message):
        """Sets the message of this BTNotice.


        :param message: The message of this BTNotice.  # noqa: E501
        :type: str
        """

        self._message = message

    @property
    def stack_trace(self):
        """Gets the stack_trace of this BTNotice.  # noqa: E501


        :return: The stack_trace of this BTNotice.  # noqa: E501
        :rtype: list[BTLocationInfo]
        """
        return self._stack_trace

    @stack_trace.setter
    def stack_trace(self, stack_trace):
        """Sets the stack_trace of this BTNotice.


        :param stack_trace: The stack_trace of this BTNotice.  # noqa: E501
        :type: list[BTLocationInfo]
        """

        self._stack_trace = stack_trace

    @property
    def node_id(self):
        """Gets the node_id of this BTNotice.  # noqa: E501


        :return: The node_id of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTNotice.


        :param node_id: The node_id of this BTNotice.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTNotice):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
