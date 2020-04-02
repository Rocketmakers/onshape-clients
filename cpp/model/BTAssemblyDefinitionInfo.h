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
 * BTAssemblyDefinitionInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyDefinitionInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyDefinitionInfo_H_


#include "../ModelBase.h"

#include "BTAssemblyPartsInfo.h"
#include "BTSubAssemblyInfo.h"
#include "BTRootAssemblyInfo.h"
#include <vector>
#include "BTAssemblyPSFeatureInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAssemblyDefinitionInfo
    : public ModelBase
{
public:
    BTAssemblyDefinitionInfo();
    virtual ~BTAssemblyDefinitionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAssemblyDefinitionInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTAssemblyPSFeatureInfo>>& getPartStudioFeatures();
    bool partStudioFeaturesIsSet() const;
    void unsetPartStudioFeatures();

    void setPartStudioFeatures(const std::vector<std::shared_ptr<BTAssemblyPSFeatureInfo>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTAssemblyPartsInfo>>& getParts();
    bool partsIsSet() const;
    void unsetParts();

    void setParts(const std::vector<std::shared_ptr<BTAssemblyPartsInfo>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTRootAssemblyInfo> getRootAssembly() const;
    bool rootAssemblyIsSet() const;
    void unsetRootAssembly();

    void setRootAssembly(const std::shared_ptr<BTRootAssemblyInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTSubAssemblyInfo>>& getSubAssemblies();
    bool subAssembliesIsSet() const;
    void unsetSubAssemblies();

    void setSubAssemblies(const std::vector<std::shared_ptr<BTSubAssemblyInfo>>& value);


protected:
    std::vector<std::shared_ptr<BTAssemblyPSFeatureInfo>> m_PartStudioFeatures;
    bool m_PartStudioFeaturesIsSet;
    std::vector<std::shared_ptr<BTAssemblyPartsInfo>> m_Parts;
    bool m_PartsIsSet;
    std::shared_ptr<BTRootAssemblyInfo> m_RootAssembly;
    bool m_RootAssemblyIsSet;
    std::vector<std::shared_ptr<BTSubAssemblyInfo>> m_SubAssemblies;
    bool m_SubAssembliesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyDefinitionInfo_H_ */