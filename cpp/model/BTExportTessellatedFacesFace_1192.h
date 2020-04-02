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
 * BTExportTessellatedFacesFace_1192.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportTessellatedFacesFace_1192_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportTessellatedFacesFace_1192_H_


#include "../ModelBase.h"

#include "BTExportTessellatedFacesFacet_1417.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "BTGraphicsAppearance_1152.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTExportTessellatedFacesFace_1192
    : public ModelBase
{
public:
    BTExportTessellatedFacesFace_1192();
    virtual ~BTExportTessellatedFacesFace_1192();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTExportTessellatedFacesFace_1192 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTGraphicsAppearance_1152> getAppearance() const;
    bool appearanceIsSet() const;
    void unsetAppearance();

    void setAppearance(const std::shared_ptr<BTGraphicsAppearance_1152>& value);

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
    utility::string_t getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unsetErrorMessage();

    void setErrorMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTExportTessellatedFacesFacet_1417>>& getFacets();
    bool facetsIsSet() const;
    void unsetFacets();

    void setFacets(const std::vector<std::shared_ptr<BTExportTessellatedFacesFacet_1417>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    std::shared_ptr<BTGraphicsAppearance_1152> m_Appearance;
    bool m_AppearanceIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    utility::string_t m_ErrorMessage;
    bool m_ErrorMessageIsSet;
    std::vector<std::shared_ptr<BTExportTessellatedFacesFacet_1417>> m_Facets;
    bool m_FacetsIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportTessellatedFacesFace_1192_H_ */