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



#include "BTAllowMeshGeometryFilter_1026_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAllowMeshGeometryFilter_1026_allOf::BTAllowMeshGeometryFilter_1026_allOf()
{
    m_AllowsMeshGeometry = false;
    m_AllowsMeshGeometryIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTAllowMeshGeometryFilter_1026_allOf::~BTAllowMeshGeometryFilter_1026_allOf()
{
}

void BTAllowMeshGeometryFilter_1026_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTAllowMeshGeometryFilter_1026_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AllowsMeshGeometryIsSet)
    {
        val[utility::conversions::to_string_t("allowsMeshGeometry")] = ModelBase::toJson(m_AllowsMeshGeometry);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTAllowMeshGeometryFilter_1026_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allowsMeshGeometry")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowsMeshGeometry"));
        if(!fieldValue.is_null())
        {
            bool refVal_allowsMeshGeometry;
            ok &= ModelBase::fromJson(fieldValue, refVal_allowsMeshGeometry);
            setAllowsMeshGeometry(refVal_allowsMeshGeometry);
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

void BTAllowMeshGeometryFilter_1026_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AllowsMeshGeometryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("allowsMeshGeometry"), m_AllowsMeshGeometry));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTAllowMeshGeometryFilter_1026_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("allowsMeshGeometry")))
    {
        bool refVal_allowsMeshGeometry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("allowsMeshGeometry")), refVal_allowsMeshGeometry );
        setAllowsMeshGeometry(refVal_allowsMeshGeometry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTAllowMeshGeometryFilter_1026_allOf::isAllowsMeshGeometry() const
{
    return m_AllowsMeshGeometry;
}

void BTAllowMeshGeometryFilter_1026_allOf::setAllowsMeshGeometry(bool value)
{
    m_AllowsMeshGeometry = value;
    m_AllowsMeshGeometryIsSet = true;
}

bool BTAllowMeshGeometryFilter_1026_allOf::allowsMeshGeometryIsSet() const
{
    return m_AllowsMeshGeometryIsSet;
}

void BTAllowMeshGeometryFilter_1026_allOf::unsetAllowsMeshGeometry()
{
    m_AllowsMeshGeometryIsSet = false;
}
utility::string_t BTAllowMeshGeometryFilter_1026_allOf::getBtType() const
{
    return m_BtType;
}

void BTAllowMeshGeometryFilter_1026_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTAllowMeshGeometryFilter_1026_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTAllowMeshGeometryFilter_1026_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

