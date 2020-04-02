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



#include "BTAssemblyTransformedInstancesDefinitionParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAssemblyTransformedInstancesDefinitionParams::BTAssemblyTransformedInstancesDefinitionParams()
{
    m_TransformGroupsIsSet = false;
}

BTAssemblyTransformedInstancesDefinitionParams::~BTAssemblyTransformedInstancesDefinitionParams()
{
}

void BTAssemblyTransformedInstancesDefinitionParams::validate()
{
    // TODO: implement validation
}

web::json::value BTAssemblyTransformedInstancesDefinitionParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TransformGroupsIsSet)
    {
        val[utility::conversions::to_string_t("transformGroups")] = ModelBase::toJson(m_TransformGroups);
    }

    return val;
}

bool BTAssemblyTransformedInstancesDefinitionParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transformGroups")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transformGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<TransformGroup>> refVal_transformGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_transformGroups);
            setTransformGroups(refVal_transformGroups);
        }
    }
    return ok;
}

void BTAssemblyTransformedInstancesDefinitionParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TransformGroupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transformGroups"), m_TransformGroups));
    }
}

bool BTAssemblyTransformedInstancesDefinitionParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("transformGroups")))
    {
        std::vector<std::shared_ptr<TransformGroup>> refVal_transformGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("transformGroups")), refVal_transformGroups );
        setTransformGroups(refVal_transformGroups);
    }
    return ok;
}

std::vector<std::shared_ptr<TransformGroup>>& BTAssemblyTransformedInstancesDefinitionParams::getTransformGroups()
{
    return m_TransformGroups;
}

void BTAssemblyTransformedInstancesDefinitionParams::setTransformGroups(const std::vector<std::shared_ptr<TransformGroup>>& value)
{
    m_TransformGroups = value;
    m_TransformGroupsIsSet = true;
}

bool BTAssemblyTransformedInstancesDefinitionParams::transformGroupsIsSet() const
{
    return m_TransformGroupsIsSet;
}

void BTAssemblyTransformedInstancesDefinitionParams::unsetTransformGroups()
{
    m_TransformGroupsIsSet = false;
}
}
}
}
}

