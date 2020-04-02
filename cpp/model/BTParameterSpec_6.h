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

/*
 * BTParameterSpec_6.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpec_6_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpec_6_H_


#include "../ModelBase.h"

#include "BTMParameter_1.h"
#include <cpprest/details/basic_types.h>
#include "BTParameterVisibilityCondition_177.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTParameterSpec_6
    : public ModelBase
{
public:
    BTParameterSpec_6();
    virtual ~BTParameterSpec_6();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTParameterSpec_6 members

    /// <summary>
    /// 
    /// </summary>
    int32_t getAdditionalLocalizedStrings() const;
    bool additionalLocalizedStringsIsSet() const;
    void unsetAdditionalLocalizedStrings();

    void setAdditionalLocalizedStrings(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getColumnName() const;
    bool columnNameIsSet() const;
    void unsetColumnName();

    void setColumnName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMParameter_1> getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetDefaultValue();

    void setDefaultValue(const std::shared_ptr<BTMParameter_1>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIconUri() const;
    bool iconUriIsSet() const;
    void unsetIconUri();

    void setIconUri(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLocalizableName() const;
    bool localizableNameIsSet() const;
    void unsetLocalizableName();

    void setLocalizableName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLocalizedName() const;
    bool localizedNameIsSet() const;
    void unsetLocalizedName();

    void setLocalizedName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterId() const;
    bool parameterIdIsSet() const;
    void unsetParameterId();

    void setParameterId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetParameterName();

    void setParameterName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getStringsToLocalize();
    bool stringsToLocalizeIsSet() const;
    void unsetStringsToLocalize();

    void setStringsToLocalize(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUiHint() const;
    bool uiHintIsSet() const;
    void unsetUiHint();

    void setUiHint(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getUiHints();
    bool uiHintsIsSet() const;
    void unsetUiHints();

    void setUiHints(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTParameterVisibilityCondition_177> getVisibilityCondition() const;
    bool visibilityConditionIsSet() const;
    void unsetVisibilityCondition();

    void setVisibilityCondition(const std::shared_ptr<BTParameterVisibilityCondition_177>& value);


protected:
    int32_t m_AdditionalLocalizedStrings;
    bool m_AdditionalLocalizedStringsIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    utility::string_t m_ColumnName;
    bool m_ColumnNameIsSet;
    std::shared_ptr<BTMParameter_1> m_DefaultValue;
    bool m_DefaultValueIsSet;
    utility::string_t m_IconUri;
    bool m_IconUriIsSet;
    utility::string_t m_LocalizableName;
    bool m_LocalizableNameIsSet;
    utility::string_t m_LocalizedName;
    bool m_LocalizedNameIsSet;
    utility::string_t m_ParameterId;
    bool m_ParameterIdIsSet;
    utility::string_t m_ParameterName;
    bool m_ParameterNameIsSet;
    std::vector<utility::string_t> m_StringsToLocalize;
    bool m_StringsToLocalizeIsSet;
    utility::string_t m_UiHint;
    bool m_UiHintIsSet;
    std::vector<utility::string_t> m_UiHints;
    bool m_UiHintsIsSet;
    std::shared_ptr<BTParameterVisibilityCondition_177> m_VisibilityCondition;
    bool m_VisibilityConditionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpec_6_H_ */