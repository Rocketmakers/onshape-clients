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



#include "BTCurveGeometryCircle_115.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCurveGeometryCircle_115::BTCurveGeometryCircle_115()
{
    m_Radius = 0.0;
    m_RadiusIsSet = false;
    m_Xcenter = 0.0;
    m_XcenterIsSet = false;
    m_Ycenter = 0.0;
    m_YcenterIsSet = false;
    m_Xdir = 0.0;
    m_XdirIsSet = false;
    m_Ydir = 0.0;
    m_YdirIsSet = false;
    m_Clockwise = false;
    m_ClockwiseIsSet = false;
}

BTCurveGeometryCircle_115::~BTCurveGeometryCircle_115()
{
}

void BTCurveGeometryCircle_115::validate()
{
    // TODO: implement validation
}

web::json::value BTCurveGeometryCircle_115::toJson() const
{
    web::json::value val = this->BTCurveGeometry_114::toJson();
    
    if(m_RadiusIsSet)
    {
        val[utility::conversions::to_string_t("radius")] = ModelBase::toJson(m_Radius);
    }
    if(m_XcenterIsSet)
    {
        val[utility::conversions::to_string_t("xcenter")] = ModelBase::toJson(m_Xcenter);
    }
    if(m_YcenterIsSet)
    {
        val[utility::conversions::to_string_t("ycenter")] = ModelBase::toJson(m_Ycenter);
    }
    if(m_XdirIsSet)
    {
        val[utility::conversions::to_string_t("xdir")] = ModelBase::toJson(m_Xdir);
    }
    if(m_YdirIsSet)
    {
        val[utility::conversions::to_string_t("ydir")] = ModelBase::toJson(m_Ydir);
    }
    if(m_ClockwiseIsSet)
    {
        val[utility::conversions::to_string_t("clockwise")] = ModelBase::toJson(m_Clockwise);
    }

    return val;
}

bool BTCurveGeometryCircle_115::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTCurveGeometry_114::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("radius")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("radius"));
        if(!fieldValue.is_null())
        {
            double refVal_radius;
            ok &= ModelBase::fromJson(fieldValue, refVal_radius);
            setRadius(refVal_radius);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xcenter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xcenter"));
        if(!fieldValue.is_null())
        {
            double refVal_xcenter;
            ok &= ModelBase::fromJson(fieldValue, refVal_xcenter);
            setXcenter(refVal_xcenter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ycenter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ycenter"));
        if(!fieldValue.is_null())
        {
            double refVal_ycenter;
            ok &= ModelBase::fromJson(fieldValue, refVal_ycenter);
            setYcenter(refVal_ycenter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xdir")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xdir"));
        if(!fieldValue.is_null())
        {
            double refVal_xdir;
            ok &= ModelBase::fromJson(fieldValue, refVal_xdir);
            setXdir(refVal_xdir);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ydir")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ydir"));
        if(!fieldValue.is_null())
        {
            double refVal_ydir;
            ok &= ModelBase::fromJson(fieldValue, refVal_ydir);
            setYdir(refVal_ydir);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clockwise")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clockwise"));
        if(!fieldValue.is_null())
        {
            bool refVal_clockwise;
            ok &= ModelBase::fromJson(fieldValue, refVal_clockwise);
            setClockwise(refVal_clockwise);
        }
    }
    return ok;
}

void BTCurveGeometryCircle_115::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_RadiusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("radius"), m_Radius));
    }
    if(m_XcenterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("xcenter"), m_Xcenter));
    }
    if(m_YcenterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ycenter"), m_Ycenter));
    }
    if(m_XdirIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("xdir"), m_Xdir));
    }
    if(m_YdirIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ydir"), m_Ydir));
    }
    if(m_ClockwiseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("clockwise"), m_Clockwise));
    }
}

bool BTCurveGeometryCircle_115::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("radius")))
    {
        double refVal_radius;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("radius")), refVal_radius );
        setRadius(refVal_radius);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xcenter")))
    {
        double refVal_xcenter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("xcenter")), refVal_xcenter );
        setXcenter(refVal_xcenter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ycenter")))
    {
        double refVal_ycenter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ycenter")), refVal_ycenter );
        setYcenter(refVal_ycenter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("xdir")))
    {
        double refVal_xdir;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("xdir")), refVal_xdir );
        setXdir(refVal_xdir);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ydir")))
    {
        double refVal_ydir;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ydir")), refVal_ydir );
        setYdir(refVal_ydir);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("clockwise")))
    {
        bool refVal_clockwise;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("clockwise")), refVal_clockwise );
        setClockwise(refVal_clockwise);
    }
    return ok;
}

double BTCurveGeometryCircle_115::getRadius() const
{
    return m_Radius;
}

void BTCurveGeometryCircle_115::setRadius(double value)
{
    m_Radius = value;
    m_RadiusIsSet = true;
}

bool BTCurveGeometryCircle_115::radiusIsSet() const
{
    return m_RadiusIsSet;
}

void BTCurveGeometryCircle_115::unsetRadius()
{
    m_RadiusIsSet = false;
}
double BTCurveGeometryCircle_115::getXcenter() const
{
    return m_Xcenter;
}

void BTCurveGeometryCircle_115::setXcenter(double value)
{
    m_Xcenter = value;
    m_XcenterIsSet = true;
}

bool BTCurveGeometryCircle_115::xcenterIsSet() const
{
    return m_XcenterIsSet;
}

void BTCurveGeometryCircle_115::unsetXcenter()
{
    m_XcenterIsSet = false;
}
double BTCurveGeometryCircle_115::getYcenter() const
{
    return m_Ycenter;
}

void BTCurveGeometryCircle_115::setYcenter(double value)
{
    m_Ycenter = value;
    m_YcenterIsSet = true;
}

bool BTCurveGeometryCircle_115::ycenterIsSet() const
{
    return m_YcenterIsSet;
}

void BTCurveGeometryCircle_115::unsetYcenter()
{
    m_YcenterIsSet = false;
}
double BTCurveGeometryCircle_115::getXdir() const
{
    return m_Xdir;
}

void BTCurveGeometryCircle_115::setXdir(double value)
{
    m_Xdir = value;
    m_XdirIsSet = true;
}

bool BTCurveGeometryCircle_115::xdirIsSet() const
{
    return m_XdirIsSet;
}

void BTCurveGeometryCircle_115::unsetXdir()
{
    m_XdirIsSet = false;
}
double BTCurveGeometryCircle_115::getYdir() const
{
    return m_Ydir;
}

void BTCurveGeometryCircle_115::setYdir(double value)
{
    m_Ydir = value;
    m_YdirIsSet = true;
}

bool BTCurveGeometryCircle_115::ydirIsSet() const
{
    return m_YdirIsSet;
}

void BTCurveGeometryCircle_115::unsetYdir()
{
    m_YdirIsSet = false;
}
bool BTCurveGeometryCircle_115::isClockwise() const
{
    return m_Clockwise;
}

void BTCurveGeometryCircle_115::setClockwise(bool value)
{
    m_Clockwise = value;
    m_ClockwiseIsSet = true;
}

bool BTCurveGeometryCircle_115::clockwiseIsSet() const
{
    return m_ClockwiseIsSet;
}

void BTCurveGeometryCircle_115::unsetClockwise()
{
    m_ClockwiseIsSet = false;
}
}
}
}
}

