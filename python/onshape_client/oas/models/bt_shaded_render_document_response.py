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


class BTShadedRenderDocumentResponse(object):
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
        'image_data': 'list[str]',
        'status': 'BTNodeStatus'
    }

    attribute_map = {
        'image_data': 'imageData',
        'status': 'status'
    }

    def __init__(self, image_data=None, status=None):  # noqa: E501
        """BTShadedRenderDocumentResponse - a model defined in OpenAPI"""  # noqa: E501

        self._image_data = None
        self._status = None
        self.discriminator = None

        if image_data is not None:
            self.image_data = image_data
        if status is not None:
            self.status = status

    @property
    def image_data(self):
        """Gets the image_data of this BTShadedRenderDocumentResponse.  # noqa: E501


        :return: The image_data of this BTShadedRenderDocumentResponse.  # noqa: E501
        :rtype: list[str]
        """
        return self._image_data

    @image_data.setter
    def image_data(self, image_data):
        """Sets the image_data of this BTShadedRenderDocumentResponse.


        :param image_data: The image_data of this BTShadedRenderDocumentResponse.  # noqa: E501
        :type: list[str]
        """

        self._image_data = image_data

    @property
    def status(self):
        """Gets the status of this BTShadedRenderDocumentResponse.  # noqa: E501


        :return: The status of this BTShadedRenderDocumentResponse.  # noqa: E501
        :rtype: BTNodeStatus
        """
        return self._status

    @status.setter
    def status(self, status):
        """Sets the status of this BTShadedRenderDocumentResponse.


        :param status: The status of this BTShadedRenderDocumentResponse.  # noqa: E501
        :type: BTNodeStatus
        """

        self._status = status

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
        if not isinstance(other, BTShadedRenderDocumentResponse):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
