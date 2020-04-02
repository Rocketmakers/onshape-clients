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
 * BTMDatabaseParameter_2229_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMDatabaseParameter_2229_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMDatabaseParameter_2229_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMDatabaseParameter_2229_allOf
    : public ModelBase
{
public:
    BTMDatabaseParameter_2229_allOf();
    virtual ~BTMDatabaseParameter_2229_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMDatabaseParameter_2229_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDatabaseId() const;
    bool databaseIdIsSet() const;
    void unsetDatabaseId();

    void setDatabaseId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_DatabaseId;
    bool m_DatabaseIdIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMDatabaseParameter_2229_allOf_H_ */