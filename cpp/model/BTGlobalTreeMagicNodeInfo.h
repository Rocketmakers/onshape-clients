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
 * BTGlobalTreeMagicNodeInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTGlobalTreeMagicNodeInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTGlobalTreeMagicNodeInfo_H_


#include "BTGlobalTreeMagicNodeInfo_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTGlobalTreeNodeInfo.h"
#include "BTUserBasicSummaryInfo.h"
#include "BTOwnerInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTGlobalTreeMagicNodeInfo
    : public BTGlobalTreeNodeInfo
{
public:
    BTGlobalTreeMagicNodeInfo();
    virtual ~BTGlobalTreeMagicNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTGlobalTreeMagicNodeInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getSubType() const;
    bool subTypeIsSet() const;
    void unsetSubType();

    void setSubType(int32_t value);


protected:
    int32_t m_SubType;
    bool m_SubTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTGlobalTreeMagicNodeInfo_H_ */