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


class BTAdminRolePermissionParams(object):
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
        '_resource_path': 'str',
        'resource_label': 'str',
        'allowed': 'bool',
        'method': 'str'
    }

    attribute_map = {
        '_resource_path': 'resourcePath',
        'resource_label': 'resourceLabel',
        'allowed': 'allowed',
        'method': 'method'
    }

    def __init__(self, _resource_path=None, resource_label=None, allowed=None, method=None):  # noqa: E501
        """BTAdminRolePermissionParams - a model defined in OpenAPI"""  # noqa: E501

        self.__resource_path = None
        self._resource_label = None
        self._allowed = None
        self._method = None
        self.discriminator = None

        if _resource_path is not None:
            self._resource_path = _resource_path
        if resource_label is not None:
            self.resource_label = resource_label
        if allowed is not None:
            self.allowed = allowed
        if method is not None:
            self.method = method

    @property
    def _resource_path(self):
        """Gets the _resource_path of this BTAdminRolePermissionParams.  # noqa: E501


        :return: The _resource_path of this BTAdminRolePermissionParams.  # noqa: E501
        :rtype: str
        """
        return self.__resource_path

    @_resource_path.setter
    def _resource_path(self, _resource_path):
        """Sets the _resource_path of this BTAdminRolePermissionParams.


        :param _resource_path: The _resource_path of this BTAdminRolePermissionParams.  # noqa: E501
        :type: str
        """

        self.__resource_path = _resource_path

    @property
    def resource_label(self):
        """Gets the resource_label of this BTAdminRolePermissionParams.  # noqa: E501


        :return: The resource_label of this BTAdminRolePermissionParams.  # noqa: E501
        :rtype: str
        """
        return self._resource_label

    @resource_label.setter
    def resource_label(self, resource_label):
        """Sets the resource_label of this BTAdminRolePermissionParams.


        :param resource_label: The resource_label of this BTAdminRolePermissionParams.  # noqa: E501
        :type: str
        """

        self._resource_label = resource_label

    @property
    def allowed(self):
        """Gets the allowed of this BTAdminRolePermissionParams.  # noqa: E501


        :return: The allowed of this BTAdminRolePermissionParams.  # noqa: E501
        :rtype: bool
        """
        return self._allowed

    @allowed.setter
    def allowed(self, allowed):
        """Sets the allowed of this BTAdminRolePermissionParams.


        :param allowed: The allowed of this BTAdminRolePermissionParams.  # noqa: E501
        :type: bool
        """

        self._allowed = allowed

    @property
    def method(self):
        """Gets the method of this BTAdminRolePermissionParams.  # noqa: E501


        :return: The method of this BTAdminRolePermissionParams.  # noqa: E501
        :rtype: str
        """
        return self._method

    @method.setter
    def method(self, method):
        """Sets the method of this BTAdminRolePermissionParams.


        :param method: The method of this BTAdminRolePermissionParams.  # noqa: E501
        :type: str
        """

        self._method = method

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
        if not isinstance(other, BTAdminRolePermissionParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
