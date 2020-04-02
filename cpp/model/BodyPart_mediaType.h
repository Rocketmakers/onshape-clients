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
 * BodyPart_mediaType.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BodyPart_mediaType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BodyPart_mediaType_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BodyPart_mediaType
    : public ModelBase
{
public:
    BodyPart_mediaType();
    virtual ~BodyPart_mediaType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BodyPart_mediaType members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubtype() const;
    bool subtypeIsSet() const;
    void unsetSubtype();

    void setSubtype(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getParameters();
    bool parametersIsSet() const;
    void unsetParameters();

    void setParameters(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isWildcardType() const;
    bool wildcardTypeIsSet() const;
    void unsetWildcardType();

    void setWildcardType(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isWildcardSubtype() const;
    bool wildcardSubtypeIsSet() const;
    void unsetWildcardSubtype();

    void setWildcardSubtype(bool value);


protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Subtype;
    bool m_SubtypeIsSet;
    std::map<utility::string_t, utility::string_t> m_Parameters;
    bool m_ParametersIsSet;
    bool m_WildcardType;
    bool m_WildcardTypeIsSet;
    bool m_WildcardSubtype;
    bool m_WildcardSubtypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BodyPart_mediaType_H_ */