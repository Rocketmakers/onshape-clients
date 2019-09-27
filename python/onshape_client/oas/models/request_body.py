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


class RequestBody(object):
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
        'description': 'str',
        'content': 'dict(str, MediaType)',
        'required': 'bool',
        'extensions': 'dict(str, object)',
        'getref': 'str'
    }

    attribute_map = {
        'description': 'description',
        'content': 'content',
        'required': 'required',
        'extensions': 'extensions',
        'getref': 'get$ref'
    }

    def __init__(self, description=None, content=None, required=None, extensions=None, getref=None):  # noqa: E501
        """RequestBody - a model defined in OpenAPI"""  # noqa: E501

        self._description = None
        self._content = None
        self._required = None
        self._extensions = None
        self._getref = None
        self.discriminator = None

        if description is not None:
            self.description = description
        if content is not None:
            self.content = content
        if required is not None:
            self.required = required
        if extensions is not None:
            self.extensions = extensions
        if getref is not None:
            self.getref = getref

    @property
    def description(self):
        """Gets the description of this RequestBody.  # noqa: E501


        :return: The description of this RequestBody.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this RequestBody.


        :param description: The description of this RequestBody.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def content(self):
        """Gets the content of this RequestBody.  # noqa: E501


        :return: The content of this RequestBody.  # noqa: E501
        :rtype: dict(str, MediaType)
        """
        return self._content

    @content.setter
    def content(self, content):
        """Sets the content of this RequestBody.


        :param content: The content of this RequestBody.  # noqa: E501
        :type: dict(str, MediaType)
        """

        self._content = content

    @property
    def required(self):
        """Gets the required of this RequestBody.  # noqa: E501


        :return: The required of this RequestBody.  # noqa: E501
        :rtype: bool
        """
        return self._required

    @required.setter
    def required(self, required):
        """Sets the required of this RequestBody.


        :param required: The required of this RequestBody.  # noqa: E501
        :type: bool
        """

        self._required = required

    @property
    def extensions(self):
        """Gets the extensions of this RequestBody.  # noqa: E501


        :return: The extensions of this RequestBody.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this RequestBody.


        :param extensions: The extensions of this RequestBody.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

    @property
    def getref(self):
        """Gets the getref of this RequestBody.  # noqa: E501


        :return: The getref of this RequestBody.  # noqa: E501
        :rtype: str
        """
        return self._getref

    @getref.setter
    def getref(self, getref):
        """Sets the getref of this RequestBody.


        :param getref: The getref of this RequestBody.  # noqa: E501
        :type: str
        """

        self._getref = getref

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
        if not isinstance(other, RequestBody):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
