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



#include "BTAssemblyFeatureListResponse_1174_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAssemblyFeatureListResponse_1174_allOf::BTAssemblyFeatureListResponse_1174_allOf()
{
    m_FeaturesIsSet = false;
    m_IsComplete = false;
    m_IsCompleteIsSet = false;
    m_FeatureStatesIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTAssemblyFeatureListResponse_1174_allOf::~BTAssemblyFeatureListResponse_1174_allOf()
{
}

void BTAssemblyFeatureListResponse_1174_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTAssemblyFeatureListResponse_1174_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FeaturesIsSet)
    {
        val[utility::conversions::to_string_t("features")] = ModelBase::toJson(m_Features);
    }
    if(m_IsCompleteIsSet)
    {
        val[utility::conversions::to_string_t("isComplete")] = ModelBase::toJson(m_IsComplete);
    }
    if(m_FeatureStatesIsSet)
    {
        val[utility::conversions::to_string_t("featureStates")] = ModelBase::toJson(m_FeatureStates);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTAssemblyFeatureListResponse_1174_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("features")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("features"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMAssemblyFeature_887>> refVal_features;
            ok &= ModelBase::fromJson(fieldValue, refVal_features);
            setFeatures(refVal_features);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isComplete")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal_isComplete;
            ok &= ModelBase::fromJson(fieldValue, refVal_isComplete);
            setIsComplete(refVal_isComplete);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("featureStates")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureStates"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>> refVal_featureStates;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureStates);
            setFeatureStates(refVal_featureStates);
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

void BTAssemblyFeatureListResponse_1174_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FeaturesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("features"), m_Features));
    }
    if(m_IsCompleteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isComplete"), m_IsComplete));
    }
    if(m_FeatureStatesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureStates"), m_FeatureStates));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTAssemblyFeatureListResponse_1174_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("features")))
    {
        std::vector<std::shared_ptr<BTMAssemblyFeature_887>> refVal_features;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("features")), refVal_features );
        setFeatures(refVal_features);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isComplete")))
    {
        bool refVal_isComplete;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isComplete")), refVal_isComplete );
        setIsComplete(refVal_isComplete);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureStates")))
    {
        std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>> refVal_featureStates;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureStates")), refVal_featureStates );
        setFeatureStates(refVal_featureStates);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::vector<std::shared_ptr<BTMAssemblyFeature_887>>& BTAssemblyFeatureListResponse_1174_allOf::getFeatures()
{
    return m_Features;
}

void BTAssemblyFeatureListResponse_1174_allOf::setFeatures(const std::vector<std::shared_ptr<BTMAssemblyFeature_887>>& value)
{
    m_Features = value;
    m_FeaturesIsSet = true;
}

bool BTAssemblyFeatureListResponse_1174_allOf::featuresIsSet() const
{
    return m_FeaturesIsSet;
}

void BTAssemblyFeatureListResponse_1174_allOf::unsetFeatures()
{
    m_FeaturesIsSet = false;
}
bool BTAssemblyFeatureListResponse_1174_allOf::isIsComplete() const
{
    return m_IsComplete;
}

void BTAssemblyFeatureListResponse_1174_allOf::setIsComplete(bool value)
{
    m_IsComplete = value;
    m_IsCompleteIsSet = true;
}

bool BTAssemblyFeatureListResponse_1174_allOf::isCompleteIsSet() const
{
    return m_IsCompleteIsSet;
}

void BTAssemblyFeatureListResponse_1174_allOf::unsetIsComplete()
{
    m_IsCompleteIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& BTAssemblyFeatureListResponse_1174_allOf::getFeatureStates()
{
    return m_FeatureStates;
}

void BTAssemblyFeatureListResponse_1174_allOf::setFeatureStates(const std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& value)
{
    m_FeatureStates = value;
    m_FeatureStatesIsSet = true;
}

bool BTAssemblyFeatureListResponse_1174_allOf::featureStatesIsSet() const
{
    return m_FeatureStatesIsSet;
}

void BTAssemblyFeatureListResponse_1174_allOf::unsetFeatureStates()
{
    m_FeatureStatesIsSet = false;
}
utility::string_t BTAssemblyFeatureListResponse_1174_allOf::getBtType() const
{
    return m_BtType;
}

void BTAssemblyFeatureListResponse_1174_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTAssemblyFeatureListResponse_1174_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTAssemblyFeatureListResponse_1174_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

