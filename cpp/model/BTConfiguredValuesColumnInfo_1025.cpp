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



#include "BTConfiguredValuesColumnInfo_1025.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfiguredValuesColumnInfo_1025::BTConfiguredValuesColumnInfo_1025()
{
    m_ParentName = utility::conversions::to_string_t("");
    m_ParentNameIsSet = false;
    m_ParentId = utility::conversions::to_string_t("");
    m_ParentIdIsSet = false;
    m_ParentType = utility::conversions::to_string_t("");
    m_ParentTypeIsSet = false;
}

BTConfiguredValuesColumnInfo_1025::~BTConfiguredValuesColumnInfo_1025()
{
}

void BTConfiguredValuesColumnInfo_1025::validate()
{
    // TODO: implement validation
}

web::json::value BTConfiguredValuesColumnInfo_1025::toJson() const
{
    web::json::value val = this->BTTableColumnInfo_1222::toJson();
    
    if(m_ParentNameIsSet)
    {
        val[utility::conversions::to_string_t("parentName")] = ModelBase::toJson(m_ParentName);
    }
    if(m_ParentIdIsSet)
    {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(m_ParentId);
    }
    if(m_ParentTypeIsSet)
    {
        val[utility::conversions::to_string_t("parentType")] = ModelBase::toJson(m_ParentType);
    }

    return val;
}

bool BTConfiguredValuesColumnInfo_1025::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTTableColumnInfo_1222::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("parentName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentName;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentName);
            setParentName(refVal_parentName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentId);
            setParentId(refVal_parentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentType);
            setParentType(refVal_parentType);
        }
    }
    return ok;
}

void BTConfiguredValuesColumnInfo_1025::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_SpecificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("specification"), m_Specification));
    }
    if(m_ParentNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentName"), m_ParentName));
    }
    if(m_ParentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentId"), m_ParentId));
    }
    if(m_ParentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentType"), m_ParentType));
    }
}

bool BTConfiguredValuesColumnInfo_1025::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("specification")))
    {
        std::shared_ptr<BTTableColumnSpec_1967> refVal_specification;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("specification")), refVal_specification );
        setSpecification(refVal_specification);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentName")))
    {
        utility::string_t refVal_parentName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentName")), refVal_parentName );
        setParentName(refVal_parentName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentId")))
    {
        utility::string_t refVal_parentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentId")), refVal_parentId );
        setParentId(refVal_parentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentType")))
    {
        utility::string_t refVal_parentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentType")), refVal_parentType );
        setParentType(refVal_parentType);
    }
    return ok;
}

utility::string_t BTConfiguredValuesColumnInfo_1025::getParentName() const
{
    return m_ParentName;
}

void BTConfiguredValuesColumnInfo_1025::setParentName(const utility::string_t& value)
{
    m_ParentName = value;
    m_ParentNameIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025::parentNameIsSet() const
{
    return m_ParentNameIsSet;
}

void BTConfiguredValuesColumnInfo_1025::unsetParentName()
{
    m_ParentNameIsSet = false;
}
utility::string_t BTConfiguredValuesColumnInfo_1025::getParentId() const
{
    return m_ParentId;
}

void BTConfiguredValuesColumnInfo_1025::setParentId(const utility::string_t& value)
{
    m_ParentId = value;
    m_ParentIdIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025::parentIdIsSet() const
{
    return m_ParentIdIsSet;
}

void BTConfiguredValuesColumnInfo_1025::unsetParentId()
{
    m_ParentIdIsSet = false;
}
utility::string_t BTConfiguredValuesColumnInfo_1025::getParentType() const
{
    return m_ParentType;
}

void BTConfiguredValuesColumnInfo_1025::setParentType(const utility::string_t& value)
{
    m_ParentType = value;
    m_ParentTypeIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025::parentTypeIsSet() const
{
    return m_ParentTypeIsSet;
}

void BTConfiguredValuesColumnInfo_1025::unsetParentType()
{
    m_ParentTypeIsSet = false;
}
}
}
}
}

