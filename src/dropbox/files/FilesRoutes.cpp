/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
#include "dropbox/endpoint/DropboxHost.h"

namespace dropboxQt{

namespace files{
FilesRoutes::FilesRoutes(Endpoint* p):m_end_point(p){
}

std::unique_ptr<Metadata> FilesRoutes::alphaGetMetadata(const AlphaGetMetadataArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<Metadata>, Metadata::factory, AlphaGetMetadataErrorException>("2/files/alpha/get_metadata", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::alphaUpload(const CommitInfoWithProperties& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->uploadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadErrorWithPropertiesException>("2/files/alpha/upload", js, out);
}

std::unique_ptr<Metadata> FilesRoutes::copy(const RelocationArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<Metadata>, Metadata::factory, RelocationErrorException>("2/files/copy", js);
}

std::unique_ptr<GetCopyReferenceResult> FilesRoutes::copyReferenceGet(const GetCopyReferenceArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetCopyReferenceResult>, GetCopyReferenceResult::factory, GetCopyReferenceErrorException>("2/files/copy_reference/get", js);
}

std::unique_ptr<SaveCopyReferenceResult> FilesRoutes::copyReferenceSave(const SaveCopyReferenceArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SaveCopyReferenceResult>, SaveCopyReferenceResult::factory, SaveCopyReferenceErrorException>("2/files/copy_reference/save", js);
}

std::unique_ptr<FolderMetadata> FilesRoutes::createFolder(const CreateFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<FolderMetadata>, FolderMetadata::factory, CreateFolderErrorException>("2/files/create_folder", js);
}

std::unique_ptr<Metadata> FilesRoutes::deleteOperation(const DeleteArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<Metadata>, Metadata::factory, DeleteErrorException>("2/files/delete", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::download(const DownloadArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->downloadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, DownloadErrorException>("2/files/download", js, out);
}

std::unique_ptr<Metadata> FilesRoutes::getMetadata(const GetMetadataArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<Metadata>, Metadata::factory, GetMetadataErrorException>("2/files/get_metadata", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::getPreview(const PreviewArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->downloadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, PreviewErrorException>("2/files/get_preview", js, out);
}

std::unique_ptr<GetTemporaryLinkResult> FilesRoutes::getTemporaryLink(const GetTemporaryLinkArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetTemporaryLinkResult>, GetTemporaryLinkResult::factory, GetTemporaryLinkErrorException>("2/files/get_temporary_link", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::getThumbnail(const ThumbnailArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->downloadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, ThumbnailErrorException>("2/files/get_thumbnail", js, out);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolder(const ListFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFolderResult>, ListFolderResult::factory, ListFolderErrorException>("2/files/list_folder", js);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolderContinue(const ListFolderContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFolderResult>, ListFolderResult::factory, ListFolderContinueErrorException>("2/files/list_folder/continue", js);
}

std::unique_ptr<ListFolderGetLatestCursorResult> FilesRoutes::listFolderGetLatestCursor(const ListFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFolderGetLatestCursorResult>, ListFolderGetLatestCursorResult::factory, ListFolderErrorException>("2/files/list_folder/get_latest_cursor", js);
}

std::unique_ptr<ListFolderLongpollResult> FilesRoutes::listFolderLongpoll(const ListFolderLongpollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFolderLongpollResult>, ListFolderLongpollResult::factory, ListFolderLongpollErrorException>("2/files/list_folder/longpoll", js);
}

std::unique_ptr<ListRevisionsResult> FilesRoutes::listRevisions(const ListRevisionsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListRevisionsResult>, ListRevisionsResult::factory, ListRevisionsErrorException>("2/files/list_revisions", js);
}

std::unique_ptr<Metadata> FilesRoutes::move(const RelocationArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<Metadata>, Metadata::factory, RelocationErrorException>("2/files/move", js);
}

void FilesRoutes::permanentlyDelete(const DeleteArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, DeleteErrorException>("2/files/permanently_delete", js);
}

void FilesRoutes::propertiesAdd(const PropertyGroupWithPath& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, AddPropertiesErrorException>("2/files/properties/add", js);
}

void FilesRoutes::propertiesOverwrite(const PropertyGroupWithPath& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, InvalidPropertyGroupErrorException>("2/files/properties/overwrite", js);
}

void FilesRoutes::propertiesRemove(const RemovePropertiesArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, RemovePropertiesErrorException>("2/files/properties/remove", js);
}

std::unique_ptr<properties::GetPropertyTemplateResult> FilesRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<properties::GetPropertyTemplateResult>, properties::GetPropertyTemplateResult::factory, PropertyTemplateErrorException>("2/files/properties/template/get", js);
}

std::unique_ptr<properties::ListPropertyTemplateIds> FilesRoutes::propertiesTemplateList(void){
    static const QJsonObject js;
    return m_end_point->rpcStyle< std::unique_ptr<properties::ListPropertyTemplateIds>, properties::ListPropertyTemplateIds::factory, PropertyTemplateErrorException >("2/files/properties/template/list", js);
}

void FilesRoutes::propertiesUpdate(const UpdatePropertyGroupArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, UpdatePropertiesErrorException>("2/files/properties/update", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::restore(const RestoreArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, RestoreErrorException>("2/files/restore", js);
}

std::unique_ptr<SaveUrlResult> FilesRoutes::saveUrl(const SaveUrlArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SaveUrlResult>, SaveUrlResult::factory, SaveUrlErrorException>("2/files/save_url", js);
}

std::unique_ptr<SaveUrlJobStatus> FilesRoutes::saveUrlCheckJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SaveUrlJobStatus>, SaveUrlJobStatus::factory, PollErrorException>("2/files/save_url/check_job_status", js);
}

std::unique_ptr<SearchResult> FilesRoutes::search(const SearchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SearchResult>, SearchResult::factory, SearchErrorException>("2/files/search", js);
}

std::unique_ptr<FileMetadata> FilesRoutes::upload(const CommitInfo& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->uploadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadErrorException>("2/files/upload", js, out);
}

void FilesRoutes::uploadSessionAppend(const UploadSessionCursor& arg, QIODevice* out){
    QJsonObject js(arg);
    m_end_point->uploadStyle< std::unique_ptr<VoidResult>, VoidResult, UploadSessionLookupErrorException>("2/files/upload_session/append", js, out);
}

void FilesRoutes::uploadSessionAppendV2(const UploadSessionAppendArg& arg, QIODevice* out){
    QJsonObject js(arg);
    m_end_point->uploadStyle< std::unique_ptr<VoidResult>, VoidResult, UploadSessionLookupErrorException>("2/files/upload_session/append_v2", js, out);
}

std::unique_ptr<FileMetadata> FilesRoutes::uploadSessionFinish(const UploadSessionFinishArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->uploadStyle< std::unique_ptr<FileMetadata>, FileMetadata::factory, UploadSessionFinishErrorException>("2/files/upload_session/finish", js, out);
}

std::unique_ptr<async::LaunchEmptyResult> FilesRoutes::uploadSessionFinishBatch(const UploadSessionFinishBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, NotAnException>("2/files/upload_session/finish_batch", js);
}

std::unique_ptr<UploadSessionFinishBatchJobStatus> FilesRoutes::uploadSessionFinishBatchCheck(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<UploadSessionFinishBatchJobStatus>, UploadSessionFinishBatchJobStatus::factory, PollErrorException>("2/files/upload_session/finish_batch/check", js);
}

std::unique_ptr<UploadSessionStartResult> FilesRoutes::uploadSessionStart(const UploadSessionStartArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->uploadStyle< std::unique_ptr<UploadSessionStartResult>, UploadSessionStartResult::factory, NotAnException>("2/files/upload_session/start", js, out);
}

IMPLEMENT_DBOX_ERR_EXCEPTION(AlphaGetMetadataErrorException, files::AlphaGetMetadataError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UploadErrorWithPropertiesException, files::UploadErrorWithProperties);
IMPLEMENT_DBOX_ERR_EXCEPTION(RelocationErrorException, files::RelocationError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetCopyReferenceErrorException, files::GetCopyReferenceError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SaveCopyReferenceErrorException, files::SaveCopyReferenceError);
IMPLEMENT_DBOX_ERR_EXCEPTION(CreateFolderErrorException, files::CreateFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(DeleteErrorException, files::DeleteError);
IMPLEMENT_DBOX_ERR_EXCEPTION(DownloadErrorException, files::DownloadError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetMetadataErrorException, files::GetMetadataError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PreviewErrorException, files::PreviewError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetTemporaryLinkErrorException, files::GetTemporaryLinkError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ThumbnailErrorException, files::ThumbnailError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFolderErrorException, files::ListFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFolderContinueErrorException, files::ListFolderContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFolderLongpollErrorException, files::ListFolderLongpollError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListRevisionsErrorException, files::ListRevisionsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(AddPropertiesErrorException, files::AddPropertiesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(InvalidPropertyGroupErrorException, files::InvalidPropertyGroupError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RemovePropertiesErrorException, files::RemovePropertiesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UpdatePropertiesErrorException, files::UpdatePropertiesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RestoreErrorException, files::RestoreError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SaveUrlErrorException, files::SaveUrlError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SearchErrorException, files::SearchError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UploadErrorException, files::UploadError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UploadSessionLookupErrorException, files::UploadSessionLookupError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UploadSessionFinishErrorException, files::UploadSessionFinishError);
}//files
}//dropboxQt
