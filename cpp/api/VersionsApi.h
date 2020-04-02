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

/*
 * VersionsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_VersionsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_VersionsApi_H_


#include "../ApiClient.h"

#include <cpprest/details/basic_types.h>
#include "../ModelBase.h"

#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  VersionsApi 
{
public:

    explicit VersionsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~VersionsApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<void> testVersionsGet(
        boost::optional<utility::string_t> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<void> testVersionsPost(
        boost::optional<utility::string_t> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_VersionsApi_H_ */
