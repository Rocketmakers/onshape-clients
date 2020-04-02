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
 * BTTableCellPropertyParameter_2983.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellPropertyParameter_2983_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellPropertyParameter_2983_H_


#include "BTMParameter_1.h"
#include "BTTableCellParameter_2399.h"
#include "BTTableCellPropertyParameter_2983_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTParameterSpec_6.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTTableCellPropertyParameter_2983
    : public BTTableCellParameter_2399
{
public:
    BTTableCellPropertyParameter_2983();
    virtual ~BTTableCellPropertyParameter_2983();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTTableCellPropertyParameter_2983 members

    /// <summary>
    /// 
    /// </summary>
    bool isIsUnchanged() const;
    bool isUnchangedIsSet() const;
    void unsetIsUnchanged();

    void setIsUnchanged(bool value);


protected:
    bool m_IsUnchanged;
    bool m_IsUnchangedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellPropertyParameter_2983_H_ */