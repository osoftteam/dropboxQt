/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/files/FilesRoutes.h"
#include "dropbox/endpoint/Endpoint.h"

namespace dropboxQt{

namespace files{
FilesRoutes::FilesRoutes(Endpoint* p):m_end_point(p){
}

std::unique_ptr<Metadata> FilesRoutes::alphaGetMetadata(const AlphaGetMetadataArg& arg ){
    return m_end_point->rpcStyle<AlphaGetMetadataArg, std::unique_ptr<Metadata>, Metadata::factory, AlphaGetMetadataErrorException>("2/files/alpha/get_metadata", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::alphaUpload(const CommitInfoWithProperties& arg , QIODevice* readFrom){
    return m_end_point->uploadStyle<CommitInfoWithProperties, std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadErrorWithPropertiesException>("2/files/alpha/upload", arg, readFrom);
}

std::unique_ptr<Metadata> FilesRoutes::copy(const RelocationArg& arg ){
    return m_end_point->rpcStyle<RelocationArg, std::unique_ptr<Metadata>, Metadata::factory, RelocationErrorException>("2/files/copy", arg);
}

std::unique_ptr<GetCopyReferenceResult> FilesRoutes::copyReferenceGet(const GetCopyReferenceArg& arg ){
    return m_end_point->rpcStyle<GetCopyReferenceArg, std::unique_ptr<GetCopyReferenceResult>, GetCopyReferenceResult::factory, GetCopyReferenceErrorException>("2/files/copy_reference/get", arg);
}

std::unique_ptr<SaveCopyReferenceResult> FilesRoutes::copyReferenceSave(const SaveCopyReferenceArg& arg ){
    return m_end_point->rpcStyle<SaveCopyReferenceArg, std::unique_ptr<SaveCopyReferenceResult>, SaveCopyReferenceResult::factory, SaveCopyReferenceErrorException>("2/files/copy_reference/save", arg);
}

std::unique_ptr<FolderMetadata> FilesRoutes::createFolder(const CreateFolderArg& arg ){
    return m_end_point->rpcStyle<CreateFolderArg, std::unique_ptr<FolderMetadata>, FolderMetadata::factory, CreateFolderErrorException>("2/files/create_folder", arg);
}

std::unique_ptr<Metadata> FilesRoutes::deleteOperation(const DeleteArg& arg ){
    return m_end_point->rpcStyle<DeleteArg, std::unique_ptr<Metadata>, Metadata::factory, DeleteErrorException>("2/files/delete", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::download(const DownloadArg& arg , QIODevice* writeTo){
    return m_end_point->downloadStyle<DownloadArg, std::unique_ptr<FileMetadata>, FileMetadata::factory, DownloadErrorException>("2/files/download", arg, writeTo);
}

std::unique_ptr<Metadata> FilesRoutes::getMetadata(const GetMetadataArg& arg ){
    return m_end_point->rpcStyle<GetMetadataArg, std::unique_ptr<Metadata>, Metadata::factory, GetMetadataErrorException>("2/files/get_metadata", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::getPreview(const PreviewArg& arg , QIODevice* writeTo){
    return m_end_point->downloadStyle<PreviewArg, std::unique_ptr<FileMetadata>, FileMetadata::factory, PreviewErrorException>("2/files/get_preview", arg, writeTo);
}

std::unique_ptr<GetTemporaryLinkResult> FilesRoutes::getTemporaryLink(const GetTemporaryLinkArg& arg ){
    return m_end_point->rpcStyle<GetTemporaryLinkArg, std::unique_ptr<GetTemporaryLinkResult>, GetTemporaryLinkResult::factory, GetTemporaryLinkErrorException>("2/files/get_temporary_link", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::getThumbnail(const ThumbnailArg& arg , QIODevice* writeTo){
    return m_end_point->downloadStyle<ThumbnailArg, std::unique_ptr<FileMetadata>, FileMetadata::factory, ThumbnailErrorException>("2/files/get_thumbnail", arg, writeTo);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolder(const ListFolderArg& arg ){
    return m_end_point->rpcStyle<ListFolderArg, std::unique_ptr<ListFolderResult>, ListFolderResult::factory, ListFolderErrorException>("2/files/list_folder", arg);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolderContinue(const ListFolderContinueArg& arg ){
    return m_end_point->rpcStyle<ListFolderContinueArg, std::unique_ptr<ListFolderResult>, ListFolderResult::factory, ListFolderContinueErrorException>("2/files/list_folder/continue", arg);
}

std::unique_ptr<ListFolderGetLatestCursorResult> FilesRoutes::listFolderGetLatestCursor(const ListFolderArg& arg ){
    return m_end_point->rpcStyle<ListFolderArg, std::unique_ptr<ListFolderGetLatestCursorResult>, ListFolderGetLatestCursorResult::factory, ListFolderErrorException>("2/files/list_folder/get_latest_cursor", arg);
}

std::unique_ptr<ListFolderLongpollResult> FilesRoutes::listFolderLongpoll(const ListFolderLongpollArg& arg ){
    return m_end_point->rpcStyle<ListFolderLongpollArg, std::unique_ptr<ListFolderLongpollResult>, ListFolderLongpollResult::factory, ListFolderLongpollErrorException>("2/files/list_folder/longpoll", arg);
}

std::unique_ptr<ListRevisionsResult> FilesRoutes::listRevisions(const ListRevisionsArg& arg ){
    return m_end_point->rpcStyle<ListRevisionsArg, std::unique_ptr<ListRevisionsResult>, ListRevisionsResult::factory, ListRevisionsErrorException>("2/files/list_revisions", arg);
}

std::unique_ptr<Metadata> FilesRoutes::move(const RelocationArg& arg ){
    return m_end_point->rpcStyle<RelocationArg, std::unique_ptr<Metadata>, Metadata::factory, RelocationErrorException>("2/files/move", arg);
}

void FilesRoutes::permanentlyDelete(const DeleteArg& arg ){
    m_end_point->rpcStyle<DeleteArg, std::unique_ptr<VoidType>, VoidType, DeleteErrorException>("2/files/permanently_delete", arg);
}

void FilesRoutes::propertiesAdd(const PropertyGroupWithPath& arg ){
    m_end_point->rpcStyle<PropertyGroupWithPath, std::unique_ptr<VoidType>, VoidType, AddPropertiesErrorException>("2/files/properties/add", arg);
}

void FilesRoutes::propertiesOverwrite(const PropertyGroupWithPath& arg ){
    m_end_point->rpcStyle<PropertyGroupWithPath, std::unique_ptr<VoidType>, VoidType, InvalidPropertyGroupErrorException>("2/files/properties/overwrite", arg);
}

void FilesRoutes::propertiesRemove(const RemovePropertiesArg& arg ){
    m_end_point->rpcStyle<RemovePropertiesArg, std::unique_ptr<VoidType>, VoidType, RemovePropertiesErrorException>("2/files/properties/remove", arg);
}

std::unique_ptr<properties::GetPropertyTemplateResult> FilesRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg ){
    return m_end_point->rpcStyle<properties::GetPropertyTemplateArg, std::unique_ptr<properties::GetPropertyTemplateResult>, properties::GetPropertyTemplateResult::factory, PropertyTemplateErrorException>("2/files/properties/template/get", arg);
}

std::unique_ptr<properties::ListPropertyTemplateIds> FilesRoutes::propertiesTemplateList(void){
    return m_end_point->rpcStyle<VoidType, std::unique_ptr<properties::ListPropertyTemplateIds>, properties::ListPropertyTemplateIds::factory, PropertyTemplateErrorException >("2/files/properties/template/list", VoidType::instance());
}

void FilesRoutes::propertiesUpdate(const UpdatePropertyGroupArg& arg ){
    m_end_point->rpcStyle<UpdatePropertyGroupArg, std::unique_ptr<VoidType>, VoidType, UpdatePropertiesErrorException>("2/files/properties/update", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::restore(const RestoreArg& arg ){
    return m_end_point->rpcStyle<RestoreArg, std::unique_ptr<FileMetadata>, FileMetadata::factory, RestoreErrorException>("2/files/restore", arg);
}

std::unique_ptr<SaveUrlResult> FilesRoutes::saveUrl(const SaveUrlArg& arg ){
    return m_end_point->rpcStyle<SaveUrlArg, std::unique_ptr<SaveUrlResult>, SaveUrlResult::factory, SaveUrlErrorException>("2/files/save_url", arg);
}

std::unique_ptr<SaveUrlJobStatus> FilesRoutes::saveUrlCheckJobStatus(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<SaveUrlJobStatus>, SaveUrlJobStatus::factory, PollErrorException>("2/files/save_url/check_job_status", arg);
}

std::unique_ptr<SearchResult> FilesRoutes::search(const SearchArg& arg ){
    return m_end_point->rpcStyle<SearchArg, std::unique_ptr<SearchResult>, SearchResult::factory, SearchErrorException>("2/files/search", arg);
}

std::unique_ptr<FileMetadata> FilesRoutes::upload(const CommitInfo& arg , QIODevice* readFrom){
    return m_end_point->uploadStyle<CommitInfo, std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadErrorException>("2/files/upload", arg, readFrom);
}

void FilesRoutes::uploadSessionAppend(const UploadSessionCursor& arg , QIODevice* readFrom){
    m_end_point->uploadStyle<UploadSessionCursor, std::unique_ptr<VoidType>, VoidType, UploadSessionLookupErrorException>("2/files/upload_session/append", arg, readFrom);
}

void FilesRoutes::uploadSessionAppendV2(const UploadSessionAppendArg& arg , QIODevice* readFrom){
    m_end_point->uploadStyle<UploadSessionAppendArg, std::unique_ptr<VoidType>, VoidType, UploadSessionLookupErrorException>("2/files/upload_session/append_v2", arg, readFrom);
}

std::unique_ptr<FileMetadata> FilesRoutes::uploadSessionFinish(const UploadSessionFinishArg& arg , QIODevice* readFrom){
    return m_end_point->uploadStyle<UploadSessionFinishArg, std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadSessionFinishErrorException>("2/files/upload_session/finish", arg, readFrom);
}

std::unique_ptr<async::LaunchEmptyResult> FilesRoutes::uploadSessionFinishBatch(const UploadSessionFinishBatchArg& arg ){
    return m_end_point->rpcStyle<UploadSessionFinishBatchArg, std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, NotAnException>("2/files/upload_session/finish_batch", arg);
}

std::unique_ptr<UploadSessionFinishBatchJobStatus> FilesRoutes::uploadSessionFinishBatchCheck(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<UploadSessionFinishBatchJobStatus>, UploadSessionFinishBatchJobStatus::factory, PollErrorException>("2/files/upload_session/finish_batch/check", arg);
}

std::unique_ptr<UploadSessionStartResult> FilesRoutes::uploadSessionStart(const UploadSessionStartArg& arg , QIODevice* readFrom){
    return m_end_point->uploadStyle<UploadSessionStartArg, std::unique_ptr<UploadSessionStartResult>, UploadSessionStartResult::factory, NotAnException>("2/files/upload_session/start", arg, readFrom);
}

IMPLEMENT_API_ERR_EXCEPTION(AlphaGetMetadataErrorException, files::AlphaGetMetadataError);
IMPLEMENT_API_ERR_EXCEPTION(UploadErrorWithPropertiesException, files::UploadErrorWithProperties);
IMPLEMENT_API_ERR_EXCEPTION(RelocationErrorException, files::RelocationError);
IMPLEMENT_API_ERR_EXCEPTION(GetCopyReferenceErrorException, files::GetCopyReferenceError);
IMPLEMENT_API_ERR_EXCEPTION(SaveCopyReferenceErrorException, files::SaveCopyReferenceError);
IMPLEMENT_API_ERR_EXCEPTION(CreateFolderErrorException, files::CreateFolderError);
IMPLEMENT_API_ERR_EXCEPTION(DeleteErrorException, files::DeleteError);
IMPLEMENT_API_ERR_EXCEPTION(DownloadErrorException, files::DownloadError);
IMPLEMENT_API_ERR_EXCEPTION(GetMetadataErrorException, files::GetMetadataError);
IMPLEMENT_API_ERR_EXCEPTION(PreviewErrorException, files::PreviewError);
IMPLEMENT_API_ERR_EXCEPTION(GetTemporaryLinkErrorException, files::GetTemporaryLinkError);
IMPLEMENT_API_ERR_EXCEPTION(ThumbnailErrorException, files::ThumbnailError);
IMPLEMENT_API_ERR_EXCEPTION(ListFolderErrorException, files::ListFolderError);
IMPLEMENT_API_ERR_EXCEPTION(ListFolderContinueErrorException, files::ListFolderContinueError);
IMPLEMENT_API_ERR_EXCEPTION(ListFolderLongpollErrorException, files::ListFolderLongpollError);
IMPLEMENT_API_ERR_EXCEPTION(ListRevisionsErrorException, files::ListRevisionsError);
IMPLEMENT_API_ERR_EXCEPTION(AddPropertiesErrorException, files::AddPropertiesError);
IMPLEMENT_API_ERR_EXCEPTION(InvalidPropertyGroupErrorException, files::InvalidPropertyGroupError);
IMPLEMENT_API_ERR_EXCEPTION(RemovePropertiesErrorException, files::RemovePropertiesError);
IMPLEMENT_API_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);
IMPLEMENT_API_ERR_EXCEPTION(UpdatePropertiesErrorException, files::UpdatePropertiesError);
IMPLEMENT_API_ERR_EXCEPTION(RestoreErrorException, files::RestoreError);
IMPLEMENT_API_ERR_EXCEPTION(SaveUrlErrorException, files::SaveUrlError);
IMPLEMENT_API_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_API_ERR_EXCEPTION(SearchErrorException, files::SearchError);
IMPLEMENT_API_ERR_EXCEPTION(UploadErrorException, files::UploadError);
IMPLEMENT_API_ERR_EXCEPTION(UploadSessionLookupErrorException, files::UploadSessionLookupError);
IMPLEMENT_API_ERR_EXCEPTION(UploadSessionFinishErrorException, files::UploadSessionFinishError);
}//files
}//dropboxQt
