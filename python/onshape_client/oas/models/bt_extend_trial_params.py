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


class BTExtendTrialParams(object):
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
        'extension_days': 'int',
        'user_id': 'str'
    }

    attribute_map = {
        'extension_days': 'extensionDays',
        'user_id': 'userId'
    }

    def __init__(self, extension_days=None, user_id=None):  # noqa: E501
        """BTExtendTrialParams - a model defined in OpenAPI"""  # noqa: E501

        self._extension_days = None
        self._user_id = None
        self.discriminator = None

        if extension_days is not None:
            self.extension_days = extension_days
        if user_id is not None:
            self.user_id = user_id

    @property
    def extension_days(self):
        """Gets the extension_days of this BTExtendTrialParams.  # noqa: E501


        :return: The extension_days of this BTExtendTrialParams.  # noqa: E501
        :rtype: int
        """
        return self._extension_days

    @extension_days.setter
    def extension_days(self, extension_days):
        """Sets the extension_days of this BTExtendTrialParams.


        :param extension_days: The extension_days of this BTExtendTrialParams.  # noqa: E501
        :type: int
        """

        self._extension_days = extension_days

    @property
    def user_id(self):
        """Gets the user_id of this BTExtendTrialParams.  # noqa: E501


        :return: The user_id of this BTExtendTrialParams.  # noqa: E501
        :rtype: str
        """
        return self._user_id

    @user_id.setter
    def user_id(self, user_id):
        """Sets the user_id of this BTExtendTrialParams.


        :param user_id: The user_id of this BTExtendTrialParams.  # noqa: E501
        :type: str
        """

        self._user_id = user_id

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
        if not isinstance(other, BTExtendTrialParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
