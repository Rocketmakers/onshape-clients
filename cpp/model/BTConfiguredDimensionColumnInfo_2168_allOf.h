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
 * BTConfiguredDimensionColumnInfo_2168_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredDimensionColumnInfo_2168_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredDimensionColumnInfo_2168_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTConfiguredDimensionColumnInfo_2168_allOf
    : public ModelBase
{
public:
    BTConfiguredDimensionColumnInfo_2168_allOf();
    virtual ~BTConfiguredDimensionColumnInfo_2168_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTConfiguredDimensionColumnInfo_2168_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterId() const;
    bool parameterIdIsSet() const;
    void unsetParameterId();

    void setParameterId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDimensionId() const;
    bool dimensionIdIsSet() const;
    void unsetDimensionId();

    void setDimensionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_ParameterId;
    bool m_ParameterIdIsSet;
    utility::string_t m_DimensionId;
    bool m_DimensionIdIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredDimensionColumnInfo_2168_allOf_H_ */