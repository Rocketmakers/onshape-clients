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



#include "BTPFunctionOrPredicateDeclaration_247_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPFunctionOrPredicateDeclaration_247_allOf::BTPFunctionOrPredicateDeclaration_247_allOf()
{
    m_NameIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPFunctionOrPredicateDeclaration_247_allOf::~BTPFunctionOrPredicateDeclaration_247_allOf()
{
}

void BTPFunctionOrPredicateDeclaration_247_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPFunctionOrPredicateDeclaration_247_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPFunctionOrPredicateDeclaration_247_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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

void BTPFunctionOrPredicateDeclaration_247_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPFunctionOrPredicateDeclaration_247_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTPIdentifier_8> BTPFunctionOrPredicateDeclaration_247_allOf::getName() const
{
    return m_Name;
}

void BTPFunctionOrPredicateDeclaration_247_allOf::setName(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTPFunctionOrPredicateDeclaration_247_allOf::nameIsSet() const
{
    return m_NameIsSet;
}

void BTPFunctionOrPredicateDeclaration_247_allOf::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTPFunctionOrPredicateDeclaration_247_allOf::getBtType() const
{
    return m_BtType;
}

void BTPFunctionOrPredicateDeclaration_247_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPFunctionOrPredicateDeclaration_247_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPFunctionOrPredicateDeclaration_247_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

