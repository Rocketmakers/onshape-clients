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
 * BTExternalReference_1936.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTExternalReference_1936_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTExternalReference_1936_H_


#include "BTMicroversionIdAndConfiguration_2338.h"
#include "BTDocumentWithVersionId.h"
#include "BTElementReference_725.h"
#include "BTFullElementId_756.h"
#include <cpprest/details/basic_types.h>
#include "BTDocumentWithVersionAndElementId.h"
#include "BTExternalReference_1936_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTExternalReference_1936
    : public BTElementReference_725
{
public:
    BTExternalReference_1936();
    virtual ~BTExternalReference_1936();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTExternalReference_1936 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentVersionId() const;
    bool documentVersionIdIsSet() const;
    void unsetDocumentVersionId();

    void setDocumentVersionId(const utility::string_t& value);


protected:
    utility::string_t m_DocumentVersionId;
    bool m_DocumentVersionIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTExternalReference_1936_H_ */