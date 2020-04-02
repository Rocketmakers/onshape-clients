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



#include "BTMDatabaseParameter_2229_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMDatabaseParameter_2229_allOf::BTMDatabaseParameter_2229_allOf()
{
    m_DatabaseId = utility::conversions::to_string_t("");
    m_DatabaseIdIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMDatabaseParameter_2229_allOf::~BTMDatabaseParameter_2229_allOf()
{
}

void BTMDatabaseParameter_2229_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMDatabaseParameter_2229_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DatabaseIdIsSet)
    {
        val[utility::conversions::to_string_t("databaseId")] = ModelBase::toJson(m_DatabaseId);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMDatabaseParameter_2229_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databaseId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databaseId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_databaseId;
            ok &= ModelBase::fromJson(fieldValue, refVal_databaseId);
            setDatabaseId(refVal_databaseId);
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

void BTMDatabaseParameter_2229_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DatabaseIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("databaseId"), m_DatabaseId));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMDatabaseParameter_2229_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("databaseId")))
    {
        utility::string_t refVal_databaseId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("databaseId")), refVal_databaseId );
        setDatabaseId(refVal_databaseId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTMDatabaseParameter_2229_allOf::getDatabaseId() const
{
    return m_DatabaseId;
}

void BTMDatabaseParameter_2229_allOf::setDatabaseId(const utility::string_t& value)
{
    m_DatabaseId = value;
    m_DatabaseIdIsSet = true;
}

bool BTMDatabaseParameter_2229_allOf::databaseIdIsSet() const
{
    return m_DatabaseIdIsSet;
}

void BTMDatabaseParameter_2229_allOf::unsetDatabaseId()
{
    m_DatabaseIdIsSet = false;
}
utility::string_t BTMDatabaseParameter_2229_allOf::getBtType() const
{
    return m_BtType;
}

void BTMDatabaseParameter_2229_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMDatabaseParameter_2229_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMDatabaseParameter_2229_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

