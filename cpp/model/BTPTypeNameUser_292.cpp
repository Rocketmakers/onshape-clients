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



#include "BTPTypeNameUser_292.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPTypeNameUser_292::BTPTypeNameUser_292()
{
    m_TypeIsSet = false;
}

BTPTypeNameUser_292::~BTPTypeNameUser_292()
{
}

void BTPTypeNameUser_292::validate()
{
    // TODO: implement validation
}

web::json::value BTPTypeNameUser_292::toJson() const
{
    web::json::value val = this->BTPTypeName_290::toJson();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool BTPTypeNameUser_292::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTPTypeName_290::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPName_261> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void BTPTypeNameUser_292::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AtomicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("atomic"), m_Atomic));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_DocumentationTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentationType"), m_DocumentationType));
    }
    if(m_EndSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endSourceLocation"), m_EndSourceLocation));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ShortDescriptorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shortDescriptor"), m_ShortDescriptor));
    }
    if(m_SpaceAfterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfter"), m_SpaceAfter));
    }
    if(m_SpaceBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceBefore"), m_SpaceBefore));
    }
    if(m_SpaceDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceDefault"), m_SpaceDefault));
    }
    if(m_StartSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startSourceLocation"), m_StartSourceLocation));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
}

bool BTPTypeNameUser_292::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("atomic")))
    {
        bool refVal_atomic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("atomic")), refVal_atomic );
        setAtomic(refVal_atomic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentationType")))
    {
        utility::string_t refVal_documentationType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentationType")), refVal_documentationType );
        setDocumentationType(refVal_documentationType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endSourceLocation")))
    {
        int32_t refVal_endSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endSourceLocation")), refVal_endSourceLocation );
        setEndSourceLocation(refVal_endSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shortDescriptor")))
    {
        utility::string_t refVal_shortDescriptor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shortDescriptor")), refVal_shortDescriptor );
        setShortDescriptor(refVal_shortDescriptor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfter")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfter")), refVal_spaceAfter );
        setSpaceAfter(refVal_spaceAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceBefore")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceBefore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceBefore")), refVal_spaceBefore );
        setSpaceBefore(refVal_spaceBefore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceDefault")))
    {
        bool refVal_spaceDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceDefault")), refVal_spaceDefault );
        setSpaceDefault(refVal_spaceDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startSourceLocation")))
    {
        int32_t refVal_startSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startSourceLocation")), refVal_startSourceLocation );
        setStartSourceLocation(refVal_startSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<BTPName_261> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

std::shared_ptr<BTPName_261> BTPTypeNameUser_292::getType() const
{
    return m_Type;
}

void BTPTypeNameUser_292::setType(const std::shared_ptr<BTPName_261>& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool BTPTypeNameUser_292::typeIsSet() const
{
    return m_TypeIsSet;
}

void BTPTypeNameUser_292::unsetType()
{
    m_TypeIsSet = false;
}
}
}
}
}

