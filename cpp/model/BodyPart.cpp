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



#include "BodyPart.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BodyPart::BodyPart()
{
    m_ContentDispositionIsSet = false;
    m_EntityIsSet = false;
    m_HeadersIsSet = false;
    m_MediaTypeIsSet = false;
    m_MessageBodyWorkersIsSet = false;
    m_ParameterizedHeadersIsSet = false;
    m_ParentIsSet = false;
    m_ProvidersIsSet = false;
}

BodyPart::~BodyPart()
{
}

void BodyPart::validate()
{
    // TODO: implement validation
}

web::json::value BodyPart::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ContentDispositionIsSet)
    {
        val[utility::conversions::to_string_t("contentDisposition")] = ModelBase::toJson(m_ContentDisposition);
    }
    if(m_EntityIsSet)
    {
        val[utility::conversions::to_string_t("entity")] = ModelBase::toJson(m_Entity);
    }
    if(m_HeadersIsSet)
    {
        val[utility::conversions::to_string_t("headers")] = ModelBase::toJson(m_Headers);
    }
    if(m_MediaTypeIsSet)
    {
        val[utility::conversions::to_string_t("mediaType")] = ModelBase::toJson(m_MediaType);
    }
    if(m_MessageBodyWorkersIsSet)
    {
        val[utility::conversions::to_string_t("messageBodyWorkers")] = ModelBase::toJson(m_MessageBodyWorkers);
    }
    if(m_ParameterizedHeadersIsSet)
    {
        val[utility::conversions::to_string_t("parameterizedHeaders")] = ModelBase::toJson(m_ParameterizedHeaders);
    }
    if(m_ParentIsSet)
    {
        val[utility::conversions::to_string_t("parent")] = ModelBase::toJson(m_Parent);
    }
    if(m_ProvidersIsSet)
    {
        val[utility::conversions::to_string_t("providers")] = ModelBase::toJson(m_Providers);
    }

    return val;
}

bool BodyPart::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contentDisposition")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contentDisposition"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ContentDisposition> refVal_contentDisposition;
            ok &= ModelBase::fromJson(fieldValue, refVal_contentDisposition);
            setContentDisposition(refVal_contentDisposition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_entity;
            ok &= ModelBase::fromJson(fieldValue, refVal_entity);
            setEntity(refVal_entity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("headers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headers"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::vector<utility::string_t>> refVal_headers;
            ok &= ModelBase::fromJson(fieldValue, refVal_headers);
            setHeaders(refVal_headers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mediaType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BodyPart_mediaType> refVal_mediaType;
            ok &= ModelBase::fromJson(fieldValue, refVal_mediaType);
            setMediaType(refVal_mediaType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messageBodyWorkers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("messageBodyWorkers"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_messageBodyWorkers;
            ok &= ModelBase::fromJson(fieldValue, refVal_messageBodyWorkers);
            setMessageBodyWorkers(refVal_messageBodyWorkers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameterizedHeaders")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameterizedHeaders"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::vector<std::shared_ptr<ParameterizedHeader>>> refVal_parameterizedHeaders;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameterizedHeaders);
            setParameterizedHeaders(refVal_parameterizedHeaders);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MultiPart> refVal_parent;
            ok &= ModelBase::fromJson(fieldValue, refVal_parent);
            setParent(refVal_parent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("providers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("providers"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_providers;
            ok &= ModelBase::fromJson(fieldValue, refVal_providers);
            setProviders(refVal_providers);
        }
    }
    return ok;
}

void BodyPart::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContentDispositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentDisposition"), m_ContentDisposition));
    }
    if(m_EntityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entity"), m_Entity));
    }
    if(m_HeadersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("headers"), m_Headers));
    }
    if(m_MediaTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mediaType"), m_MediaType));
    }
    if(m_MessageBodyWorkersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageBodyWorkers"), m_MessageBodyWorkers));
    }
    if(m_ParameterizedHeadersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterizedHeaders"), m_ParameterizedHeaders));
    }
    if(m_ParentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parent"), m_Parent));
    }
    if(m_ProvidersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("providers"), m_Providers));
    }
}

bool BodyPart::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contentDisposition")))
    {
        std::shared_ptr<ContentDisposition> refVal_contentDisposition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentDisposition")), refVal_contentDisposition );
        setContentDisposition(refVal_contentDisposition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entity")))
    {
        std::shared_ptr<Object> refVal_entity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entity")), refVal_entity );
        setEntity(refVal_entity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("headers")))
    {
        std::map<utility::string_t, std::vector<utility::string_t>> refVal_headers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("headers")), refVal_headers );
        setHeaders(refVal_headers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mediaType")))
    {
        std::shared_ptr<BodyPart_mediaType> refVal_mediaType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mediaType")), refVal_mediaType );
        setMediaType(refVal_mediaType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("messageBodyWorkers")))
    {
        std::shared_ptr<Object> refVal_messageBodyWorkers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageBodyWorkers")), refVal_messageBodyWorkers );
        setMessageBodyWorkers(refVal_messageBodyWorkers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterizedHeaders")))
    {
        std::map<utility::string_t, std::vector<std::shared_ptr<ParameterizedHeader>>> refVal_parameterizedHeaders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterizedHeaders")), refVal_parameterizedHeaders );
        setParameterizedHeaders(refVal_parameterizedHeaders);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parent")))
    {
        std::shared_ptr<MultiPart> refVal_parent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parent")), refVal_parent );
        setParent(refVal_parent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("providers")))
    {
        std::shared_ptr<Object> refVal_providers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("providers")), refVal_providers );
        setProviders(refVal_providers);
    }
    return ok;
}

std::shared_ptr<ContentDisposition> BodyPart::getContentDisposition() const
{
    return m_ContentDisposition;
}

void BodyPart::setContentDisposition(const std::shared_ptr<ContentDisposition>& value)
{
    m_ContentDisposition = value;
    m_ContentDispositionIsSet = true;
}

bool BodyPart::contentDispositionIsSet() const
{
    return m_ContentDispositionIsSet;
}

void BodyPart::unsetContentDisposition()
{
    m_ContentDispositionIsSet = false;
}
std::shared_ptr<Object> BodyPart::getEntity() const
{
    return m_Entity;
}

void BodyPart::setEntity(const std::shared_ptr<Object>& value)
{
    m_Entity = value;
    m_EntityIsSet = true;
}

bool BodyPart::entityIsSet() const
{
    return m_EntityIsSet;
}

void BodyPart::unsetEntity()
{
    m_EntityIsSet = false;
}
std::map<utility::string_t, std::vector<utility::string_t>>& BodyPart::getHeaders()
{
    return m_Headers;
}

void BodyPart::setHeaders(const std::map<utility::string_t, std::vector<utility::string_t>>& value)
{
    m_Headers = value;
    m_HeadersIsSet = true;
}

bool BodyPart::headersIsSet() const
{
    return m_HeadersIsSet;
}

void BodyPart::unsetHeaders()
{
    m_HeadersIsSet = false;
}
std::shared_ptr<BodyPart_mediaType> BodyPart::getMediaType() const
{
    return m_MediaType;
}

void BodyPart::setMediaType(const std::shared_ptr<BodyPart_mediaType>& value)
{
    m_MediaType = value;
    m_MediaTypeIsSet = true;
}

bool BodyPart::mediaTypeIsSet() const
{
    return m_MediaTypeIsSet;
}

void BodyPart::unsetMediaType()
{
    m_MediaTypeIsSet = false;
}
std::shared_ptr<Object> BodyPart::getMessageBodyWorkers() const
{
    return m_MessageBodyWorkers;
}

void BodyPart::setMessageBodyWorkers(const std::shared_ptr<Object>& value)
{
    m_MessageBodyWorkers = value;
    m_MessageBodyWorkersIsSet = true;
}

bool BodyPart::messageBodyWorkersIsSet() const
{
    return m_MessageBodyWorkersIsSet;
}

void BodyPart::unsetMessageBodyWorkers()
{
    m_MessageBodyWorkersIsSet = false;
}
std::map<utility::string_t, std::vector<std::shared_ptr<ParameterizedHeader>>>& BodyPart::getParameterizedHeaders()
{
    return m_ParameterizedHeaders;
}

void BodyPart::setParameterizedHeaders(const std::map<utility::string_t, std::vector<std::shared_ptr<ParameterizedHeader>>>& value)
{
    m_ParameterizedHeaders = value;
    m_ParameterizedHeadersIsSet = true;
}

bool BodyPart::parameterizedHeadersIsSet() const
{
    return m_ParameterizedHeadersIsSet;
}

void BodyPart::unsetParameterizedHeaders()
{
    m_ParameterizedHeadersIsSet = false;
}
std::shared_ptr<MultiPart> BodyPart::getParent() const
{
    return m_Parent;
}

void BodyPart::setParent(const std::shared_ptr<MultiPart>& value)
{
    m_Parent = value;
    m_ParentIsSet = true;
}

bool BodyPart::parentIsSet() const
{
    return m_ParentIsSet;
}

void BodyPart::unsetParent()
{
    m_ParentIsSet = false;
}
std::shared_ptr<Object> BodyPart::getProviders() const
{
    return m_Providers;
}

void BodyPart::setProviders(const std::shared_ptr<Object>& value)
{
    m_Providers = value;
    m_ProvidersIsSet = true;
}

bool BodyPart::providersIsSet() const
{
    return m_ProvidersIsSet;
}

void BodyPart::unsetProviders()
{
    m_ProvidersIsSet = false;
}
}
}
}
}

