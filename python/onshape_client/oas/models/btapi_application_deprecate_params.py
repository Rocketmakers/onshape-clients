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


class BTAPIApplicationDeprecateParams(object):
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
        'owner_email_subject_text': 'str',
        'owner_email_message_text': 'str',
        'user_email_subject_text': 'str',
        'user_email_message_text': 'str'
    }

    attribute_map = {
        'owner_email_subject_text': 'ownerEmailSubjectText',
        'owner_email_message_text': 'ownerEmailMessageText',
        'user_email_subject_text': 'userEmailSubjectText',
        'user_email_message_text': 'userEmailMessageText'
    }

    def __init__(self, owner_email_subject_text=None, owner_email_message_text=None, user_email_subject_text=None, user_email_message_text=None):  # noqa: E501
        """BTAPIApplicationDeprecateParams - a model defined in OpenAPI"""  # noqa: E501

        self._owner_email_subject_text = None
        self._owner_email_message_text = None
        self._user_email_subject_text = None
        self._user_email_message_text = None
        self.discriminator = None

        if owner_email_subject_text is not None:
            self.owner_email_subject_text = owner_email_subject_text
        if owner_email_message_text is not None:
            self.owner_email_message_text = owner_email_message_text
        if user_email_subject_text is not None:
            self.user_email_subject_text = user_email_subject_text
        if user_email_message_text is not None:
            self.user_email_message_text = user_email_message_text

    @property
    def owner_email_subject_text(self):
        """Gets the owner_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501


        :return: The owner_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :rtype: str
        """
        return self._owner_email_subject_text

    @owner_email_subject_text.setter
    def owner_email_subject_text(self, owner_email_subject_text):
        """Sets the owner_email_subject_text of this BTAPIApplicationDeprecateParams.


        :param owner_email_subject_text: The owner_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :type: str
        """

        self._owner_email_subject_text = owner_email_subject_text

    @property
    def owner_email_message_text(self):
        """Gets the owner_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501


        :return: The owner_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :rtype: str
        """
        return self._owner_email_message_text

    @owner_email_message_text.setter
    def owner_email_message_text(self, owner_email_message_text):
        """Sets the owner_email_message_text of this BTAPIApplicationDeprecateParams.


        :param owner_email_message_text: The owner_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :type: str
        """

        self._owner_email_message_text = owner_email_message_text

    @property
    def user_email_subject_text(self):
        """Gets the user_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501


        :return: The user_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :rtype: str
        """
        return self._user_email_subject_text

    @user_email_subject_text.setter
    def user_email_subject_text(self, user_email_subject_text):
        """Sets the user_email_subject_text of this BTAPIApplicationDeprecateParams.


        :param user_email_subject_text: The user_email_subject_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :type: str
        """

        self._user_email_subject_text = user_email_subject_text

    @property
    def user_email_message_text(self):
        """Gets the user_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501


        :return: The user_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :rtype: str
        """
        return self._user_email_message_text

    @user_email_message_text.setter
    def user_email_message_text(self, user_email_message_text):
        """Sets the user_email_message_text of this BTAPIApplicationDeprecateParams.


        :param user_email_message_text: The user_email_message_text of this BTAPIApplicationDeprecateParams.  # noqa: E501
        :type: str
        """

        self._user_email_message_text = user_email_message_text

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
        if not isinstance(other, BTAPIApplicationDeprecateParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
