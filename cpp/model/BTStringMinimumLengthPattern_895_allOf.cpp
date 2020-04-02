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



#include "BTStringMinimumLengthPattern_895_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTStringMinimumLengthPattern_895_allOf::BTStringMinimumLengthPattern_895_allOf()
{
    m_MinimumLength = 0;
    m_MinimumLengthIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTStringMinimumLengthPattern_895_allOf::~BTStringMinimumLengthPattern_895_allOf()
{
}

void BTStringMinimumLengthPattern_895_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTStringMinimumLengthPattern_895_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MinimumLengthIsSet)
    {
        val[utility::conversions::to_string_t("minimumLength")] = ModelBase::toJson(m_MinimumLength);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTStringMinimumLengthPattern_895_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("minimumLength")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minimumLength"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_minimumLength;
            ok &= ModelBase::fromJson(fieldValue, refVal_minimumLength);
            setMinimumLength(refVal_minimumLength);
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

void BTStringMinimumLengthPattern_895_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MinimumLengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minimumLength"), m_MinimumLength));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTStringMinimumLengthPattern_895_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("minimumLength")))
    {
        int32_t refVal_minimumLength;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minimumLength")), refVal_minimumLength );
        setMinimumLength(refVal_minimumLength);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

int32_t BTStringMinimumLengthPattern_895_allOf::getMinimumLength() const
{
    return m_MinimumLength;
}

void BTStringMinimumLengthPattern_895_allOf::setMinimumLength(int32_t value)
{
    m_MinimumLength = value;
    m_MinimumLengthIsSet = true;
}

bool BTStringMinimumLengthPattern_895_allOf::minimumLengthIsSet() const
{
    return m_MinimumLengthIsSet;
}

void BTStringMinimumLengthPattern_895_allOf::unsetMinimumLength()
{
    m_MinimumLengthIsSet = false;
}
utility::string_t BTStringMinimumLengthPattern_895_allOf::getBtType() const
{
    return m_BtType;
}

void BTStringMinimumLengthPattern_895_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTStringMinimumLengthPattern_895_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTStringMinimumLengthPattern_895_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

