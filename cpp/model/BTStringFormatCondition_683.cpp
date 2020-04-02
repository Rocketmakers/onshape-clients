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



#include "BTStringFormatCondition_683.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTStringFormatCondition_683::BTStringFormatCondition_683()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_ErrorMessage = utility::conversions::to_string_t("");
    m_ErrorMessageIsSet = false;
    m_ShouldResetValueWhenConfirmed = false;
    m_ShouldResetValueWhenConfirmedIsSet = false;
}

BTStringFormatCondition_683::~BTStringFormatCondition_683()
{
}

void BTStringFormatCondition_683::validate()
{
    // TODO: implement validation
}

web::json::value BTStringFormatCondition_683::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_ErrorMessageIsSet)
    {
        val[utility::conversions::to_string_t("errorMessage")] = ModelBase::toJson(m_ErrorMessage);
    }
    if(m_ShouldResetValueWhenConfirmedIsSet)
    {
        val[utility::conversions::to_string_t("shouldResetValueWhenConfirmed")] = ModelBase::toJson(m_ShouldResetValueWhenConfirmed);
    }

    return val;
}

bool BTStringFormatCondition_683::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("errorMessage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorMessage"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_errorMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_errorMessage);
            setErrorMessage(refVal_errorMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shouldResetValueWhenConfirmed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shouldResetValueWhenConfirmed"));
        if(!fieldValue.is_null())
        {
            bool refVal_shouldResetValueWhenConfirmed;
            ok &= ModelBase::fromJson(fieldValue, refVal_shouldResetValueWhenConfirmed);
            setShouldResetValueWhenConfirmed(refVal_shouldResetValueWhenConfirmed);
        }
    }
    return ok;
}

void BTStringFormatCondition_683::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ErrorMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("errorMessage"), m_ErrorMessage));
    }
    if(m_ShouldResetValueWhenConfirmedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shouldResetValueWhenConfirmed"), m_ShouldResetValueWhenConfirmed));
    }
}

bool BTStringFormatCondition_683::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("errorMessage")))
    {
        utility::string_t refVal_errorMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("errorMessage")), refVal_errorMessage );
        setErrorMessage(refVal_errorMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shouldResetValueWhenConfirmed")))
    {
        bool refVal_shouldResetValueWhenConfirmed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shouldResetValueWhenConfirmed")), refVal_shouldResetValueWhenConfirmed );
        setShouldResetValueWhenConfirmed(refVal_shouldResetValueWhenConfirmed);
    }
    return ok;
}

utility::string_t BTStringFormatCondition_683::getBtType() const
{
    return m_BtType;
}

void BTStringFormatCondition_683::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTStringFormatCondition_683::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTStringFormatCondition_683::unsetBtType()
{
    m_BtTypeIsSet = false;
}
utility::string_t BTStringFormatCondition_683::getErrorMessage() const
{
    return m_ErrorMessage;
}

void BTStringFormatCondition_683::setErrorMessage(const utility::string_t& value)
{
    m_ErrorMessage = value;
    m_ErrorMessageIsSet = true;
}

bool BTStringFormatCondition_683::errorMessageIsSet() const
{
    return m_ErrorMessageIsSet;
}

void BTStringFormatCondition_683::unsetErrorMessage()
{
    m_ErrorMessageIsSet = false;
}
bool BTStringFormatCondition_683::isShouldResetValueWhenConfirmed() const
{
    return m_ShouldResetValueWhenConfirmed;
}

void BTStringFormatCondition_683::setShouldResetValueWhenConfirmed(bool value)
{
    m_ShouldResetValueWhenConfirmed = value;
    m_ShouldResetValueWhenConfirmedIsSet = true;
}

bool BTStringFormatCondition_683::shouldResetValueWhenConfirmedIsSet() const
{
    return m_ShouldResetValueWhenConfirmedIsSet;
}

void BTStringFormatCondition_683::unsetShouldResetValueWhenConfirmed()
{
    m_ShouldResetValueWhenConfirmedIsSet = false;
}
}
}
}
}

