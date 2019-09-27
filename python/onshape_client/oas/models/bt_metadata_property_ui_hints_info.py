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


class BTMetadataPropertyUiHintsInfo(object):
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
        'multiline': 'bool'
    }

    attribute_map = {
        'multiline': 'multiline'
    }

    def __init__(self, multiline=None):  # noqa: E501
        """BTMetadataPropertyUiHintsInfo - a model defined in OpenAPI"""  # noqa: E501

        self._multiline = None
        self.discriminator = None

        if multiline is not None:
            self.multiline = multiline

    @property
    def multiline(self):
        """Gets the multiline of this BTMetadataPropertyUiHintsInfo.  # noqa: E501


        :return: The multiline of this BTMetadataPropertyUiHintsInfo.  # noqa: E501
        :rtype: bool
        """
        return self._multiline

    @multiline.setter
    def multiline(self, multiline):
        """Sets the multiline of this BTMetadataPropertyUiHintsInfo.


        :param multiline: The multiline of this BTMetadataPropertyUiHintsInfo.  # noqa: E501
        :type: bool
        """

        self._multiline = multiline

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
        if not isinstance(other, BTMetadataPropertyUiHintsInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
