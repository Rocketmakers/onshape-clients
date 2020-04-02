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
 * BTOwner_3114.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTOwner_3114_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTOwner_3114_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTOwner_3114
    : public ModelBase
{
public:
    BTOwner_3114();
    virtual ~BTOwner_3114();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTOwner_3114 members

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
    utility::string_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetOwnerId();

    void setOwnerId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwnerType() const;
    bool ownerTypeIsSet() const;
    void unsetOwnerType();

    void setOwnerType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOwnerTypeOrdinal() const;
    bool ownerTypeOrdinalIsSet() const;
    void unsetOwnerTypeOrdinal();

    void setOwnerTypeOrdinal(int32_t value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    utility::string_t m_OwnerId;
    bool m_OwnerIdIsSet;
    utility::string_t m_OwnerType;
    bool m_OwnerTypeIsSet;
    int32_t m_OwnerTypeOrdinal;
    bool m_OwnerTypeOrdinalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTOwner_3114_H_ */