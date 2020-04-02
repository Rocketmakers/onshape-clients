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



#include "BTTableAssemblyCrossHighlightData_2675.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableAssemblyCrossHighlightData_2675::BTTableAssemblyCrossHighlightData_2675()
{
    m_AssemblyCrossHighlightItemsIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTTableAssemblyCrossHighlightData_2675::~BTTableAssemblyCrossHighlightData_2675()
{
}

void BTTableAssemblyCrossHighlightData_2675::validate()
{
    // TODO: implement validation
}

web::json::value BTTableAssemblyCrossHighlightData_2675::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AssemblyCrossHighlightItemsIsSet)
    {
        val[utility::conversions::to_string_t("assemblyCrossHighlightItems")] = ModelBase::toJson(m_AssemblyCrossHighlightItems);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTTableAssemblyCrossHighlightData_2675::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assemblyCrossHighlightItems")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assemblyCrossHighlightItems"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTTableAssemblyCrossHighlightDataItem_2659>> refVal_assemblyCrossHighlightItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_assemblyCrossHighlightItems);
            setAssemblyCrossHighlightItems(refVal_assemblyCrossHighlightItems);
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

void BTTableAssemblyCrossHighlightData_2675::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AssemblyCrossHighlightItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("assemblyCrossHighlightItems"), m_AssemblyCrossHighlightItems));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTTableAssemblyCrossHighlightData_2675::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("assemblyCrossHighlightItems")))
    {
        std::vector<std::shared_ptr<BTTableAssemblyCrossHighlightDataItem_2659>> refVal_assemblyCrossHighlightItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("assemblyCrossHighlightItems")), refVal_assemblyCrossHighlightItems );
        setAssemblyCrossHighlightItems(refVal_assemblyCrossHighlightItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::vector<std::shared_ptr<BTTableAssemblyCrossHighlightDataItem_2659>>& BTTableAssemblyCrossHighlightData_2675::getAssemblyCrossHighlightItems()
{
    return m_AssemblyCrossHighlightItems;
}

void BTTableAssemblyCrossHighlightData_2675::setAssemblyCrossHighlightItems(const std::vector<std::shared_ptr<BTTableAssemblyCrossHighlightDataItem_2659>>& value)
{
    m_AssemblyCrossHighlightItems = value;
    m_AssemblyCrossHighlightItemsIsSet = true;
}

bool BTTableAssemblyCrossHighlightData_2675::assemblyCrossHighlightItemsIsSet() const
{
    return m_AssemblyCrossHighlightItemsIsSet;
}

void BTTableAssemblyCrossHighlightData_2675::unsetAssemblyCrossHighlightItems()
{
    m_AssemblyCrossHighlightItemsIsSet = false;
}
utility::string_t BTTableAssemblyCrossHighlightData_2675::getBtType() const
{
    return m_BtType;
}

void BTTableAssemblyCrossHighlightData_2675::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableAssemblyCrossHighlightData_2675::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableAssemblyCrossHighlightData_2675::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

