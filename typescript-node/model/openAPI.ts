/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { Components } from './components';
import { ExternalDocumentation } from './externalDocumentation';
import { Info } from './info';
import { OAuthFlowScopes } from './oAuthFlowScopes';
import { SecurityRequirement } from './securityRequirement';
import { Server } from './server';
import { Tag } from './tag';

export class OpenAPI {
    'openapi'?: string;
    'info'?: Info;
    'externalDocs'?: ExternalDocumentation;
    'servers'?: Array<Server>;
    'security'?: Array<SecurityRequirement>;
    'tags'?: Array<Tag>;
    'paths'?: OAuthFlowScopes;
    'components'?: Components;
    'extensions'?: { [key: string]: any; };

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "openapi",
            "baseName": "openapi",
            "type": "string"
        },
        {
            "name": "info",
            "baseName": "info",
            "type": "Info"
        },
        {
            "name": "externalDocs",
            "baseName": "externalDocs",
            "type": "ExternalDocumentation"
        },
        {
            "name": "servers",
            "baseName": "servers",
            "type": "Array<Server>"
        },
        {
            "name": "security",
            "baseName": "security",
            "type": "Array<SecurityRequirement>"
        },
        {
            "name": "tags",
            "baseName": "tags",
            "type": "Array<Tag>"
        },
        {
            "name": "paths",
            "baseName": "paths",
            "type": "OAuthFlowScopes"
        },
        {
            "name": "components",
            "baseName": "components",
            "type": "Components"
        },
        {
            "name": "extensions",
            "baseName": "extensions",
            "type": "{ [key: string]: any; }"
        }    ];

    static getAttributeTypeMap() {
        return OpenAPI.attributeTypeMap;
    }
}

