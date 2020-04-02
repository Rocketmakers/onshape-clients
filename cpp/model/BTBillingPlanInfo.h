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
 * BTBillingPlanInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillingPlanInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillingPlanInfo_H_


#include "../ModelBase.h"

#include "BTDiscountInfo.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTBillingPlanInfo
    : public ModelBase
{
public:
    BTBillingPlanInfo();
    virtual ~BTBillingPlanInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTBillingPlanInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getAmountCents() const;
    bool amountCentsIsSet() const;
    void unsetAmountCents();

    void setAmountCents(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetApplicationId();

    void setApplicationId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClientId() const;
    bool clientIdIsSet() const;
    void unsetClientId();

    void setClientId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isCompanyPlan() const;
    bool companyPlanIsSet() const;
    void unsetCompanyPlan();

    void setCompanyPlan(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getConsumableQuantity() const;
    bool consumableQuantityIsSet() const;
    void unsetConsumableQuantity();

    void setConsumableQuantity(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isDeprecated() const;
    bool deprecatedIsSet() const;
    void unsetDeprecated();

    void setDeprecated(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTDiscountInfo> getDiscountInfo() const;
    bool discountInfoIsSet() const;
    void unsetDiscountInfo();

    void setDiscountInfo(const std::shared_ptr<BTDiscountInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isHidden() const;
    bool hiddenIsSet() const;
    void unsetHidden();

    void setHidden(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHref() const;
    bool hrefIsSet() const;
    void unsetHref();

    void setHref(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInterval() const;
    bool intervalIsSet() const;
    void unsetInterval();

    void setInterval(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isOnshapePlan() const;
    bool onshapePlanIsSet() const;
    void unsetOnshapePlan();

    void setOnshapePlan(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPlanType() const;
    bool planTypeIsSet() const;
    void unsetPlanType();

    void setPlanType(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTrialPeriodDays() const;
    bool trialPeriodDaysIsSet() const;
    void unsetTrialPeriodDays();

    void setTrialPeriodDays(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViewRef() const;
    bool viewRefIsSet() const;
    void unsetViewRef();

    void setViewRef(const utility::string_t& value);


protected:
    int32_t m_AmountCents;
    bool m_AmountCentsIsSet;
    utility::string_t m_ApplicationId;
    bool m_ApplicationIdIsSet;
    utility::string_t m_ClientId;
    bool m_ClientIdIsSet;
    bool m_CompanyPlan;
    bool m_CompanyPlanIsSet;
    int32_t m_ConsumableQuantity;
    bool m_ConsumableQuantityIsSet;
    bool m_Deprecated;
    bool m_DeprecatedIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::shared_ptr<BTDiscountInfo> m_DiscountInfo;
    bool m_DiscountInfoIsSet;
    utility::string_t m_Group;
    bool m_GroupIsSet;
    bool m_Hidden;
    bool m_HiddenIsSet;
    utility::string_t m_Href;
    bool m_HrefIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Interval;
    bool m_IntervalIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    bool m_OnshapePlan;
    bool m_OnshapePlanIsSet;
    int32_t m_PlanType;
    bool m_PlanTypeIsSet;
    int32_t m_TrialPeriodDays;
    bool m_TrialPeriodDaysIsSet;
    utility::string_t m_ViewRef;
    bool m_ViewRefIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillingPlanInfo_H_ */