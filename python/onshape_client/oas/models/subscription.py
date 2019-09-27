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


class Subscription(object):
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
        'id': 'str',
        'object': 'str',
        'application_fee_percent': 'float',
        'billing': 'str',
        'cancel_at_period_end': 'bool',
        'canceled_at': 'int',
        'created': 'int',
        'current_period_end': 'int',
        'current_period_start': 'int',
        'customer': 'str',
        'days_until_due': 'int',
        'discount': 'Discount',
        'ended_at': 'int',
        'metadata': 'dict(str, str)',
        'plan': 'Plan',
        'quantity': 'int',
        'start': 'int',
        'status': 'str',
        'tax_percent': 'float',
        'trial_end': 'int',
        'trial_start': 'int',
        'customer_object': 'Customer',
        'subscription_items': 'SubscriptionItemCollection'
    }

    attribute_map = {
        'id': 'id',
        'object': 'object',
        'application_fee_percent': 'applicationFeePercent',
        'billing': 'billing',
        'cancel_at_period_end': 'cancelAtPeriodEnd',
        'canceled_at': 'canceledAt',
        'created': 'created',
        'current_period_end': 'currentPeriodEnd',
        'current_period_start': 'currentPeriodStart',
        'customer': 'customer',
        'days_until_due': 'daysUntilDue',
        'discount': 'discount',
        'ended_at': 'endedAt',
        'metadata': 'metadata',
        'plan': 'plan',
        'quantity': 'quantity',
        'start': 'start',
        'status': 'status',
        'tax_percent': 'taxPercent',
        'trial_end': 'trialEnd',
        'trial_start': 'trialStart',
        'customer_object': 'customerObject',
        'subscription_items': 'subscriptionItems'
    }

    def __init__(self, id=None, object=None, application_fee_percent=None, billing=None, cancel_at_period_end=None, canceled_at=None, created=None, current_period_end=None, current_period_start=None, customer=None, days_until_due=None, discount=None, ended_at=None, metadata=None, plan=None, quantity=None, start=None, status=None, tax_percent=None, trial_end=None, trial_start=None, customer_object=None, subscription_items=None):  # noqa: E501
        """Subscription - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._object = None
        self._application_fee_percent = None
        self._billing = None
        self._cancel_at_period_end = None
        self._canceled_at = None
        self._created = None
        self._current_period_end = None
        self._current_period_start = None
        self._customer = None
        self._days_until_due = None
        self._discount = None
        self._ended_at = None
        self._metadata = None
        self._plan = None
        self._quantity = None
        self._start = None
        self._status = None
        self._tax_percent = None
        self._trial_end = None
        self._trial_start = None
        self._customer_object = None
        self._subscription_items = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if object is not None:
            self.object = object
        if application_fee_percent is not None:
            self.application_fee_percent = application_fee_percent
        if billing is not None:
            self.billing = billing
        if cancel_at_period_end is not None:
            self.cancel_at_period_end = cancel_at_period_end
        if canceled_at is not None:
            self.canceled_at = canceled_at
        if created is not None:
            self.created = created
        if current_period_end is not None:
            self.current_period_end = current_period_end
        if current_period_start is not None:
            self.current_period_start = current_period_start
        if customer is not None:
            self.customer = customer
        if days_until_due is not None:
            self.days_until_due = days_until_due
        if discount is not None:
            self.discount = discount
        if ended_at is not None:
            self.ended_at = ended_at
        if metadata is not None:
            self.metadata = metadata
        if plan is not None:
            self.plan = plan
        if quantity is not None:
            self.quantity = quantity
        if start is not None:
            self.start = start
        if status is not None:
            self.status = status
        if tax_percent is not None:
            self.tax_percent = tax_percent
        if trial_end is not None:
            self.trial_end = trial_end
        if trial_start is not None:
            self.trial_start = trial_start
        if customer_object is not None:
            self.customer_object = customer_object
        if subscription_items is not None:
            self.subscription_items = subscription_items

    @property
    def id(self):
        """Gets the id of this Subscription.  # noqa: E501


        :return: The id of this Subscription.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Subscription.


        :param id: The id of this Subscription.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def object(self):
        """Gets the object of this Subscription.  # noqa: E501


        :return: The object of this Subscription.  # noqa: E501
        :rtype: str
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this Subscription.


        :param object: The object of this Subscription.  # noqa: E501
        :type: str
        """

        self._object = object

    @property
    def application_fee_percent(self):
        """Gets the application_fee_percent of this Subscription.  # noqa: E501


        :return: The application_fee_percent of this Subscription.  # noqa: E501
        :rtype: float
        """
        return self._application_fee_percent

    @application_fee_percent.setter
    def application_fee_percent(self, application_fee_percent):
        """Sets the application_fee_percent of this Subscription.


        :param application_fee_percent: The application_fee_percent of this Subscription.  # noqa: E501
        :type: float
        """

        self._application_fee_percent = application_fee_percent

    @property
    def billing(self):
        """Gets the billing of this Subscription.  # noqa: E501


        :return: The billing of this Subscription.  # noqa: E501
        :rtype: str
        """
        return self._billing

    @billing.setter
    def billing(self, billing):
        """Sets the billing of this Subscription.


        :param billing: The billing of this Subscription.  # noqa: E501
        :type: str
        """

        self._billing = billing

    @property
    def cancel_at_period_end(self):
        """Gets the cancel_at_period_end of this Subscription.  # noqa: E501


        :return: The cancel_at_period_end of this Subscription.  # noqa: E501
        :rtype: bool
        """
        return self._cancel_at_period_end

    @cancel_at_period_end.setter
    def cancel_at_period_end(self, cancel_at_period_end):
        """Sets the cancel_at_period_end of this Subscription.


        :param cancel_at_period_end: The cancel_at_period_end of this Subscription.  # noqa: E501
        :type: bool
        """

        self._cancel_at_period_end = cancel_at_period_end

    @property
    def canceled_at(self):
        """Gets the canceled_at of this Subscription.  # noqa: E501


        :return: The canceled_at of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._canceled_at

    @canceled_at.setter
    def canceled_at(self, canceled_at):
        """Sets the canceled_at of this Subscription.


        :param canceled_at: The canceled_at of this Subscription.  # noqa: E501
        :type: int
        """

        self._canceled_at = canceled_at

    @property
    def created(self):
        """Gets the created of this Subscription.  # noqa: E501


        :return: The created of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this Subscription.


        :param created: The created of this Subscription.  # noqa: E501
        :type: int
        """

        self._created = created

    @property
    def current_period_end(self):
        """Gets the current_period_end of this Subscription.  # noqa: E501


        :return: The current_period_end of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._current_period_end

    @current_period_end.setter
    def current_period_end(self, current_period_end):
        """Sets the current_period_end of this Subscription.


        :param current_period_end: The current_period_end of this Subscription.  # noqa: E501
        :type: int
        """

        self._current_period_end = current_period_end

    @property
    def current_period_start(self):
        """Gets the current_period_start of this Subscription.  # noqa: E501


        :return: The current_period_start of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._current_period_start

    @current_period_start.setter
    def current_period_start(self, current_period_start):
        """Sets the current_period_start of this Subscription.


        :param current_period_start: The current_period_start of this Subscription.  # noqa: E501
        :type: int
        """

        self._current_period_start = current_period_start

    @property
    def customer(self):
        """Gets the customer of this Subscription.  # noqa: E501


        :return: The customer of this Subscription.  # noqa: E501
        :rtype: str
        """
        return self._customer

    @customer.setter
    def customer(self, customer):
        """Sets the customer of this Subscription.


        :param customer: The customer of this Subscription.  # noqa: E501
        :type: str
        """

        self._customer = customer

    @property
    def days_until_due(self):
        """Gets the days_until_due of this Subscription.  # noqa: E501


        :return: The days_until_due of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._days_until_due

    @days_until_due.setter
    def days_until_due(self, days_until_due):
        """Sets the days_until_due of this Subscription.


        :param days_until_due: The days_until_due of this Subscription.  # noqa: E501
        :type: int
        """

        self._days_until_due = days_until_due

    @property
    def discount(self):
        """Gets the discount of this Subscription.  # noqa: E501


        :return: The discount of this Subscription.  # noqa: E501
        :rtype: Discount
        """
        return self._discount

    @discount.setter
    def discount(self, discount):
        """Sets the discount of this Subscription.


        :param discount: The discount of this Subscription.  # noqa: E501
        :type: Discount
        """

        self._discount = discount

    @property
    def ended_at(self):
        """Gets the ended_at of this Subscription.  # noqa: E501


        :return: The ended_at of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._ended_at

    @ended_at.setter
    def ended_at(self, ended_at):
        """Sets the ended_at of this Subscription.


        :param ended_at: The ended_at of this Subscription.  # noqa: E501
        :type: int
        """

        self._ended_at = ended_at

    @property
    def metadata(self):
        """Gets the metadata of this Subscription.  # noqa: E501


        :return: The metadata of this Subscription.  # noqa: E501
        :rtype: dict(str, str)
        """
        return self._metadata

    @metadata.setter
    def metadata(self, metadata):
        """Sets the metadata of this Subscription.


        :param metadata: The metadata of this Subscription.  # noqa: E501
        :type: dict(str, str)
        """

        self._metadata = metadata

    @property
    def plan(self):
        """Gets the plan of this Subscription.  # noqa: E501


        :return: The plan of this Subscription.  # noqa: E501
        :rtype: Plan
        """
        return self._plan

    @plan.setter
    def plan(self, plan):
        """Sets the plan of this Subscription.


        :param plan: The plan of this Subscription.  # noqa: E501
        :type: Plan
        """

        self._plan = plan

    @property
    def quantity(self):
        """Gets the quantity of this Subscription.  # noqa: E501


        :return: The quantity of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._quantity

    @quantity.setter
    def quantity(self, quantity):
        """Sets the quantity of this Subscription.


        :param quantity: The quantity of this Subscription.  # noqa: E501
        :type: int
        """

        self._quantity = quantity

    @property
    def start(self):
        """Gets the start of this Subscription.  # noqa: E501


        :return: The start of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._start

    @start.setter
    def start(self, start):
        """Sets the start of this Subscription.


        :param start: The start of this Subscription.  # noqa: E501
        :type: int
        """

        self._start = start

    @property
    def status(self):
        """Gets the status of this Subscription.  # noqa: E501


        :return: The status of this Subscription.  # noqa: E501
        :rtype: str
        """
        return self._status

    @status.setter
    def status(self, status):
        """Sets the status of this Subscription.


        :param status: The status of this Subscription.  # noqa: E501
        :type: str
        """

        self._status = status

    @property
    def tax_percent(self):
        """Gets the tax_percent of this Subscription.  # noqa: E501


        :return: The tax_percent of this Subscription.  # noqa: E501
        :rtype: float
        """
        return self._tax_percent

    @tax_percent.setter
    def tax_percent(self, tax_percent):
        """Sets the tax_percent of this Subscription.


        :param tax_percent: The tax_percent of this Subscription.  # noqa: E501
        :type: float
        """

        self._tax_percent = tax_percent

    @property
    def trial_end(self):
        """Gets the trial_end of this Subscription.  # noqa: E501


        :return: The trial_end of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._trial_end

    @trial_end.setter
    def trial_end(self, trial_end):
        """Sets the trial_end of this Subscription.


        :param trial_end: The trial_end of this Subscription.  # noqa: E501
        :type: int
        """

        self._trial_end = trial_end

    @property
    def trial_start(self):
        """Gets the trial_start of this Subscription.  # noqa: E501


        :return: The trial_start of this Subscription.  # noqa: E501
        :rtype: int
        """
        return self._trial_start

    @trial_start.setter
    def trial_start(self, trial_start):
        """Sets the trial_start of this Subscription.


        :param trial_start: The trial_start of this Subscription.  # noqa: E501
        :type: int
        """

        self._trial_start = trial_start

    @property
    def customer_object(self):
        """Gets the customer_object of this Subscription.  # noqa: E501


        :return: The customer_object of this Subscription.  # noqa: E501
        :rtype: Customer
        """
        return self._customer_object

    @customer_object.setter
    def customer_object(self, customer_object):
        """Sets the customer_object of this Subscription.


        :param customer_object: The customer_object of this Subscription.  # noqa: E501
        :type: Customer
        """

        self._customer_object = customer_object

    @property
    def subscription_items(self):
        """Gets the subscription_items of this Subscription.  # noqa: E501


        :return: The subscription_items of this Subscription.  # noqa: E501
        :rtype: SubscriptionItemCollection
        """
        return self._subscription_items

    @subscription_items.setter
    def subscription_items(self, subscription_items):
        """Sets the subscription_items of this Subscription.


        :param subscription_items: The subscription_items of this Subscription.  # noqa: E501
        :type: SubscriptionItemCollection
        """

        self._subscription_items = subscription_items

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
        if not isinstance(other, Subscription):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
