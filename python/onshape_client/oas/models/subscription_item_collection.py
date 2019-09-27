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


class SubscriptionItemCollection(object):
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
        'data': 'list[SubscriptionItem]',
        'total_count': 'int',
        'has_more': 'bool',
        'request_options': 'RequestOptions',
        'request_params': 'dict(str, object)',
        'url': 'str',
        'count': 'int'
    }

    attribute_map = {
        'data': 'data',
        'total_count': 'totalCount',
        'has_more': 'hasMore',
        'request_options': 'requestOptions',
        'request_params': 'requestParams',
        'url': 'url',
        'count': 'count'
    }

    def __init__(self, data=None, total_count=None, has_more=None, request_options=None, request_params=None, url=None, count=None):  # noqa: E501
        """SubscriptionItemCollection - a model defined in OpenAPI"""  # noqa: E501

        self._data = None
        self._total_count = None
        self._has_more = None
        self._request_options = None
        self._request_params = None
        self._url = None
        self._count = None
        self.discriminator = None

        if data is not None:
            self.data = data
        if total_count is not None:
            self.total_count = total_count
        if has_more is not None:
            self.has_more = has_more
        if request_options is not None:
            self.request_options = request_options
        if request_params is not None:
            self.request_params = request_params
        if url is not None:
            self.url = url
        if count is not None:
            self.count = count

    @property
    def data(self):
        """Gets the data of this SubscriptionItemCollection.  # noqa: E501


        :return: The data of this SubscriptionItemCollection.  # noqa: E501
        :rtype: list[SubscriptionItem]
        """
        return self._data

    @data.setter
    def data(self, data):
        """Sets the data of this SubscriptionItemCollection.


        :param data: The data of this SubscriptionItemCollection.  # noqa: E501
        :type: list[SubscriptionItem]
        """

        self._data = data

    @property
    def total_count(self):
        """Gets the total_count of this SubscriptionItemCollection.  # noqa: E501


        :return: The total_count of this SubscriptionItemCollection.  # noqa: E501
        :rtype: int
        """
        return self._total_count

    @total_count.setter
    def total_count(self, total_count):
        """Sets the total_count of this SubscriptionItemCollection.


        :param total_count: The total_count of this SubscriptionItemCollection.  # noqa: E501
        :type: int
        """

        self._total_count = total_count

    @property
    def has_more(self):
        """Gets the has_more of this SubscriptionItemCollection.  # noqa: E501


        :return: The has_more of this SubscriptionItemCollection.  # noqa: E501
        :rtype: bool
        """
        return self._has_more

    @has_more.setter
    def has_more(self, has_more):
        """Sets the has_more of this SubscriptionItemCollection.


        :param has_more: The has_more of this SubscriptionItemCollection.  # noqa: E501
        :type: bool
        """

        self._has_more = has_more

    @property
    def request_options(self):
        """Gets the request_options of this SubscriptionItemCollection.  # noqa: E501


        :return: The request_options of this SubscriptionItemCollection.  # noqa: E501
        :rtype: RequestOptions
        """
        return self._request_options

    @request_options.setter
    def request_options(self, request_options):
        """Sets the request_options of this SubscriptionItemCollection.


        :param request_options: The request_options of this SubscriptionItemCollection.  # noqa: E501
        :type: RequestOptions
        """

        self._request_options = request_options

    @property
    def request_params(self):
        """Gets the request_params of this SubscriptionItemCollection.  # noqa: E501


        :return: The request_params of this SubscriptionItemCollection.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._request_params

    @request_params.setter
    def request_params(self, request_params):
        """Sets the request_params of this SubscriptionItemCollection.


        :param request_params: The request_params of this SubscriptionItemCollection.  # noqa: E501
        :type: dict(str, object)
        """

        self._request_params = request_params

    @property
    def url(self):
        """Gets the url of this SubscriptionItemCollection.  # noqa: E501


        :return: The url of this SubscriptionItemCollection.  # noqa: E501
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """Sets the url of this SubscriptionItemCollection.


        :param url: The url of this SubscriptionItemCollection.  # noqa: E501
        :type: str
        """

        self._url = url

    @property
    def count(self):
        """Gets the count of this SubscriptionItemCollection.  # noqa: E501


        :return: The count of this SubscriptionItemCollection.  # noqa: E501
        :rtype: int
        """
        return self._count

    @count.setter
    def count(self, count):
        """Sets the count of this SubscriptionItemCollection.


        :param count: The count of this SubscriptionItemCollection.  # noqa: E501
        :type: int
        """

        self._count = count

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
        if not isinstance(other, SubscriptionItemCollection):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
