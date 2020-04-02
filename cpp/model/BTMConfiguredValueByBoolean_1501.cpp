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



#include "BTMConfiguredValueByBoolean_1501.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMConfiguredValueByBoolean_1501::BTMConfiguredValueByBoolean_1501()
{
    m_BooleanValue = false;
    m_BooleanValueIsSet = false;
}

BTMConfiguredValueByBoolean_1501::~BTMConfiguredValueByBoolean_1501()
{
}

void BTMConfiguredValueByBoolean_1501::validate()
{
    // TODO: implement validation
}

web::json::value BTMConfiguredValueByBoolean_1501::toJson() const
{
    web::json::value val = this->BTMConfiguredValue_1341::toJson();
    
    if(m_BooleanValueIsSet)
    {
        val[utility::conversions::to_string_t("booleanValue")] = ModelBase::toJson(m_BooleanValue);
    }

    return val;
}

bool BTMConfiguredValueByBoolean_1501::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMConfiguredValue_1341::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("booleanValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("booleanValue"));
        if(!fieldValue.is_null())
        {
            bool refVal_booleanValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_booleanValue);
            setBooleanValue(refVal_booleanValue);
        }
    }
    return ok;
}

void BTMConfiguredValueByBoolean_1501::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ConfigurationValueStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationValueString"), m_ConfigurationValueString));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_BooleanValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("booleanValue"), m_BooleanValue));
    }
}

bool BTMConfiguredValueByBoolean_1501::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("configurationValueString")))
    {
        utility::string_t refVal_configurationValueString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationValueString")), refVal_configurationValueString );
        setConfigurationValueString(refVal_configurationValueString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        std::shared_ptr<BTMParameter_1> refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("booleanValue")))
    {
        bool refVal_booleanValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("booleanValue")), refVal_booleanValue );
        setBooleanValue(refVal_booleanValue);
    }
    return ok;
}

bool BTMConfiguredValueByBoolean_1501::isBooleanValue() const
{
    return m_BooleanValue;
}

void BTMConfiguredValueByBoolean_1501::setBooleanValue(bool value)
{
    m_BooleanValue = value;
    m_BooleanValueIsSet = true;
}

bool BTMConfiguredValueByBoolean_1501::booleanValueIsSet() const
{
    return m_BooleanValueIsSet;
}

void BTMConfiguredValueByBoolean_1501::unsetBooleanValue()
{
    m_BooleanValueIsSet = false;
}
}
}
}
}

