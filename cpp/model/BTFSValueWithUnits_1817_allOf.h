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
 * BTFSValueWithUnits_1817_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueWithUnits_1817_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueWithUnits_1817_allOf_H_


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
class  BTFSValueWithUnits_1817_allOf
    : public ModelBase
{
public:
    BTFSValueWithUnits_1817_allOf();
    virtual ~BTFSValueWithUnits_1817_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTFSValueWithUnits_1817_allOf members

    /// <summary>
    /// 
    /// </summary>
    double getValueObject() const;
    bool valueObjectIsSet() const;
    void unsetValueObject();

    void setValueObject(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQuantityType() const;
    bool quantityTypeIsSet() const;
    void unsetQuantityType();

    void setQuantityType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, int32_t>& getUnitToPower();
    bool unitToPowerIsSet() const;
    void unsetUnitToPower();

    void setUnitToPower(std::map<utility::string_t, int32_t> value);

    /// <summary>
    /// 
    /// </summary>
    double getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    double m_ValueObject;
    bool m_ValueObjectIsSet;
    utility::string_t m_QuantityType;
    bool m_QuantityTypeIsSet;
    std::map<utility::string_t, int32_t> m_UnitToPower;
    bool m_UnitToPowerIsSet;
    double m_Value;
    bool m_ValueIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueWithUnits_1817_allOf_H_ */