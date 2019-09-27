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


class BTUpgradeOnDemandParams(object):
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
        'notification_id': 'str',
        'target_version': 'int',
        'connection_id': 'str'
    }

    attribute_map = {
        'notification_id': 'notificationId',
        'target_version': 'targetVersion',
        'connection_id': 'connectionId'
    }

    def __init__(self, notification_id=None, target_version=None, connection_id=None):  # noqa: E501
        """BTUpgradeOnDemandParams - a model defined in OpenAPI"""  # noqa: E501

        self._notification_id = None
        self._target_version = None
        self._connection_id = None
        self.discriminator = None

        if notification_id is not None:
            self.notification_id = notification_id
        if target_version is not None:
            self.target_version = target_version
        if connection_id is not None:
            self.connection_id = connection_id

    @property
    def notification_id(self):
        """Gets the notification_id of this BTUpgradeOnDemandParams.  # noqa: E501


        :return: The notification_id of this BTUpgradeOnDemandParams.  # noqa: E501
        :rtype: str
        """
        return self._notification_id

    @notification_id.setter
    def notification_id(self, notification_id):
        """Sets the notification_id of this BTUpgradeOnDemandParams.


        :param notification_id: The notification_id of this BTUpgradeOnDemandParams.  # noqa: E501
        :type: str
        """

        self._notification_id = notification_id

    @property
    def target_version(self):
        """Gets the target_version of this BTUpgradeOnDemandParams.  # noqa: E501


        :return: The target_version of this BTUpgradeOnDemandParams.  # noqa: E501
        :rtype: int
        """
        return self._target_version

    @target_version.setter
    def target_version(self, target_version):
        """Sets the target_version of this BTUpgradeOnDemandParams.


        :param target_version: The target_version of this BTUpgradeOnDemandParams.  # noqa: E501
        :type: int
        """

        self._target_version = target_version

    @property
    def connection_id(self):
        """Gets the connection_id of this BTUpgradeOnDemandParams.  # noqa: E501


        :return: The connection_id of this BTUpgradeOnDemandParams.  # noqa: E501
        :rtype: str
        """
        return self._connection_id

    @connection_id.setter
    def connection_id(self, connection_id):
        """Sets the connection_id of this BTUpgradeOnDemandParams.


        :param connection_id: The connection_id of this BTUpgradeOnDemandParams.  # noqa: E501
        :type: str
        """

        self._connection_id = connection_id

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
        if not isinstance(other, BTUpgradeOnDemandParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
