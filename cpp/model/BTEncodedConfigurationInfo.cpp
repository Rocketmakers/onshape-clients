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



#include "BTEncodedConfigurationInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTEncodedConfigurationInfo::BTEncodedConfigurationInfo()
{
    m_EncodedId = utility::conversions::to_string_t("");
    m_EncodedIdIsSet = false;
    m_QueryParam = utility::conversions::to_string_t("");
    m_QueryParamIsSet = false;
}

BTEncodedConfigurationInfo::~BTEncodedConfigurationInfo()
{
}

void BTEncodedConfigurationInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTEncodedConfigurationInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EncodedIdIsSet)
    {
        val[utility::conversions::to_string_t("encodedId")] = ModelBase::toJson(m_EncodedId);
    }
    if(m_QueryParamIsSet)
    {
        val[utility::conversions::to_string_t("queryParam")] = ModelBase::toJson(m_QueryParam);
    }

    return val;
}

bool BTEncodedConfigurationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("encodedId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encodedId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_encodedId;
            ok &= ModelBase::fromJson(fieldValue, refVal_encodedId);
            setEncodedId(refVal_encodedId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queryParam")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryParam"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_queryParam;
            ok &= ModelBase::fromJson(fieldValue, refVal_queryParam);
            setQueryParam(refVal_queryParam);
        }
    }
    return ok;
}

void BTEncodedConfigurationInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EncodedIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("encodedId"), m_EncodedId));
    }
    if(m_QueryParamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("queryParam"), m_QueryParam));
    }
}

bool BTEncodedConfigurationInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("encodedId")))
    {
        utility::string_t refVal_encodedId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("encodedId")), refVal_encodedId );
        setEncodedId(refVal_encodedId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("queryParam")))
    {
        utility::string_t refVal_queryParam;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("queryParam")), refVal_queryParam );
        setQueryParam(refVal_queryParam);
    }
    return ok;
}

utility::string_t BTEncodedConfigurationInfo::getEncodedId() const
{
    return m_EncodedId;
}

void BTEncodedConfigurationInfo::setEncodedId(const utility::string_t& value)
{
    m_EncodedId = value;
    m_EncodedIdIsSet = true;
}

bool BTEncodedConfigurationInfo::encodedIdIsSet() const
{
    return m_EncodedIdIsSet;
}

void BTEncodedConfigurationInfo::unsetEncodedId()
{
    m_EncodedIdIsSet = false;
}
utility::string_t BTEncodedConfigurationInfo::getQueryParam() const
{
    return m_QueryParam;
}

void BTEncodedConfigurationInfo::setQueryParam(const utility::string_t& value)
{
    m_QueryParam = value;
    m_QueryParamIsSet = true;
}

bool BTEncodedConfigurationInfo::queryParamIsSet() const
{
    return m_QueryParamIsSet;
}

void BTEncodedConfigurationInfo::unsetQueryParam()
{
    m_QueryParamIsSet = false;
}
}
}
}
}

