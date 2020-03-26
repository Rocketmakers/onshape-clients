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
import (
	"time"
)
// BtRevisionInfo struct for BtRevisionInfo
type BtRevisionInfo struct {
	Approvers []BtRevisionApproverInfo `json:"approvers,omitempty"`
	AutoObsoletionReleaseId string `json:"autoObsoletionReleaseId,omitempty"`
	AutoObsoletionReleaseName string `json:"autoObsoletionReleaseName,omitempty"`
	CanCurrentUserObsolete bool `json:"canCurrentUserObsolete,omitempty"`
	CanExport bool `json:"canExport,omitempty"`
	CompanyId string `json:"companyId,omitempty"`
	Configuration string `json:"configuration,omitempty"`
	DocumentId string `json:"documentId,omitempty"`
	DocumentName string `json:"documentName,omitempty"`
	ElementId string `json:"elementId,omitempty"`
	ElementType int32 `json:"elementType,omitempty"`
	ErrorMessage string `json:"errorMessage,omitempty"`
	FileName string `json:"fileName,omitempty"`
	FlatPartInsertableId string `json:"flatPartInsertableId,omitempty"`
	Href string `json:"href,omitempty"`
	Id string `json:"id,omitempty"`
	InsertableId string `json:"insertableId,omitempty"`
	IsObsolete bool `json:"isObsolete,omitempty"`
	IsTranslatable bool `json:"isTranslatable,omitempty"`
	MimeType string `json:"mimeType,omitempty"`
	Name string `json:"name,omitempty"`
	NextRevisionId string `json:"nextRevisionId,omitempty"`
	ObsoletionPackageId string `json:"obsoletionPackageId,omitempty"`
	PartId string `json:"partId,omitempty"`
	PartNumber string `json:"partNumber,omitempty"`
	PreviousRevisionId string `json:"previousRevisionId,omitempty"`
	ReleaseCreatedDate time.Time `json:"releaseCreatedDate,omitempty"`
	ReleaseId string `json:"releaseId,omitempty"`
	ReleaseName string `json:"releaseName,omitempty"`
	ReleasedBy BtUserSummaryInfo `json:"releasedBy,omitempty"`
	Revision string `json:"revision,omitempty"`
	RevisionRuleId string `json:"revisionRuleId,omitempty"`
	VersionId string `json:"versionId,omitempty"`
	VersionName string `json:"versionName,omitempty"`
	ViewRef string `json:"viewRef,omitempty"`
}