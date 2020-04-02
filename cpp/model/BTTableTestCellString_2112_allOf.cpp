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



#include "BTTableTestCellString_2112_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableTestCellString_2112_allOf::BTTableTestCellString_2112_allOf()
{
    m_CellValue = utility::conversions::to_string_t("");
    m_CellValueIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTTableTestCellString_2112_allOf::~BTTableTestCellString_2112_allOf()
{
}

void BTTableTestCellString_2112_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTTableTestCellString_2112_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CellValueIsSet)
    {
        val[utility::conversions::to_string_t("cellValue")] = ModelBase::toJson(m_CellValue);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTTableTestCellString_2112_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cellValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cellValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cellValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_cellValue);
            setCellValue(refVal_cellValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTTableTestCellString_2112_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CellValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cellValue"), m_CellValue));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTTableTestCellString_2112_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cellValue")))
    {
        utility::string_t refVal_cellValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cellValue")), refVal_cellValue );
        setCellValue(refVal_cellValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTTableTestCellString_2112_allOf::getCellValue() const
{
    return m_CellValue;
}

void BTTableTestCellString_2112_allOf::setCellValue(const utility::string_t& value)
{
    m_CellValue = value;
    m_CellValueIsSet = true;
}

bool BTTableTestCellString_2112_allOf::cellValueIsSet() const
{
    return m_CellValueIsSet;
}

void BTTableTestCellString_2112_allOf::unsetCellValue()
{
    m_CellValueIsSet = false;
}
utility::string_t BTTableTestCellString_2112_allOf::getBtType() const
{
    return m_BtType;
}

void BTTableTestCellString_2112_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableTestCellString_2112_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableTestCellString_2112_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

