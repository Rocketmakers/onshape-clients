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



#include "BTPTopLevelTypeDeclaration_287_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPTopLevelTypeDeclaration_287_allOf::BTPTopLevelTypeDeclaration_287_allOf()
{
    m_SpaceAfterVersionIsSet = false;
    m_VersionIsSet = false;
    m_NameIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPTopLevelTypeDeclaration_287_allOf::~BTPTopLevelTypeDeclaration_287_allOf()
{
}

void BTPTopLevelTypeDeclaration_287_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPTopLevelTypeDeclaration_287_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SpaceAfterVersionIsSet)
    {
        val[utility::conversions::to_string_t("spaceAfterVersion")] = ModelBase::toJson(m_SpaceAfterVersion);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPTopLevelTypeDeclaration_287_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spaceAfterVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceAfterVersion"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceAfterVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceAfterVersion);
            setSpaceAfterVersion(refVal_spaceAfterVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPLiteralNumber_258> refVal_version;
            ok &= ModelBase::fromJson(fieldValue, refVal_version);
            setVersion(refVal_version);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
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

void BTPTopLevelTypeDeclaration_287_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SpaceAfterVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfterVersion"), m_SpaceAfterVersion));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPTopLevelTypeDeclaration_287_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfterVersion")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfterVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfterVersion")), refVal_spaceAfterVersion );
        setSpaceAfterVersion(refVal_spaceAfterVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("version")))
    {
        std::shared_ptr<BTPLiteralNumber_258> refVal_version;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("version")), refVal_version );
        setVersion(refVal_version);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTPSpace_10> BTPTopLevelTypeDeclaration_287_allOf::getSpaceAfterVersion() const
{
    return m_SpaceAfterVersion;
}

void BTPTopLevelTypeDeclaration_287_allOf::setSpaceAfterVersion(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceAfterVersion = value;
    m_SpaceAfterVersionIsSet = true;
}

bool BTPTopLevelTypeDeclaration_287_allOf::spaceAfterVersionIsSet() const
{
    return m_SpaceAfterVersionIsSet;
}

void BTPTopLevelTypeDeclaration_287_allOf::unsetSpaceAfterVersion()
{
    m_SpaceAfterVersionIsSet = false;
}
std::shared_ptr<BTPLiteralNumber_258> BTPTopLevelTypeDeclaration_287_allOf::getVersion() const
{
    return m_Version;
}

void BTPTopLevelTypeDeclaration_287_allOf::setVersion(const std::shared_ptr<BTPLiteralNumber_258>& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool BTPTopLevelTypeDeclaration_287_allOf::versionIsSet() const
{
    return m_VersionIsSet;
}

void BTPTopLevelTypeDeclaration_287_allOf::unsetVersion()
{
    m_VersionIsSet = false;
}
std::shared_ptr<BTPIdentifier_8> BTPTopLevelTypeDeclaration_287_allOf::getName() const
{
    return m_Name;
}

void BTPTopLevelTypeDeclaration_287_allOf::setName(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTPTopLevelTypeDeclaration_287_allOf::nameIsSet() const
{
    return m_NameIsSet;
}

void BTPTopLevelTypeDeclaration_287_allOf::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTPTopLevelTypeDeclaration_287_allOf::getBtType() const
{
    return m_BtType;
}

void BTPTopLevelTypeDeclaration_287_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPTopLevelTypeDeclaration_287_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPTopLevelTypeDeclaration_287_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

