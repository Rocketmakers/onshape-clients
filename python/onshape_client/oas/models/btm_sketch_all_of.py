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


class BTMSketchAllOf(object):
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
        'entities': 'list[BTMSketchGeomEntity]',
        'constraints': 'list[BTMSketchConstraint]'
    }

    attribute_map = {
        'entities': 'entities',
        'constraints': 'constraints'
    }

    def __init__(self, entities=None, constraints=None):  # noqa: E501
        """BTMSketchAllOf - a model defined in OpenAPI"""  # noqa: E501

        self._entities = None
        self._constraints = None
        self.discriminator = None

        if entities is not None:
            self.entities = entities
        if constraints is not None:
            self.constraints = constraints

    @property
    def entities(self):
        """Gets the entities of this BTMSketchAllOf.  # noqa: E501


        :return: The entities of this BTMSketchAllOf.  # noqa: E501
        :rtype: list[BTMSketchGeomEntity]
        """
        return self._entities

    @entities.setter
    def entities(self, entities):
        """Sets the entities of this BTMSketchAllOf.


        :param entities: The entities of this BTMSketchAllOf.  # noqa: E501
        :type: list[BTMSketchGeomEntity]
        """

        self._entities = entities

    @property
    def constraints(self):
        """Gets the constraints of this BTMSketchAllOf.  # noqa: E501


        :return: The constraints of this BTMSketchAllOf.  # noqa: E501
        :rtype: list[BTMSketchConstraint]
        """
        return self._constraints

    @constraints.setter
    def constraints(self, constraints):
        """Sets the constraints of this BTMSketchAllOf.


        :param constraints: The constraints of this BTMSketchAllOf.  # noqa: E501
        :type: list[BTMSketchConstraint]
        """

        self._constraints = constraints

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
        if not isinstance(other, BTMSketchAllOf):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
