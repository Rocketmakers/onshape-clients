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



#include "BTParameterLookupTableEntry_1667.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTParameterLookupTableEntry_1667::BTParameterLookupTableEntry_1667()
{
    m_AdditionalLocalizedStrings = 0;
    m_AdditionalLocalizedStringsIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_Label = utility::conversions::to_string_t("");
    m_LabelIsSet = false;
    m_LocalizableName = utility::conversions::to_string_t("");
    m_LocalizableNameIsSet = false;
    m_LocalizedLabel = utility::conversions::to_string_t("");
    m_LocalizedLabelIsSet = false;
    m_LocalizedName = utility::conversions::to_string_t("");
    m_LocalizedNameIsSet = false;
    m_StringsToLocalizeIsSet = false;
}

BTParameterLookupTableEntry_1667::~BTParameterLookupTableEntry_1667()
{
}

void BTParameterLookupTableEntry_1667::validate()
{
    // TODO: implement validation
}

web::json::value BTParameterLookupTableEntry_1667::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AdditionalLocalizedStringsIsSet)
    {
        val[utility::conversions::to_string_t("additionalLocalizedStrings")] = ModelBase::toJson(m_AdditionalLocalizedStrings);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_LabelIsSet)
    {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(m_Label);
    }
    if(m_LocalizableNameIsSet)
    {
        val[utility::conversions::to_string_t("localizableName")] = ModelBase::toJson(m_LocalizableName);
    }
    if(m_LocalizedLabelIsSet)
    {
        val[utility::conversions::to_string_t("localizedLabel")] = ModelBase::toJson(m_LocalizedLabel);
    }
    if(m_LocalizedNameIsSet)
    {
        val[utility::conversions::to_string_t("localizedName")] = ModelBase::toJson(m_LocalizedName);
    }
    if(m_StringsToLocalizeIsSet)
    {
        val[utility::conversions::to_string_t("stringsToLocalize")] = ModelBase::toJson(m_StringsToLocalize);
    }

    return val;
}

bool BTParameterLookupTableEntry_1667::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("additionalLocalizedStrings")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalLocalizedStrings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_additionalLocalizedStrings;
            ok &= ModelBase::fromJson(fieldValue, refVal_additionalLocalizedStrings);
            setAdditionalLocalizedStrings(refVal_additionalLocalizedStrings);
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
    if(val.has_field(utility::conversions::to_string_t("label")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_label;
            ok &= ModelBase::fromJson(fieldValue, refVal_label);
            setLabel(refVal_label);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localizableName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localizableName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_localizableName;
            ok &= ModelBase::fromJson(fieldValue, refVal_localizableName);
            setLocalizableName(refVal_localizableName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localizedLabel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localizedLabel"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_localizedLabel;
            ok &= ModelBase::fromJson(fieldValue, refVal_localizedLabel);
            setLocalizedLabel(refVal_localizedLabel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localizedName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localizedName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_localizedName;
            ok &= ModelBase::fromJson(fieldValue, refVal_localizedName);
            setLocalizedName(refVal_localizedName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stringsToLocalize")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stringsToLocalize"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_stringsToLocalize;
            ok &= ModelBase::fromJson(fieldValue, refVal_stringsToLocalize);
            setStringsToLocalize(refVal_stringsToLocalize);
        }
    }
    return ok;
}

void BTParameterLookupTableEntry_1667::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AdditionalLocalizedStringsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("additionalLocalizedStrings"), m_AdditionalLocalizedStrings));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_LabelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("label"), m_Label));
    }
    if(m_LocalizableNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localizableName"), m_LocalizableName));
    }
    if(m_LocalizedLabelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localizedLabel"), m_LocalizedLabel));
    }
    if(m_LocalizedNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("localizedName"), m_LocalizedName));
    }
    if(m_StringsToLocalizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stringsToLocalize"), m_StringsToLocalize));
    }
}

bool BTParameterLookupTableEntry_1667::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("additionalLocalizedStrings")))
    {
        int32_t refVal_additionalLocalizedStrings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("additionalLocalizedStrings")), refVal_additionalLocalizedStrings );
        setAdditionalLocalizedStrings(refVal_additionalLocalizedStrings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("label")))
    {
        utility::string_t refVal_label;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("label")), refVal_label );
        setLabel(refVal_label);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localizableName")))
    {
        utility::string_t refVal_localizableName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("localizableName")), refVal_localizableName );
        setLocalizableName(refVal_localizableName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localizedLabel")))
    {
        utility::string_t refVal_localizedLabel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("localizedLabel")), refVal_localizedLabel );
        setLocalizedLabel(refVal_localizedLabel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("localizedName")))
    {
        utility::string_t refVal_localizedName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("localizedName")), refVal_localizedName );
        setLocalizedName(refVal_localizedName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stringsToLocalize")))
    {
        std::vector<utility::string_t> refVal_stringsToLocalize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("stringsToLocalize")), refVal_stringsToLocalize );
        setStringsToLocalize(refVal_stringsToLocalize);
    }
    return ok;
}

int32_t BTParameterLookupTableEntry_1667::getAdditionalLocalizedStrings() const
{
    return m_AdditionalLocalizedStrings;
}

void BTParameterLookupTableEntry_1667::setAdditionalLocalizedStrings(int32_t value)
{
    m_AdditionalLocalizedStrings = value;
    m_AdditionalLocalizedStringsIsSet = true;
}

bool BTParameterLookupTableEntry_1667::additionalLocalizedStringsIsSet() const
{
    return m_AdditionalLocalizedStringsIsSet;
}

void BTParameterLookupTableEntry_1667::unsetAdditionalLocalizedStrings()
{
    m_AdditionalLocalizedStringsIsSet = false;
}
utility::string_t BTParameterLookupTableEntry_1667::getBtType() const
{
    return m_BtType;
}

void BTParameterLookupTableEntry_1667::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTParameterLookupTableEntry_1667::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTParameterLookupTableEntry_1667::unsetBtType()
{
    m_BtTypeIsSet = false;
}
utility::string_t BTParameterLookupTableEntry_1667::getLabel() const
{
    return m_Label;
}

void BTParameterLookupTableEntry_1667::setLabel(const utility::string_t& value)
{
    m_Label = value;
    m_LabelIsSet = true;
}

bool BTParameterLookupTableEntry_1667::labelIsSet() const
{
    return m_LabelIsSet;
}

void BTParameterLookupTableEntry_1667::unsetLabel()
{
    m_LabelIsSet = false;
}
utility::string_t BTParameterLookupTableEntry_1667::getLocalizableName() const
{
    return m_LocalizableName;
}

void BTParameterLookupTableEntry_1667::setLocalizableName(const utility::string_t& value)
{
    m_LocalizableName = value;
    m_LocalizableNameIsSet = true;
}

bool BTParameterLookupTableEntry_1667::localizableNameIsSet() const
{
    return m_LocalizableNameIsSet;
}

void BTParameterLookupTableEntry_1667::unsetLocalizableName()
{
    m_LocalizableNameIsSet = false;
}
utility::string_t BTParameterLookupTableEntry_1667::getLocalizedLabel() const
{
    return m_LocalizedLabel;
}

void BTParameterLookupTableEntry_1667::setLocalizedLabel(const utility::string_t& value)
{
    m_LocalizedLabel = value;
    m_LocalizedLabelIsSet = true;
}

bool BTParameterLookupTableEntry_1667::localizedLabelIsSet() const
{
    return m_LocalizedLabelIsSet;
}

void BTParameterLookupTableEntry_1667::unsetLocalizedLabel()
{
    m_LocalizedLabelIsSet = false;
}
utility::string_t BTParameterLookupTableEntry_1667::getLocalizedName() const
{
    return m_LocalizedName;
}

void BTParameterLookupTableEntry_1667::setLocalizedName(const utility::string_t& value)
{
    m_LocalizedName = value;
    m_LocalizedNameIsSet = true;
}

bool BTParameterLookupTableEntry_1667::localizedNameIsSet() const
{
    return m_LocalizedNameIsSet;
}

void BTParameterLookupTableEntry_1667::unsetLocalizedName()
{
    m_LocalizedNameIsSet = false;
}
std::vector<utility::string_t>& BTParameterLookupTableEntry_1667::getStringsToLocalize()
{
    return m_StringsToLocalize;
}

void BTParameterLookupTableEntry_1667::setStringsToLocalize(const std::vector<utility::string_t>& value)
{
    m_StringsToLocalize = value;
    m_StringsToLocalizeIsSet = true;
}

bool BTParameterLookupTableEntry_1667::stringsToLocalizeIsSet() const
{
    return m_StringsToLocalizeIsSet;
}

void BTParameterLookupTableEntry_1667::unsetStringsToLocalize()
{
    m_StringsToLocalizeIsSet = false;
}
}
}
}
}

