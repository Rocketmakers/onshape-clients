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



#include "BTTableAssemblyCrossHighlightDataItem_2659.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableAssemblyCrossHighlightDataItem_2659::BTTableAssemblyCrossHighlightDataItem_2659()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_OccurrencePathId = utility::conversions::to_string_t("");
    m_OccurrencePathIdIsSet = false;
}

BTTableAssemblyCrossHighlightDataItem_2659::~BTTableAssemblyCrossHighlightDataItem_2659()
{
}

void BTTableAssemblyCrossHighlightDataItem_2659::validate()
{
    // TODO: implement validation
}

web::json::value BTTableAssemblyCrossHighlightDataItem_2659::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_OccurrencePathIdIsSet)
    {
        val[utility::conversions::to_string_t("occurrencePathId")] = ModelBase::toJson(m_OccurrencePathId);
    }

    return val;
}

bool BTTableAssemblyCrossHighlightDataItem_2659::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("occurrencePathId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occurrencePathId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_occurrencePathId;
            ok &= ModelBase::fromJson(fieldValue, refVal_occurrencePathId);
            setOccurrencePathId(refVal_occurrencePathId);
        }
    }
    return ok;
}

void BTTableAssemblyCrossHighlightDataItem_2659::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_OccurrencePathIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("occurrencePathId"), m_OccurrencePathId));
    }
}

bool BTTableAssemblyCrossHighlightDataItem_2659::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("occurrencePathId")))
    {
        utility::string_t refVal_occurrencePathId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("occurrencePathId")), refVal_occurrencePathId );
        setOccurrencePathId(refVal_occurrencePathId);
    }
    return ok;
}

utility::string_t BTTableAssemblyCrossHighlightDataItem_2659::getBtType() const
{
    return m_BtType;
}

void BTTableAssemblyCrossHighlightDataItem_2659::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableAssemblyCrossHighlightDataItem_2659::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableAssemblyCrossHighlightDataItem_2659::unsetBtType()
{
    m_BtTypeIsSet = false;
}
utility::string_t BTTableAssemblyCrossHighlightDataItem_2659::getOccurrencePathId() const
{
    return m_OccurrencePathId;
}

void BTTableAssemblyCrossHighlightDataItem_2659::setOccurrencePathId(const utility::string_t& value)
{
    m_OccurrencePathId = value;
    m_OccurrencePathIdIsSet = true;
}

bool BTTableAssemblyCrossHighlightDataItem_2659::occurrencePathIdIsSet() const
{
    return m_OccurrencePathIdIsSet;
}

void BTTableAssemblyCrossHighlightDataItem_2659::unsetOccurrencePathId()
{
    m_OccurrencePathIdIsSet = false;
}
}
}
}
}

