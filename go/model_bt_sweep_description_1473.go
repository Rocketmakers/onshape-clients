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
// BtSweepDescription1473 struct for BtSweepDescription1473
type BtSweepDescription1473 struct {
	BtType string `json:"btType,omitempty"`
	Type string `json:"type,omitempty"`
	Direction BtVector3d389 `json:"direction,omitempty"`
	Profile BtSplineDescription2118 `json:"profile,omitempty"`
}