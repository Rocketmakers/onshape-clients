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


class Example(object):
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
        'summary': 'str',
        'description': 'str',
        'value': 'object',
        'external_value': 'str',
        'getref': 'str',
        'extensions': 'dict(str, object)'
    }

    attribute_map = {
        'summary': 'summary',
        'description': 'description',
        'value': 'value',
        'external_value': 'externalValue',
        'getref': 'get$ref',
        'extensions': 'extensions'
    }

    def __init__(self, summary=None, description=None, value=None, external_value=None, getref=None, extensions=None):  # noqa: E501
        """Example - a model defined in OpenAPI"""  # noqa: E501

        self._summary = None
        self._description = None
        self._value = None
        self._external_value = None
        self._getref = None
        self._extensions = None
        self.discriminator = None

        if summary is not None:
            self.summary = summary
        if description is not None:
            self.description = description
        if value is not None:
            self.value = value
        if external_value is not None:
            self.external_value = external_value
        if getref is not None:
            self.getref = getref
        if extensions is not None:
            self.extensions = extensions

    @property
    def summary(self):
        """Gets the summary of this Example.  # noqa: E501


        :return: The summary of this Example.  # noqa: E501
        :rtype: str
        """
        return self._summary

    @summary.setter
    def summary(self, summary):
        """Sets the summary of this Example.


        :param summary: The summary of this Example.  # noqa: E501
        :type: str
        """

        self._summary = summary

    @property
    def description(self):
        """Gets the description of this Example.  # noqa: E501


        :return: The description of this Example.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this Example.


        :param description: The description of this Example.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def value(self):
        """Gets the value of this Example.  # noqa: E501


        :return: The value of this Example.  # noqa: E501
        :rtype: object
        """
        return self._value

    @value.setter
    def value(self, value):
        """Sets the value of this Example.


        :param value: The value of this Example.  # noqa: E501
        :type: object
        """

        self._value = value

    @property
    def external_value(self):
        """Gets the external_value of this Example.  # noqa: E501


        :return: The external_value of this Example.  # noqa: E501
        :rtype: str
        """
        return self._external_value

    @external_value.setter
    def external_value(self, external_value):
        """Sets the external_value of this Example.


        :param external_value: The external_value of this Example.  # noqa: E501
        :type: str
        """

        self._external_value = external_value

    @property
    def getref(self):
        """Gets the getref of this Example.  # noqa: E501


        :return: The getref of this Example.  # noqa: E501
        :rtype: str
        """
        return self._getref

    @getref.setter
    def getref(self, getref):
        """Sets the getref of this Example.


        :param getref: The getref of this Example.  # noqa: E501
        :type: str
        """

        self._getref = getref

    @property
    def extensions(self):
        """Gets the extensions of this Example.  # noqa: E501


        :return: The extensions of this Example.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this Example.


        :param extensions: The extensions of this Example.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

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
        if not isinstance(other, Example):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
