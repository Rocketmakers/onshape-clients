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
// BtParameterVisibilityLogical178AllOf struct for BtParameterVisibilityLogical178AllOf
type BtParameterVisibilityLogical178AllOf struct {
	Operation string `json:"operation,omitempty"`
	Children []BtParameterVisibilityCondition177 `json:"children,omitempty"`
	BtType string `json:"btType,omitempty"`
}