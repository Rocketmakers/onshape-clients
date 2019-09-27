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


class BTWorkflowSnapshotInfo(object):
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
        'is_frozen': 'bool',
        'is_discarded': 'bool',
        'metadata_state': 'str',
        'actions': 'list[BTWorkflowActionInfo]',
        'state': 'BTWorkflowStateInfo',
        'is_setup': 'bool',
        'approver_ids': 'list[str]',
        'notifier_ids': 'list[str]'
    }

    attribute_map = {
        'is_frozen': 'isFrozen',
        'is_discarded': 'isDiscarded',
        'metadata_state': 'metadataState',
        'actions': 'actions',
        'state': 'state',
        'is_setup': 'isSetup',
        'approver_ids': 'approverIds',
        'notifier_ids': 'notifierIds'
    }

    def __init__(self, is_frozen=None, is_discarded=None, metadata_state=None, actions=None, state=None, is_setup=None, approver_ids=None, notifier_ids=None):  # noqa: E501
        """BTWorkflowSnapshotInfo - a model defined in OpenAPI"""  # noqa: E501

        self._is_frozen = None
        self._is_discarded = None
        self._metadata_state = None
        self._actions = None
        self._state = None
        self._is_setup = None
        self._approver_ids = None
        self._notifier_ids = None
        self.discriminator = None

        if is_frozen is not None:
            self.is_frozen = is_frozen
        if is_discarded is not None:
            self.is_discarded = is_discarded
        if metadata_state is not None:
            self.metadata_state = metadata_state
        if actions is not None:
            self.actions = actions
        if state is not None:
            self.state = state
        if is_setup is not None:
            self.is_setup = is_setup
        if approver_ids is not None:
            self.approver_ids = approver_ids
        if notifier_ids is not None:
            self.notifier_ids = notifier_ids

    @property
    def is_frozen(self):
        """Gets the is_frozen of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The is_frozen of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_frozen

    @is_frozen.setter
    def is_frozen(self, is_frozen):
        """Sets the is_frozen of this BTWorkflowSnapshotInfo.


        :param is_frozen: The is_frozen of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: bool
        """

        self._is_frozen = is_frozen

    @property
    def is_discarded(self):
        """Gets the is_discarded of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The is_discarded of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_discarded

    @is_discarded.setter
    def is_discarded(self, is_discarded):
        """Sets the is_discarded of this BTWorkflowSnapshotInfo.


        :param is_discarded: The is_discarded of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: bool
        """

        self._is_discarded = is_discarded

    @property
    def metadata_state(self):
        """Gets the metadata_state of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The metadata_state of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: str
        """
        return self._metadata_state

    @metadata_state.setter
    def metadata_state(self, metadata_state):
        """Sets the metadata_state of this BTWorkflowSnapshotInfo.


        :param metadata_state: The metadata_state of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: str
        """

        self._metadata_state = metadata_state

    @property
    def actions(self):
        """Gets the actions of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The actions of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: list[BTWorkflowActionInfo]
        """
        return self._actions

    @actions.setter
    def actions(self, actions):
        """Sets the actions of this BTWorkflowSnapshotInfo.


        :param actions: The actions of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: list[BTWorkflowActionInfo]
        """

        self._actions = actions

    @property
    def state(self):
        """Gets the state of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The state of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: BTWorkflowStateInfo
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this BTWorkflowSnapshotInfo.


        :param state: The state of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: BTWorkflowStateInfo
        """

        self._state = state

    @property
    def is_setup(self):
        """Gets the is_setup of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The is_setup of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_setup

    @is_setup.setter
    def is_setup(self, is_setup):
        """Sets the is_setup of this BTWorkflowSnapshotInfo.


        :param is_setup: The is_setup of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: bool
        """

        self._is_setup = is_setup

    @property
    def approver_ids(self):
        """Gets the approver_ids of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The approver_ids of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: list[str]
        """
        return self._approver_ids

    @approver_ids.setter
    def approver_ids(self, approver_ids):
        """Sets the approver_ids of this BTWorkflowSnapshotInfo.


        :param approver_ids: The approver_ids of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: list[str]
        """

        self._approver_ids = approver_ids

    @property
    def notifier_ids(self):
        """Gets the notifier_ids of this BTWorkflowSnapshotInfo.  # noqa: E501


        :return: The notifier_ids of this BTWorkflowSnapshotInfo.  # noqa: E501
        :rtype: list[str]
        """
        return self._notifier_ids

    @notifier_ids.setter
    def notifier_ids(self, notifier_ids):
        """Sets the notifier_ids of this BTWorkflowSnapshotInfo.


        :param notifier_ids: The notifier_ids of this BTWorkflowSnapshotInfo.  # noqa: E501
        :type: list[str]
        """

        self._notifier_ids = notifier_ids

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
        if not isinstance(other, BTWorkflowSnapshotInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
