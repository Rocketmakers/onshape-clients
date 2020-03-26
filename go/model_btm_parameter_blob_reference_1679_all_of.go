/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// BtmParameterBlobReference1679AllOf struct for BtmParameterBlobReference1679AllOf
type BtmParameterBlobReference1679AllOf struct {
	Namespace string `json:"namespace,omitempty"`
	BlobImport BtmImport136 `json:"blobImport,omitempty"`
	BtType string `json:"btType,omitempty"`
}