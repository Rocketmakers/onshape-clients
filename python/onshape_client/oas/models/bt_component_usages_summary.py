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


class BTComponentUsagesSummary(object):
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
        'hierarchy_': 'BTStandardContentHierarchy',
        'hierarchy': 'BTStandardContentHierarchy',
        'count': 'int'
    }

    attribute_map = {
        'hierarchy_': 'hierarchy_',
        'hierarchy': 'hierarchy',
        'count': 'count'
    }

    def __init__(self, hierarchy_=None, hierarchy=None, count=None):  # noqa: E501
        """BTComponentUsagesSummary - a model defined in OpenAPI"""  # noqa: E501

        self._hierarchy_ = None
        self._hierarchy = None
        self._count = None
        self.discriminator = None

        if hierarchy_ is not None:
            self.hierarchy_ = hierarchy_
        if hierarchy is not None:
            self.hierarchy = hierarchy
        if count is not None:
            self.count = count

    @property
    def hierarchy_(self):
        """Gets the hierarchy_ of this BTComponentUsagesSummary.  # noqa: E501


        :return: The hierarchy_ of this BTComponentUsagesSummary.  # noqa: E501
        :rtype: BTStandardContentHierarchy
        """
        return self._hierarchy_

    @hierarchy_.setter
    def hierarchy_(self, hierarchy_):
        """Sets the hierarchy_ of this BTComponentUsagesSummary.


        :param hierarchy_: The hierarchy_ of this BTComponentUsagesSummary.  # noqa: E501
        :type: BTStandardContentHierarchy
        """

        self._hierarchy_ = hierarchy_

    @property
    def hierarchy(self):
        """Gets the hierarchy of this BTComponentUsagesSummary.  # noqa: E501


        :return: The hierarchy of this BTComponentUsagesSummary.  # noqa: E501
        :rtype: BTStandardContentHierarchy
        """
        return self._hierarchy

    @hierarchy.setter
    def hierarchy(self, hierarchy):
        """Sets the hierarchy of this BTComponentUsagesSummary.


        :param hierarchy: The hierarchy of this BTComponentUsagesSummary.  # noqa: E501
        :type: BTStandardContentHierarchy
        """

        self._hierarchy = hierarchy

    @property
    def count(self):
        """Gets the count of this BTComponentUsagesSummary.  # noqa: E501


        :return: The count of this BTComponentUsagesSummary.  # noqa: E501
        :rtype: int
        """
        return self._count

    @count.setter
    def count(self, count):
        """Sets the count of this BTComponentUsagesSummary.


        :param count: The count of this BTComponentUsagesSummary.  # noqa: E501
        :type: int
        """

        self._count = count

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
        if not isinstance(other, BTComponentUsagesSummary):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
