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


class BTTeamInfoAllOf(object):
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
        'admin': 'bool',
        'member': 'bool',
        'size': 'int'
    }

    attribute_map = {
        'admin': 'admin',
        'member': 'member',
        'size': 'size'
    }

    def __init__(self, admin=None, member=None, size=None):  # noqa: E501
        """BTTeamInfoAllOf - a model defined in OpenAPI"""  # noqa: E501

        self._admin = None
        self._member = None
        self._size = None
        self.discriminator = None

        if admin is not None:
            self.admin = admin
        if member is not None:
            self.member = member
        if size is not None:
            self.size = size

    @property
    def admin(self):
        """Gets the admin of this BTTeamInfoAllOf.  # noqa: E501


        :return: The admin of this BTTeamInfoAllOf.  # noqa: E501
        :rtype: bool
        """
        return self._admin

    @admin.setter
    def admin(self, admin):
        """Sets the admin of this BTTeamInfoAllOf.


        :param admin: The admin of this BTTeamInfoAllOf.  # noqa: E501
        :type: bool
        """

        self._admin = admin

    @property
    def member(self):
        """Gets the member of this BTTeamInfoAllOf.  # noqa: E501


        :return: The member of this BTTeamInfoAllOf.  # noqa: E501
        :rtype: bool
        """
        return self._member

    @member.setter
    def member(self, member):
        """Sets the member of this BTTeamInfoAllOf.


        :param member: The member of this BTTeamInfoAllOf.  # noqa: E501
        :type: bool
        """

        self._member = member

    @property
    def size(self):
        """Gets the size of this BTTeamInfoAllOf.  # noqa: E501


        :return: The size of this BTTeamInfoAllOf.  # noqa: E501
        :rtype: int
        """
        return self._size

    @size.setter
    def size(self, size):
        """Sets the size of this BTTeamInfoAllOf.


        :param size: The size of this BTTeamInfoAllOf.  # noqa: E501
        :type: int
        """

        self._size = size

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
        if not isinstance(other, BTTeamInfoAllOf):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
