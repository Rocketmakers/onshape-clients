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
 * BTMParameterForeignId_146_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterForeignId_146_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterForeignId_146_allOf_H_


#include "../ModelBase.h"

#include "BTForeignDataResponse_1070.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterForeignId_146_allOf
    : public ModelBase
{
public:
    BTMParameterForeignId_146_allOf();
    virtual ~BTMParameterForeignId_146_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterForeignId_146_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getForeignId() const;
    bool foreignIdIsSet() const;
    void unsetForeignId();

    void setForeignId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTForeignDataResponse_1070> getLocationInfo() const;
    bool locationInfoIsSet() const;
    void unsetLocationInfo();

    void setLocationInfo(const std::shared_ptr<BTForeignDataResponse_1070>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getForeignName() const;
    bool foreignNameIsSet() const;
    void unsetForeignName();

    void setForeignName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_ForeignId;
    bool m_ForeignIdIsSet;
    std::shared_ptr<BTForeignDataResponse_1070> m_LocationInfo;
    bool m_LocationInfoIsSet;
    utility::string_t m_ForeignName;
    bool m_ForeignNameIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterForeignId_146_allOf_H_ */