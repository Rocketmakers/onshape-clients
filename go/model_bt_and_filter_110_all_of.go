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
// BtAndFilter110AllOf struct for BtAndFilter110AllOf
type BtAndFilter110AllOf struct {
	Operand1 BtQueryFilter183 `json:"operand1,omitempty"`
	Operand2 BtQueryFilter183 `json:"operand2,omitempty"`
	BtType string `json:"btType,omitempty"`
}