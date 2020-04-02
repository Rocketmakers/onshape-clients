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



#include "BTExportModelFace_1363.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTExportModelFace_1363::BTExportModelFace_1363()
{
    m_Area = 0.0;
    m_AreaIsSet = false;
    m_BoxIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_LoopsIsSet = false;
    m_Orientation = false;
    m_OrientationIsSet = false;
    m_SurfaceIsSet = false;
}

BTExportModelFace_1363::~BTExportModelFace_1363()
{
}

void BTExportModelFace_1363::validate()
{
    // TODO: implement validation
}

web::json::value BTExportModelFace_1363::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AreaIsSet)
    {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(m_Area);
    }
    if(m_BoxIsSet)
    {
        val[utility::conversions::to_string_t("box")] = ModelBase::toJson(m_Box);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LoopsIsSet)
    {
        val[utility::conversions::to_string_t("loops")] = ModelBase::toJson(m_Loops);
    }
    if(m_OrientationIsSet)
    {
        val[utility::conversions::to_string_t("orientation")] = ModelBase::toJson(m_Orientation);
    }
    if(m_SurfaceIsSet)
    {
        val[utility::conversions::to_string_t("surface")] = ModelBase::toJson(m_Surface);
    }

    return val;
}

bool BTExportModelFace_1363::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("area")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            double refVal_area;
            ok &= ModelBase::fromJson(fieldValue, refVal_area);
            setArea(refVal_area);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("box")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("box"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTBoundingBox_1052> refVal_box;
            ok &= ModelBase::fromJson(fieldValue, refVal_box);
            setBox(refVal_box);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("loops")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loops"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTExportModelLoop_1182>> refVal_loops;
            ok &= ModelBase::fromJson(fieldValue, refVal_loops);
            setLoops(refVal_loops);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orientation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orientation"));
        if(!fieldValue.is_null())
        {
            bool refVal_orientation;
            ok &= ModelBase::fromJson(fieldValue, refVal_orientation);
            setOrientation(refVal_orientation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("surface")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("surface"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTSurfaceDescription_1564> refVal_surface;
            ok &= ModelBase::fromJson(fieldValue, refVal_surface);
            setSurface(refVal_surface);
        }
    }
    return ok;
}

void BTExportModelFace_1363::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AreaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("area"), m_Area));
    }
    if(m_BoxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("box"), m_Box));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_LoopsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("loops"), m_Loops));
    }
    if(m_OrientationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orientation"), m_Orientation));
    }
    if(m_SurfaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("surface"), m_Surface));
    }
}

bool BTExportModelFace_1363::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("area")))
    {
        double refVal_area;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("area")), refVal_area );
        setArea(refVal_area);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("box")))
    {
        std::shared_ptr<BTBoundingBox_1052> refVal_box;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("box")), refVal_box );
        setBox(refVal_box);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("loops")))
    {
        std::vector<std::shared_ptr<BTExportModelLoop_1182>> refVal_loops;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("loops")), refVal_loops );
        setLoops(refVal_loops);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("orientation")))
    {
        bool refVal_orientation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("orientation")), refVal_orientation );
        setOrientation(refVal_orientation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("surface")))
    {
        std::shared_ptr<BTSurfaceDescription_1564> refVal_surface;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("surface")), refVal_surface );
        setSurface(refVal_surface);
    }
    return ok;
}

double BTExportModelFace_1363::getArea() const
{
    return m_Area;
}

void BTExportModelFace_1363::setArea(double value)
{
    m_Area = value;
    m_AreaIsSet = true;
}

bool BTExportModelFace_1363::areaIsSet() const
{
    return m_AreaIsSet;
}

void BTExportModelFace_1363::unsetArea()
{
    m_AreaIsSet = false;
}
std::shared_ptr<BTBoundingBox_1052> BTExportModelFace_1363::getBox() const
{
    return m_Box;
}

void BTExportModelFace_1363::setBox(const std::shared_ptr<BTBoundingBox_1052>& value)
{
    m_Box = value;
    m_BoxIsSet = true;
}

bool BTExportModelFace_1363::boxIsSet() const
{
    return m_BoxIsSet;
}

void BTExportModelFace_1363::unsetBox()
{
    m_BoxIsSet = false;
}
utility::string_t BTExportModelFace_1363::getId() const
{
    return m_Id;
}

void BTExportModelFace_1363::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTExportModelFace_1363::idIsSet() const
{
    return m_IdIsSet;
}

void BTExportModelFace_1363::unsetId()
{
    m_IdIsSet = false;
}
std::vector<std::shared_ptr<BTExportModelLoop_1182>>& BTExportModelFace_1363::getLoops()
{
    return m_Loops;
}

void BTExportModelFace_1363::setLoops(const std::vector<std::shared_ptr<BTExportModelLoop_1182>>& value)
{
    m_Loops = value;
    m_LoopsIsSet = true;
}

bool BTExportModelFace_1363::loopsIsSet() const
{
    return m_LoopsIsSet;
}

void BTExportModelFace_1363::unsetLoops()
{
    m_LoopsIsSet = false;
}
bool BTExportModelFace_1363::isOrientation() const
{
    return m_Orientation;
}

void BTExportModelFace_1363::setOrientation(bool value)
{
    m_Orientation = value;
    m_OrientationIsSet = true;
}

bool BTExportModelFace_1363::orientationIsSet() const
{
    return m_OrientationIsSet;
}

void BTExportModelFace_1363::unsetOrientation()
{
    m_OrientationIsSet = false;
}
std::shared_ptr<BTSurfaceDescription_1564> BTExportModelFace_1363::getSurface() const
{
    return m_Surface;
}

void BTExportModelFace_1363::setSurface(const std::shared_ptr<BTSurfaceDescription_1564>& value)
{
    m_Surface = value;
    m_SurfaceIsSet = true;
}

bool BTExportModelFace_1363::surfaceIsSet() const
{
    return m_SurfaceIsSet;
}

void BTExportModelFace_1363::unsetSurface()
{
    m_SurfaceIsSet = false;
}
}
}
}
}

