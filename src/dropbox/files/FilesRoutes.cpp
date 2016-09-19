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

Metadata FilesRoutes::alphaGetMetadata(const AlphaGetMetadataArg& arg){
    QJsonObject js(arg);
    Metadata r = m_end_point->rpcStyle<Metadata, StructFromJsonLoader<Metadata>, AlphaGetMetadataErrorException>("2/files/alpha/get_metadata", js);
    return r;
}

FileMetadata FilesRoutes::alphaUpload(const CommitInfoWithProperties& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->uploadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, UploadErrorWithPropertiesException>("2/files/alpha/upload", js, out);
    return r;
}

Metadata FilesRoutes::copy(const RelocationArg& arg){
    QJsonObject js(arg);
    Metadata r = m_end_point->rpcStyle<Metadata, StructFromJsonLoader<Metadata>, RelocationErrorException>("2/files/copy", js);
    return r;
}

GetCopyReferenceResult FilesRoutes::copyReferenceGet(const GetCopyReferenceArg& arg){
    QJsonObject js(arg);
    GetCopyReferenceResult r = m_end_point->rpcStyle<GetCopyReferenceResult, StructFromJsonLoader<GetCopyReferenceResult>, GetCopyReferenceErrorException>("2/files/copy_reference/get", js);
    return r;
}

SaveCopyReferenceResult FilesRoutes::copyReferenceSave(const SaveCopyReferenceArg& arg){
    QJsonObject js(arg);
    SaveCopyReferenceResult r = m_end_point->rpcStyle<SaveCopyReferenceResult, StructFromJsonLoader<SaveCopyReferenceResult>, SaveCopyReferenceErrorException>("2/files/copy_reference/save", js);
    return r;
}

FolderMetadata FilesRoutes::createFolder(const CreateFolderArg& arg){
    QJsonObject js(arg);
    FolderMetadata r = m_end_point->rpcStyle<FolderMetadata, StructFromJsonLoader<FolderMetadata>, CreateFolderErrorException>("2/files/create_folder", js);
    return r;
}

Metadata FilesRoutes::deleteOperation(const DeleteArg& arg){
    QJsonObject js(arg);
    Metadata r = m_end_point->rpcStyle<Metadata, StructFromJsonLoader<Metadata>, DeleteErrorException>("2/files/delete", js);
    return r;
}

FileMetadata FilesRoutes::download(const DownloadArg& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->downloadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, DownloadErrorException>("2/files/download", js, out);
    return r;
}

Metadata FilesRoutes::getMetadata(const GetMetadataArg& arg){
    QJsonObject js(arg);
    Metadata r = m_end_point->rpcStyle<Metadata, StructFromJsonLoader<Metadata>, GetMetadataErrorException>("2/files/get_metadata", js);
    return r;
}

FileMetadata FilesRoutes::getPreview(const PreviewArg& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->downloadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, PreviewErrorException>("2/files/get_preview", js, out);
    return r;
}

GetTemporaryLinkResult FilesRoutes::getTemporaryLink(const GetTemporaryLinkArg& arg){
    QJsonObject js(arg);
    GetTemporaryLinkResult r = m_end_point->rpcStyle<GetTemporaryLinkResult, StructFromJsonLoader<GetTemporaryLinkResult>, GetTemporaryLinkErrorException>("2/files/get_temporary_link", js);
    return r;
}

FileMetadata FilesRoutes::getThumbnail(const ThumbnailArg& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->downloadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, ThumbnailErrorException>("2/files/get_thumbnail", js, out);
    return r;
}

ListFolderResult FilesRoutes::listFolder(const ListFolderArg& arg){
    QJsonObject js(arg);
    ListFolderResult r = m_end_point->rpcStyle<ListFolderResult, StructFromJsonLoader<ListFolderResult>, ListFolderErrorException>("2/files/list_folder", js);
    return r;
}

ListFolderResult FilesRoutes::listFolderContinue(const ListFolderContinueArg& arg){
    QJsonObject js(arg);
    ListFolderResult r = m_end_point->rpcStyle<ListFolderResult, StructFromJsonLoader<ListFolderResult>, ListFolderContinueErrorException>("2/files/list_folder/continue", js);
    return r;
}

ListFolderGetLatestCursorResult FilesRoutes::listFolderGetLatestCursor(const ListFolderArg& arg){
    QJsonObject js(arg);
    ListFolderGetLatestCursorResult r = m_end_point->rpcStyle<ListFolderGetLatestCursorResult, StructFromJsonLoader<ListFolderGetLatestCursorResult>, ListFolderErrorException>("2/files/list_folder/get_latest_cursor", js);
    return r;
}

ListFolderLongpollResult FilesRoutes::listFolderLongpoll(const ListFolderLongpollArg& arg){
    QJsonObject js(arg);
    ListFolderLongpollResult r = m_end_point->rpcStyle<ListFolderLongpollResult, StructFromJsonLoader<ListFolderLongpollResult>, ListFolderLongpollErrorException>("2/files/list_folder/longpoll", js);
    return r;
}

ListRevisionsResult FilesRoutes::listRevisions(const ListRevisionsArg& arg){
    QJsonObject js(arg);
    ListRevisionsResult r = m_end_point->rpcStyle<ListRevisionsResult, StructFromJsonLoader<ListRevisionsResult>, ListRevisionsErrorException>("2/files/list_revisions", js);
    return r;
}

Metadata FilesRoutes::move(const RelocationArg& arg){
    QJsonObject js(arg);
    Metadata r = m_end_point->rpcStyle<Metadata, StructFromJsonLoader<Metadata>, RelocationErrorException>("2/files/move", js);
    return r;
}

void FilesRoutes::permanentlyDelete(const DeleteArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, DeleteErrorException>("2/files/permanently_delete", js);
}

void FilesRoutes::propertiesAdd(const PropertyGroupWithPath& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, AddPropertiesErrorException>("2/files/properties/add", js);
}

void FilesRoutes::propertiesOverwrite(const PropertyGroupWithPath& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, InvalidPropertyGroupErrorException>("2/files/properties/overwrite", js);
}

void FilesRoutes::propertiesRemove(const RemovePropertiesArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, RemovePropertiesErrorException>("2/files/properties/remove", js);
}

properties::GetPropertyTemplateResult FilesRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg){
    QJsonObject js(arg);
    properties::GetPropertyTemplateResult r = m_end_point->rpcStyle<properties::GetPropertyTemplateResult, StructFromJsonLoader<properties::GetPropertyTemplateResult>, PropertyTemplateErrorException>("2/files/properties/template/get", js);
    return r;
}

properties::ListPropertyTemplateIds FilesRoutes::propertiesTemplateList(void){
    static const QJsonObject js;
    properties::ListPropertyTemplateIds r = m_end_point->rpcStyle<properties::ListPropertyTemplateIds, StructFromJsonLoader<properties::ListPropertyTemplateIds>, PropertyTemplateErrorException >("2/files/properties/template/list", js);
    return r;
}

void FilesRoutes::propertiesUpdate(const UpdatePropertyGroupArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, UpdatePropertiesErrorException>("2/files/properties/update", js);
}

FileMetadata FilesRoutes::restore(const RestoreArg& arg){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->rpcStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, RestoreErrorException>("2/files/restore", js);
    return r;
}

SaveUrlResult FilesRoutes::saveUrl(const SaveUrlArg& arg){
    QJsonObject js(arg);
    SaveUrlResult r = m_end_point->rpcStyle<SaveUrlResult, StructFromJsonLoader<SaveUrlResult>, SaveUrlErrorException>("2/files/save_url", js);
    return r;
}

SaveUrlJobStatus FilesRoutes::saveUrlCheckJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    SaveUrlJobStatus r = m_end_point->rpcStyle<SaveUrlJobStatus, StructFromJsonLoader<SaveUrlJobStatus>, PollErrorException>("2/files/save_url/check_job_status", js);
    return r;
}

SearchResult FilesRoutes::search(const SearchArg& arg){
    QJsonObject js(arg);
    SearchResult r = m_end_point->rpcStyle<SearchResult, StructFromJsonLoader<SearchResult>, SearchErrorException>("2/files/search", js);
    return r;
}

FileMetadata FilesRoutes::upload(const CommitInfo& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->uploadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, UploadErrorException>("2/files/upload", js, out);
    return r;
}

void FilesRoutes::uploadSessionAppend(const UploadSessionCursor& arg, QIODevice* out){
    QJsonObject js(arg);
    m_end_point->uploadStyle<VoidResult, VoidFromJsonLoader, UploadSessionLookupErrorException>("2/files/upload_session/append", js, out);
}

void FilesRoutes::uploadSessionAppendV2(const UploadSessionAppendArg& arg, QIODevice* out){
    QJsonObject js(arg);
    m_end_point->uploadStyle<VoidResult, VoidFromJsonLoader, UploadSessionLookupErrorException>("2/files/upload_session/append_v2", js, out);
}

FileMetadata FilesRoutes::uploadSessionFinish(const UploadSessionFinishArg& arg, QIODevice* out){
    QJsonObject js(arg);
    FileMetadata r = m_end_point->uploadStyle<FileMetadata, StructFromJsonLoader<FileMetadata>, UploadSessionFinishErrorException>("2/files/upload_session/finish", js, out);
    return r;
}

async::LaunchEmptyResult FilesRoutes::uploadSessionFinishBatch(const UploadSessionFinishBatchArg& arg){
    QJsonObject js(arg);
    async::LaunchEmptyResult r = m_end_point->rpcStyle<async::LaunchEmptyResult, StructFromJsonLoader<async::LaunchEmptyResult>, NotAnException>("2/files/upload_session/finish_batch", js);
    return r;
}

UploadSessionFinishBatchJobStatus FilesRoutes::uploadSessionFinishBatchCheck(const async::PollArg& arg){
    QJsonObject js(arg);
    UploadSessionFinishBatchJobStatus r = m_end_point->rpcStyle<UploadSessionFinishBatchJobStatus, StructFromJsonLoader<UploadSessionFinishBatchJobStatus>, PollErrorException>("2/files/upload_session/finish_batch/check", js);
    return r;
}

UploadSessionStartResult FilesRoutes::uploadSessionStart(const UploadSessionStartArg& arg, QIODevice* out){
    QJsonObject js(arg);
    UploadSessionStartResult r = m_end_point->uploadStyle<UploadSessionStartResult, StructFromJsonLoader<UploadSessionStartResult>, NotAnException>("2/files/upload_session/start", js, out);
    return r;
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
