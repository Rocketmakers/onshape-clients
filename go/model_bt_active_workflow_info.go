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
// BtActiveWorkflowInfo struct for BtActiveWorkflowInfo
type BtActiveWorkflowInfo struct {
	CanCreateReleases bool `json:"canCreateReleases,omitempty"`
	CanCurrentUserCreateReleases bool `json:"canCurrentUserCreateReleases,omitempty"`
	CompanyId string `json:"companyId,omitempty"`
	DocumentId string `json:"documentId,omitempty"`
	DrawingCanDuplicatePartNumber bool `json:"drawingCanDuplicatePartNumber,omitempty"`
	EnabledActiveMultipleWorkflows bool `json:"enabledActiveMultipleWorkflows,omitempty"`
	ObsoletionWorkflow BtPublishedWorkflowInfo `json:"obsoletionWorkflow,omitempty"`
	ObsoletionWorkflowId string `json:"obsoletionWorkflowId,omitempty"`
	PickableWorkflows []BtPublishedWorkflowInfo `json:"pickableWorkflows,omitempty"`
	ReleaseWorkflow BtPublishedWorkflowInfo `json:"releaseWorkflow,omitempty"`
	ReleaseWorkflowId string `json:"releaseWorkflowId,omitempty"`
	UsingAutoPartNumbering bool `json:"usingAutoPartNumbering,omitempty"`
	UsingAutoPartNumberingScheme bool `json:"usingAutoPartNumberingScheme,omitempty"`
	UsingManagedWorkflow bool `json:"usingManagedWorkflow,omitempty"`
}