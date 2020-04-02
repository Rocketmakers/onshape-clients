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



#include "BTMParameterMaterial_1388.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMParameterMaterial_1388::BTMParameterMaterial_1388()
{
    m_MaterialIsSet = false;
}

BTMParameterMaterial_1388::~BTMParameterMaterial_1388()
{
}

void BTMParameterMaterial_1388::validate()
{
    // TODO: implement validation
}

web::json::value BTMParameterMaterial_1388::toJson() const
{
    web::json::value val = this->BTMParameter_1::toJson();
    
    if(m_MaterialIsSet)
    {
        val[utility::conversions::to_string_t("material")] = ModelBase::toJson(m_Material);
    }

    return val;
}

bool BTMParameterMaterial_1388::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMParameter_1::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("material")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("material"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPartMaterial_1445> refVal_material;
            ok &= ModelBase::fromJson(fieldValue, refVal_material);
            setMaterial(refVal_material);
        }
    }
    return ok;
}

void BTMParameterMaterial_1388::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_MaterialIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("material"), m_Material));
    }
}

bool BTMParameterMaterial_1388::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("material")))
    {
        std::shared_ptr<BTPartMaterial_1445> refVal_material;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("material")), refVal_material );
        setMaterial(refVal_material);
    }
    return ok;
}

std::shared_ptr<BTPartMaterial_1445> BTMParameterMaterial_1388::getMaterial() const
{
    return m_Material;
}

void BTMParameterMaterial_1388::setMaterial(const std::shared_ptr<BTPartMaterial_1445>& value)
{
    m_Material = value;
    m_MaterialIsSet = true;
}

bool BTMParameterMaterial_1388::materialIsSet() const
{
    return m_MaterialIsSet;
}

void BTMParameterMaterial_1388::unsetMaterial()
{
    m_MaterialIsSet = false;
}
}
}
}
}

