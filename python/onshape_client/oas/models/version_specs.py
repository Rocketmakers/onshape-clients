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


class VersionSpecs(object):
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
        'version_name': 'str',
        'version_id': 'str'
    }

    attribute_map = {
        'version_name': 'versionName',
        'version_id': 'versionId'
    }

    def __init__(self, version_name=None, version_id=None):  # noqa: E501
        """VersionSpecs - a model defined in OpenAPI"""  # noqa: E501

        self._version_name = None
        self._version_id = None
        self.discriminator = None

        if version_name is not None:
            self.version_name = version_name
        if version_id is not None:
            self.version_id = version_id

    @property
    def version_name(self):
        """Gets the version_name of this VersionSpecs.  # noqa: E501


        :return: The version_name of this VersionSpecs.  # noqa: E501
        :rtype: str
        """
        return self._version_name

    @version_name.setter
    def version_name(self, version_name):
        """Sets the version_name of this VersionSpecs.


        :param version_name: The version_name of this VersionSpecs.  # noqa: E501
        :type: str
        """

        self._version_name = version_name

    @property
    def version_id(self):
        """Gets the version_id of this VersionSpecs.  # noqa: E501


        :return: The version_id of this VersionSpecs.  # noqa: E501
        :rtype: str
        """
        return self._version_id

    @version_id.setter
    def version_id(self, version_id):
        """Sets the version_id of this VersionSpecs.


        :param version_id: The version_id of this VersionSpecs.  # noqa: E501
        :type: str
        """

        self._version_id = version_id

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
        if not isinstance(other, VersionSpecs):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
