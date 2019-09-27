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


class BTAppElementParams(object):
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
        'subelements': 'list[BTAppElementChangeParams]',
        'format_id': 'str',
        'description': 'str',
        'name': 'str',
        'location': 'BTElementLocationParams'
    }

    attribute_map = {
        'subelements': 'subelements',
        'format_id': 'formatId',
        'description': 'description',
        'name': 'name',
        'location': 'location'
    }

    def __init__(self, subelements=None, format_id=None, description=None, name=None, location=None):  # noqa: E501
        """BTAppElementParams - a model defined in OpenAPI"""  # noqa: E501

        self._subelements = None
        self._format_id = None
        self._description = None
        self._name = None
        self._location = None
        self.discriminator = None

        if subelements is not None:
            self.subelements = subelements
        if format_id is not None:
            self.format_id = format_id
        if description is not None:
            self.description = description
        if name is not None:
            self.name = name
        if location is not None:
            self.location = location

    @property
    def subelements(self):
        """Gets the subelements of this BTAppElementParams.  # noqa: E501


        :return: The subelements of this BTAppElementParams.  # noqa: E501
        :rtype: list[BTAppElementChangeParams]
        """
        return self._subelements

    @subelements.setter
    def subelements(self, subelements):
        """Sets the subelements of this BTAppElementParams.


        :param subelements: The subelements of this BTAppElementParams.  # noqa: E501
        :type: list[BTAppElementChangeParams]
        """

        self._subelements = subelements

    @property
    def format_id(self):
        """Gets the format_id of this BTAppElementParams.  # noqa: E501


        :return: The format_id of this BTAppElementParams.  # noqa: E501
        :rtype: str
        """
        return self._format_id

    @format_id.setter
    def format_id(self, format_id):
        """Sets the format_id of this BTAppElementParams.


        :param format_id: The format_id of this BTAppElementParams.  # noqa: E501
        :type: str
        """

        self._format_id = format_id

    @property
    def description(self):
        """Gets the description of this BTAppElementParams.  # noqa: E501


        :return: The description of this BTAppElementParams.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTAppElementParams.


        :param description: The description of this BTAppElementParams.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def name(self):
        """Gets the name of this BTAppElementParams.  # noqa: E501


        :return: The name of this BTAppElementParams.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTAppElementParams.


        :param name: The name of this BTAppElementParams.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def location(self):
        """Gets the location of this BTAppElementParams.  # noqa: E501


        :return: The location of this BTAppElementParams.  # noqa: E501
        :rtype: BTElementLocationParams
        """
        return self._location

    @location.setter
    def location(self, location):
        """Sets the location of this BTAppElementParams.


        :param location: The location of this BTAppElementParams.  # noqa: E501
        :type: BTElementLocationParams
        """

        self._location = location

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
        if not isinstance(other, BTAppElementParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
