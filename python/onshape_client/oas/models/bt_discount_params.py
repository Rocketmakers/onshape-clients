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


class BTDiscountParams(object):
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
        'plan_id': 'str',
        'percent_off': 'int',
        'amount_off': 'int',
        'coupon_type': 'int',
        'coupon_valid_months': 'int',
        'expires_in_days': 'int'
    }

    attribute_map = {
        'plan_id': 'planId',
        'percent_off': 'percentOff',
        'amount_off': 'amountOff',
        'coupon_type': 'couponType',
        'coupon_valid_months': 'couponValidMonths',
        'expires_in_days': 'expiresInDays'
    }

    def __init__(self, plan_id=None, percent_off=None, amount_off=None, coupon_type=None, coupon_valid_months=None, expires_in_days=None):  # noqa: E501
        """BTDiscountParams - a model defined in OpenAPI"""  # noqa: E501

        self._plan_id = None
        self._percent_off = None
        self._amount_off = None
        self._coupon_type = None
        self._coupon_valid_months = None
        self._expires_in_days = None
        self.discriminator = None

        if plan_id is not None:
            self.plan_id = plan_id
        if percent_off is not None:
            self.percent_off = percent_off
        if amount_off is not None:
            self.amount_off = amount_off
        if coupon_type is not None:
            self.coupon_type = coupon_type
        if coupon_valid_months is not None:
            self.coupon_valid_months = coupon_valid_months
        if expires_in_days is not None:
            self.expires_in_days = expires_in_days

    @property
    def plan_id(self):
        """Gets the plan_id of this BTDiscountParams.  # noqa: E501


        :return: The plan_id of this BTDiscountParams.  # noqa: E501
        :rtype: str
        """
        return self._plan_id

    @plan_id.setter
    def plan_id(self, plan_id):
        """Sets the plan_id of this BTDiscountParams.


        :param plan_id: The plan_id of this BTDiscountParams.  # noqa: E501
        :type: str
        """

        self._plan_id = plan_id

    @property
    def percent_off(self):
        """Gets the percent_off of this BTDiscountParams.  # noqa: E501


        :return: The percent_off of this BTDiscountParams.  # noqa: E501
        :rtype: int
        """
        return self._percent_off

    @percent_off.setter
    def percent_off(self, percent_off):
        """Sets the percent_off of this BTDiscountParams.


        :param percent_off: The percent_off of this BTDiscountParams.  # noqa: E501
        :type: int
        """

        self._percent_off = percent_off

    @property
    def amount_off(self):
        """Gets the amount_off of this BTDiscountParams.  # noqa: E501


        :return: The amount_off of this BTDiscountParams.  # noqa: E501
        :rtype: int
        """
        return self._amount_off

    @amount_off.setter
    def amount_off(self, amount_off):
        """Sets the amount_off of this BTDiscountParams.


        :param amount_off: The amount_off of this BTDiscountParams.  # noqa: E501
        :type: int
        """

        self._amount_off = amount_off

    @property
    def coupon_type(self):
        """Gets the coupon_type of this BTDiscountParams.  # noqa: E501


        :return: The coupon_type of this BTDiscountParams.  # noqa: E501
        :rtype: int
        """
        return self._coupon_type

    @coupon_type.setter
    def coupon_type(self, coupon_type):
        """Sets the coupon_type of this BTDiscountParams.


        :param coupon_type: The coupon_type of this BTDiscountParams.  # noqa: E501
        :type: int
        """

        self._coupon_type = coupon_type

    @property
    def coupon_valid_months(self):
        """Gets the coupon_valid_months of this BTDiscountParams.  # noqa: E501


        :return: The coupon_valid_months of this BTDiscountParams.  # noqa: E501
        :rtype: int
        """
        return self._coupon_valid_months

    @coupon_valid_months.setter
    def coupon_valid_months(self, coupon_valid_months):
        """Sets the coupon_valid_months of this BTDiscountParams.


        :param coupon_valid_months: The coupon_valid_months of this BTDiscountParams.  # noqa: E501
        :type: int
        """

        self._coupon_valid_months = coupon_valid_months

    @property
    def expires_in_days(self):
        """Gets the expires_in_days of this BTDiscountParams.  # noqa: E501


        :return: The expires_in_days of this BTDiscountParams.  # noqa: E501
        :rtype: int
        """
        return self._expires_in_days

    @expires_in_days.setter
    def expires_in_days(self, expires_in_days):
        """Sets the expires_in_days of this BTDiscountParams.


        :param expires_in_days: The expires_in_days of this BTDiscountParams.  # noqa: E501
        :type: int
        """

        self._expires_in_days = expires_in_days

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
        if not isinstance(other, BTDiscountParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
