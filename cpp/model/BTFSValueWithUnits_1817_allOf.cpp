/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BTFSValueWithUnits_1817_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFSValueWithUnits_1817_allOf::BTFSValueWithUnits_1817_allOf()
{
    m_ValueObject = 0.0;
    m_ValueObjectIsSet = false;
    m_QuantityType = utility::conversions::to_string_t("");
    m_QuantityTypeIsSet = false;
    m_UnitToPowerIsSet = false;
    m_Value = 0.0;
    m_ValueIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTFSValueWithUnits_1817_allOf::~BTFSValueWithUnits_1817_allOf()
{
}

void BTFSValueWithUnits_1817_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTFSValueWithUnits_1817_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ValueObjectIsSet)
    {
        val[utility::conversions::to_string_t("valueObject")] = ModelBase::toJson(m_ValueObject);
    }
    if(m_QuantityTypeIsSet)
    {
        val[utility::conversions::to_string_t("quantityType")] = ModelBase::toJson(m_QuantityType);
    }
    if(m_UnitToPowerIsSet)
    {
        val[utility::conversions::to_string_t("unitToPower")] = ModelBase::toJson(m_UnitToPower);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTFSValueWithUnits_1817_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("valueObject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valueObject"));
        if(!fieldValue.is_null())
        {
            double refVal_valueObject;
            ok &= ModelBase::fromJson(fieldValue, refVal_valueObject);
            setValueObject(refVal_valueObject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quantityType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quantityType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_quantityType;
            ok &= ModelBase::fromJson(fieldValue, refVal_quantityType);
            setQuantityType(refVal_quantityType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unitToPower")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unitToPower"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, int32_t> refVal_unitToPower;
            ok &= ModelBase::fromJson(fieldValue, refVal_unitToPower);
            setUnitToPower(refVal_unitToPower);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            double refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTFSValueWithUnits_1817_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ValueObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valueObject"), m_ValueObject));
    }
    if(m_QuantityTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quantityType"), m_QuantityType));
    }
    if(m_UnitToPowerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unitToPower"), m_UnitToPower));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTFSValueWithUnits_1817_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("valueObject")))
    {
        double refVal_valueObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valueObject")), refVal_valueObject );
        setValueObject(refVal_valueObject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quantityType")))
    {
        utility::string_t refVal_quantityType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("quantityType")), refVal_quantityType );
        setQuantityType(refVal_quantityType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unitToPower")))
    {
        std::map<utility::string_t, int32_t> refVal_unitToPower;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("unitToPower")), refVal_unitToPower );
        setUnitToPower(refVal_unitToPower);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        double refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

double BTFSValueWithUnits_1817_allOf::getValueObject() const
{
    return m_ValueObject;
}

void BTFSValueWithUnits_1817_allOf::setValueObject(double value)
{
    m_ValueObject = value;
    m_ValueObjectIsSet = true;
}

bool BTFSValueWithUnits_1817_allOf::valueObjectIsSet() const
{
    return m_ValueObjectIsSet;
}

void BTFSValueWithUnits_1817_allOf::unsetValueObject()
{
    m_ValueObjectIsSet = false;
}
utility::string_t BTFSValueWithUnits_1817_allOf::getQuantityType() const
{
    return m_QuantityType;
}

void BTFSValueWithUnits_1817_allOf::setQuantityType(const utility::string_t& value)
{
    m_QuantityType = value;
    m_QuantityTypeIsSet = true;
}

bool BTFSValueWithUnits_1817_allOf::quantityTypeIsSet() const
{
    return m_QuantityTypeIsSet;
}

void BTFSValueWithUnits_1817_allOf::unsetQuantityType()
{
    m_QuantityTypeIsSet = false;
}
std::map<utility::string_t, int32_t>& BTFSValueWithUnits_1817_allOf::getUnitToPower()
{
    return m_UnitToPower;
}

void BTFSValueWithUnits_1817_allOf::setUnitToPower(std::map<utility::string_t, int32_t> value)
{
    m_UnitToPower = value;
    m_UnitToPowerIsSet = true;
}

bool BTFSValueWithUnits_1817_allOf::unitToPowerIsSet() const
{
    return m_UnitToPowerIsSet;
}

void BTFSValueWithUnits_1817_allOf::unsetUnitToPower()
{
    m_UnitToPowerIsSet = false;
}
double BTFSValueWithUnits_1817_allOf::getValue() const
{
    return m_Value;
}

void BTFSValueWithUnits_1817_allOf::setValue(double value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool BTFSValueWithUnits_1817_allOf::valueIsSet() const
{
    return m_ValueIsSet;
}

void BTFSValueWithUnits_1817_allOf::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t BTFSValueWithUnits_1817_allOf::getBtType() const
{
    return m_BtType;
}

void BTFSValueWithUnits_1817_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTFSValueWithUnits_1817_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTFSValueWithUnits_1817_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

