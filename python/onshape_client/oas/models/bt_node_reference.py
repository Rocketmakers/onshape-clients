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


class BTNodeReference(object):
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
        'node_id': 'str',
        'node_id_raw': 'BTObjectId'
    }

    attribute_map = {
        'node_id': 'nodeId',
        'node_id_raw': 'nodeIdRaw'
    }

    def __init__(self, node_id=None, node_id_raw=None):  # noqa: E501
        """BTNodeReference - a model defined in OpenAPI"""  # noqa: E501

        self._node_id = None
        self._node_id_raw = None
        self.discriminator = None

        if node_id is not None:
            self.node_id = node_id
        if node_id_raw is not None:
            self.node_id_raw = node_id_raw

    @property
    def node_id(self):
        """Gets the node_id of this BTNodeReference.  # noqa: E501


        :return: The node_id of this BTNodeReference.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTNodeReference.


        :param node_id: The node_id of this BTNodeReference.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTNodeReference.  # noqa: E501


        :return: The node_id_raw of this BTNodeReference.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTNodeReference.


        :param node_id_raw: The node_id_raw of this BTNodeReference.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

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
        if not isinstance(other, BTNodeReference):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
