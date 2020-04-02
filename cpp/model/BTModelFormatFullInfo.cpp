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



#include "BTModelFormatFullInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTModelFormatFullInfo::BTModelFormatFullInfo()
{
    m_CouldBeAssembly = false;
    m_CouldBeAssemblyIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_TranslatorName = utility::conversions::to_string_t("");
    m_TranslatorNameIsSet = false;
    m_ValidDestinationFormat = false;
    m_ValidDestinationFormatIsSet = false;
    m_ValidSourceFormat = false;
    m_ValidSourceFormatIsSet = false;
}

BTModelFormatFullInfo::~BTModelFormatFullInfo()
{
}

void BTModelFormatFullInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTModelFormatFullInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CouldBeAssemblyIsSet)
    {
        val[utility::conversions::to_string_t("couldBeAssembly")] = ModelBase::toJson(m_CouldBeAssembly);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TranslatorNameIsSet)
    {
        val[utility::conversions::to_string_t("translatorName")] = ModelBase::toJson(m_TranslatorName);
    }
    if(m_ValidDestinationFormatIsSet)
    {
        val[utility::conversions::to_string_t("validDestinationFormat")] = ModelBase::toJson(m_ValidDestinationFormat);
    }
    if(m_ValidSourceFormatIsSet)
    {
        val[utility::conversions::to_string_t("validSourceFormat")] = ModelBase::toJson(m_ValidSourceFormat);
    }

    return val;
}

bool BTModelFormatFullInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("couldBeAssembly")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("couldBeAssembly"));
        if(!fieldValue.is_null())
        {
            bool refVal_couldBeAssembly;
            ok &= ModelBase::fromJson(fieldValue, refVal_couldBeAssembly);
            setCouldBeAssembly(refVal_couldBeAssembly);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("translatorName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("translatorName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_translatorName;
            ok &= ModelBase::fromJson(fieldValue, refVal_translatorName);
            setTranslatorName(refVal_translatorName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validDestinationFormat")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validDestinationFormat"));
        if(!fieldValue.is_null())
        {
            bool refVal_validDestinationFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_validDestinationFormat);
            setValidDestinationFormat(refVal_validDestinationFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validSourceFormat")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validSourceFormat"));
        if(!fieldValue.is_null())
        {
            bool refVal_validSourceFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_validSourceFormat);
            setValidSourceFormat(refVal_validSourceFormat);
        }
    }
    return ok;
}

void BTModelFormatFullInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CouldBeAssemblyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("couldBeAssembly"), m_CouldBeAssembly));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_TranslatorNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("translatorName"), m_TranslatorName));
    }
    if(m_ValidDestinationFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("validDestinationFormat"), m_ValidDestinationFormat));
    }
    if(m_ValidSourceFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("validSourceFormat"), m_ValidSourceFormat));
    }
}

bool BTModelFormatFullInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("couldBeAssembly")))
    {
        bool refVal_couldBeAssembly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("couldBeAssembly")), refVal_couldBeAssembly );
        setCouldBeAssembly(refVal_couldBeAssembly);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("translatorName")))
    {
        utility::string_t refVal_translatorName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("translatorName")), refVal_translatorName );
        setTranslatorName(refVal_translatorName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("validDestinationFormat")))
    {
        bool refVal_validDestinationFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("validDestinationFormat")), refVal_validDestinationFormat );
        setValidDestinationFormat(refVal_validDestinationFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("validSourceFormat")))
    {
        bool refVal_validSourceFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("validSourceFormat")), refVal_validSourceFormat );
        setValidSourceFormat(refVal_validSourceFormat);
    }
    return ok;
}

bool BTModelFormatFullInfo::isCouldBeAssembly() const
{
    return m_CouldBeAssembly;
}

void BTModelFormatFullInfo::setCouldBeAssembly(bool value)
{
    m_CouldBeAssembly = value;
    m_CouldBeAssemblyIsSet = true;
}

bool BTModelFormatFullInfo::couldBeAssemblyIsSet() const
{
    return m_CouldBeAssemblyIsSet;
}

void BTModelFormatFullInfo::unsetCouldBeAssembly()
{
    m_CouldBeAssemblyIsSet = false;
}
utility::string_t BTModelFormatFullInfo::getName() const
{
    return m_Name;
}

void BTModelFormatFullInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTModelFormatFullInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTModelFormatFullInfo::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTModelFormatFullInfo::getTranslatorName() const
{
    return m_TranslatorName;
}

void BTModelFormatFullInfo::setTranslatorName(const utility::string_t& value)
{
    m_TranslatorName = value;
    m_TranslatorNameIsSet = true;
}

bool BTModelFormatFullInfo::translatorNameIsSet() const
{
    return m_TranslatorNameIsSet;
}

void BTModelFormatFullInfo::unsetTranslatorName()
{
    m_TranslatorNameIsSet = false;
}
bool BTModelFormatFullInfo::isValidDestinationFormat() const
{
    return m_ValidDestinationFormat;
}

void BTModelFormatFullInfo::setValidDestinationFormat(bool value)
{
    m_ValidDestinationFormat = value;
    m_ValidDestinationFormatIsSet = true;
}

bool BTModelFormatFullInfo::validDestinationFormatIsSet() const
{
    return m_ValidDestinationFormatIsSet;
}

void BTModelFormatFullInfo::unsetValidDestinationFormat()
{
    m_ValidDestinationFormatIsSet = false;
}
bool BTModelFormatFullInfo::isValidSourceFormat() const
{
    return m_ValidSourceFormat;
}

void BTModelFormatFullInfo::setValidSourceFormat(bool value)
{
    m_ValidSourceFormat = value;
    m_ValidSourceFormatIsSet = true;
}

bool BTModelFormatFullInfo::validSourceFormatIsSet() const
{
    return m_ValidSourceFormatIsSet;
}

void BTModelFormatFullInfo::unsetValidSourceFormat()
{
    m_ValidSourceFormatIsSet = false;
}
}
}
}
}

