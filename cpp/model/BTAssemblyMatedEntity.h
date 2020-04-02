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
 * BTAssemblyMatedEntity.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyMatedEntity_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyMatedEntity_H_


#include "../ModelBase.h"

#include "BTMateConnectorCSInfo.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAssemblyMatedEntity
    : public ModelBase
{
public:
    BTAssemblyMatedEntity();
    virtual ~BTAssemblyMatedEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAssemblyMatedEntity members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMateConnectorCSInfo> getMateCS() const;
    bool mateCSIsSet() const;
    void unsetMateCS();

    void setMateCS(const std::shared_ptr<BTMateConnectorCSInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getMatedOccurrence();
    bool matedOccurrenceIsSet() const;
    void unsetMatedOccurrence();

    void setMatedOccurrence(const std::vector<utility::string_t>& value);


protected:
    std::shared_ptr<BTMateConnectorCSInfo> m_MateCS;
    bool m_MateCSIsSet;
    std::vector<utility::string_t> m_MatedOccurrence;
    bool m_MatedOccurrenceIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyMatedEntity_H_ */