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
// BtCurveGeometryInterpolatedSpline116AllOf struct for BtCurveGeometryInterpolatedSpline116AllOf
type BtCurveGeometryInterpolatedSpline116AllOf struct {
	IsPeriodic bool `json:"isPeriodic,omitempty"`
	InterpolationPoints []float64 `json:"interpolationPoints,omitempty"`
	StartDerivativeX float64 `json:"startDerivativeX,omitempty"`
	StartDerivativeY float64 `json:"startDerivativeY,omitempty"`
	EndDerivativeX float64 `json:"endDerivativeX,omitempty"`
	EndDerivativeY float64 `json:"endDerivativeY,omitempty"`
	StartHandleX float64 `json:"startHandleX,omitempty"`
	StartHandleY float64 `json:"startHandleY,omitempty"`
	EndHandleX float64 `json:"endHandleX,omitempty"`
	EndHandleY float64 `json:"endHandleY,omitempty"`
	BtType string `json:"btType,omitempty"`
}