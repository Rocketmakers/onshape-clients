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



#include "BTCurveGeometryConic_2284.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCurveGeometryConic_2284::BTCurveGeometryConic_2284()
{
    m_PointsIsSet = false;
    m_Rho = 0.0;
    m_RhoIsSet = false;
}

BTCurveGeometryConic_2284::~BTCurveGeometryConic_2284()
{
}

void BTCurveGeometryConic_2284::validate()
{
    // TODO: implement validation
}

web::json::value BTCurveGeometryConic_2284::toJson() const
{
    web::json::value val = this->BTCurveGeometry_114::toJson();
    
    if(m_PointsIsSet)
    {
        val[utility::conversions::to_string_t("points")] = ModelBase::toJson(m_Points);
    }
    if(m_RhoIsSet)
    {
        val[utility::conversions::to_string_t("rho")] = ModelBase::toJson(m_Rho);
    }

    return val;
}

bool BTCurveGeometryConic_2284::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTCurveGeometry_114::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("points")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("points"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_points;
            ok &= ModelBase::fromJson(fieldValue, refVal_points);
            setPoints(refVal_points);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rho")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rho"));
        if(!fieldValue.is_null())
        {
            double refVal_rho;
            ok &= ModelBase::fromJson(fieldValue, refVal_rho);
            setRho(refVal_rho);
        }
    }
    return ok;
}

void BTCurveGeometryConic_2284::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_PointsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("points"), m_Points));
    }
    if(m_RhoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rho"), m_Rho));
    }
}

bool BTCurveGeometryConic_2284::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("points")))
    {
        std::vector<double> refVal_points;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("points")), refVal_points );
        setPoints(refVal_points);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rho")))
    {
        double refVal_rho;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rho")), refVal_rho );
        setRho(refVal_rho);
    }
    return ok;
}

std::vector<double>& BTCurveGeometryConic_2284::getPoints()
{
    return m_Points;
}

void BTCurveGeometryConic_2284::setPoints(std::vector<double> value)
{
    m_Points = value;
    m_PointsIsSet = true;
}

bool BTCurveGeometryConic_2284::pointsIsSet() const
{
    return m_PointsIsSet;
}

void BTCurveGeometryConic_2284::unsetPoints()
{
    m_PointsIsSet = false;
}
double BTCurveGeometryConic_2284::getRho() const
{
    return m_Rho;
}

void BTCurveGeometryConic_2284::setRho(double value)
{
    m_Rho = value;
    m_RhoIsSet = true;
}

bool BTCurveGeometryConic_2284::rhoIsSet() const
{
    return m_RhoIsSet;
}

void BTCurveGeometryConic_2284::unsetRho()
{
    m_RhoIsSet = false;
}
}
}
}
}

