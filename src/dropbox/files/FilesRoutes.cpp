/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
using namespace dropboxQt;
using namespace files;

std::unique_ptr<Metadata> FilesRoutes::alphaGetMetadata(const AlphaGetMetadataArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGetMetadata_Async, Metadata, arg);
}

void FilesRoutes::alphaGetMetadata_Async(
    const AlphaGetMetadataArg& arg,
    std::function<void(std::unique_ptr<Metadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        AlphaGetMetadataArg,
        std::unique_ptr<Metadata>,
        Metadata::factory,
        AlphaGetMetadataErrorException>
        ("2/files/alpha/get_metadata",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::alphaUpload(const CommitInfoWithProperties& arg , QIODevice* data){
    DATA_DBC(alphaUpload_Async, FileMetadata, arg, data);
}

void FilesRoutes::alphaUpload_Async(
    const CommitInfoWithProperties& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        CommitInfoWithProperties,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        UploadErrorWithPropertiesException>
        ("2/files/alpha/upload",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<Metadata> FilesRoutes::copy(const RelocationArg& arg ){
    DROPBOX_BLOCKING_CALL(copy_Async, Metadata, arg);
}

void FilesRoutes::copy_Async(
    const RelocationArg& arg,
    std::function<void(std::unique_ptr<Metadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RelocationArg,
        std::unique_ptr<Metadata>,
        Metadata::factory,
        RelocationErrorException>
        ("2/files/copy",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetCopyReferenceResult> FilesRoutes::copyReferenceGet(const GetCopyReferenceArg& arg ){
    DROPBOX_BLOCKING_CALL(copyReferenceGet_Async, GetCopyReferenceResult, arg);
}

void FilesRoutes::copyReferenceGet_Async(
    const GetCopyReferenceArg& arg,
    std::function<void(std::unique_ptr<GetCopyReferenceResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetCopyReferenceArg,
        std::unique_ptr<GetCopyReferenceResult>,
        GetCopyReferenceResult::factory,
        GetCopyReferenceErrorException>
        ("2/files/copy_reference/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SaveCopyReferenceResult> FilesRoutes::copyReferenceSave(const SaveCopyReferenceArg& arg ){
    DROPBOX_BLOCKING_CALL(copyReferenceSave_Async, SaveCopyReferenceResult, arg);
}

void FilesRoutes::copyReferenceSave_Async(
    const SaveCopyReferenceArg& arg,
    std::function<void(std::unique_ptr<SaveCopyReferenceResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        SaveCopyReferenceArg,
        std::unique_ptr<SaveCopyReferenceResult>,
        SaveCopyReferenceResult::factory,
        SaveCopyReferenceErrorException>
        ("2/files/copy_reference/save",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FolderMetadata> FilesRoutes::createFolder(const CreateFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(createFolder_Async, FolderMetadata, arg);
}

void FilesRoutes::createFolder_Async(
    const CreateFolderArg& arg,
    std::function<void(std::unique_ptr<FolderMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        CreateFolderArg,
        std::unique_ptr<FolderMetadata>,
        FolderMetadata::factory,
        CreateFolderErrorException>
        ("2/files/create_folder",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<Metadata> FilesRoutes::deleteOperation(const DeleteArg& arg ){
    DROPBOX_BLOCKING_CALL(deleteOperation_Async, Metadata, arg);
}

void FilesRoutes::deleteOperation_Async(
    const DeleteArg& arg,
    std::function<void(std::unique_ptr<Metadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DeleteArg,
        std::unique_ptr<Metadata>,
        Metadata::factory,
        DeleteErrorException>
        ("2/files/delete",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::download(const DownloadArg& arg , QIODevice* data){
    DATA_DBC(download_Async, FileMetadata, arg, data);
}

void FilesRoutes::download_Async(
    const DownloadArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->downloadStyle<
        DownloadArg,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        DownloadErrorException>
        ("2/files/download",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<Metadata> FilesRoutes::getMetadata(const GetMetadataArg& arg ){
    DROPBOX_BLOCKING_CALL(getMetadata_Async, Metadata, arg);
}

void FilesRoutes::getMetadata_Async(
    const GetMetadataArg& arg,
    std::function<void(std::unique_ptr<Metadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetMetadataArg,
        std::unique_ptr<Metadata>,
        Metadata::factory,
        GetMetadataErrorException>
        ("2/files/get_metadata",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::getPreview(const PreviewArg& arg , QIODevice* data){
    DATA_DBC(getPreview_Async, FileMetadata, arg, data);
}

void FilesRoutes::getPreview_Async(
    const PreviewArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->downloadStyle<
        PreviewArg,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        PreviewErrorException>
        ("2/files/get_preview",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetTemporaryLinkResult> FilesRoutes::getTemporaryLink(const GetTemporaryLinkArg& arg ){
    DROPBOX_BLOCKING_CALL(getTemporaryLink_Async, GetTemporaryLinkResult, arg);
}

void FilesRoutes::getTemporaryLink_Async(
    const GetTemporaryLinkArg& arg,
    std::function<void(std::unique_ptr<GetTemporaryLinkResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetTemporaryLinkArg,
        std::unique_ptr<GetTemporaryLinkResult>,
        GetTemporaryLinkResult::factory,
        GetTemporaryLinkErrorException>
        ("2/files/get_temporary_link",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::getThumbnail(const ThumbnailArg& arg , QIODevice* data){
    DATA_DBC(getThumbnail_Async, FileMetadata, arg, data);
}

void FilesRoutes::getThumbnail_Async(
    const ThumbnailArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->downloadStyle<
        ThumbnailArg,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        ThumbnailErrorException>
        ("2/files/get_thumbnail",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolder(const ListFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(listFolder_Async, ListFolderResult, arg);
}

void FilesRoutes::listFolder_Async(
    const ListFolderArg& arg,
    std::function<void(std::unique_ptr<ListFolderResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderArg,
        std::unique_ptr<ListFolderResult>,
        ListFolderResult::factory,
        ListFolderErrorException>
        ("2/files/list_folder",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFolderResult> FilesRoutes::listFolderContinue(const ListFolderContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listFolderContinue_Async, ListFolderResult, arg);
}

void FilesRoutes::listFolderContinue_Async(
    const ListFolderContinueArg& arg,
    std::function<void(std::unique_ptr<ListFolderResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderContinueArg,
        std::unique_ptr<ListFolderResult>,
        ListFolderResult::factory,
        ListFolderContinueErrorException>
        ("2/files/list_folder/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFolderGetLatestCursorResult> FilesRoutes::listFolderGetLatestCursor(const ListFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(listFolderGetLatestCursor_Async, ListFolderGetLatestCursorResult, arg);
}

void FilesRoutes::listFolderGetLatestCursor_Async(
    const ListFolderArg& arg,
    std::function<void(std::unique_ptr<ListFolderGetLatestCursorResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderArg,
        std::unique_ptr<ListFolderGetLatestCursorResult>,
        ListFolderGetLatestCursorResult::factory,
        ListFolderErrorException>
        ("2/files/list_folder/get_latest_cursor",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFolderLongpollResult> FilesRoutes::listFolderLongpoll(const ListFolderLongpollArg& arg ){
    DROPBOX_BLOCKING_CALL(listFolderLongpoll_Async, ListFolderLongpollResult, arg);
}

void FilesRoutes::listFolderLongpoll_Async(
    const ListFolderLongpollArg& arg,
    std::function<void(std::unique_ptr<ListFolderLongpollResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderLongpollArg,
        std::unique_ptr<ListFolderLongpollResult>,
        ListFolderLongpollResult::factory,
        ListFolderLongpollErrorException>
        ("2/files/list_folder/longpoll",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListRevisionsResult> FilesRoutes::listRevisions(const ListRevisionsArg& arg ){
    DROPBOX_BLOCKING_CALL(listRevisions_Async, ListRevisionsResult, arg);
}

void FilesRoutes::listRevisions_Async(
    const ListRevisionsArg& arg,
    std::function<void(std::unique_ptr<ListRevisionsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListRevisionsArg,
        std::unique_ptr<ListRevisionsResult>,
        ListRevisionsResult::factory,
        ListRevisionsErrorException>
        ("2/files/list_revisions",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<Metadata> FilesRoutes::move(const RelocationArg& arg ){
    DROPBOX_BLOCKING_CALL(move_Async, Metadata, arg);
}

void FilesRoutes::move_Async(
    const RelocationArg& arg,
    std::function<void(std::unique_ptr<Metadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RelocationArg,
        std::unique_ptr<Metadata>,
        Metadata::factory,
        RelocationErrorException>
        ("2/files/move",
        arg,
        completed_callback,
        failed_callback);
}

void FilesRoutes::permanentlyDelete(const DeleteArg& arg ){
    VOID_RESULT_DBC(permanentlyDelete_Async, arg);
}

void FilesRoutes::permanentlyDelete_Async(
    const DeleteArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DeleteArg,
        DeleteErrorException>
        ("2/files/permanently_delete",
        arg,
        completed_callback,
        failed_callback);
}

void FilesRoutes::propertiesAdd(const PropertyGroupWithPath& arg ){
    VOID_RESULT_DBC(propertiesAdd_Async, arg);
}

void FilesRoutes::propertiesAdd_Async(
    const PropertyGroupWithPath& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        PropertyGroupWithPath,
        AddPropertiesErrorException>
        ("2/files/properties/add",
        arg,
        completed_callback,
        failed_callback);
}

void FilesRoutes::propertiesOverwrite(const PropertyGroupWithPath& arg ){
    VOID_RESULT_DBC(propertiesOverwrite_Async, arg);
}

void FilesRoutes::propertiesOverwrite_Async(
    const PropertyGroupWithPath& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        PropertyGroupWithPath,
        InvalidPropertyGroupErrorException>
        ("2/files/properties/overwrite",
        arg,
        completed_callback,
        failed_callback);
}

void FilesRoutes::propertiesRemove(const RemovePropertiesArg& arg ){
    VOID_RESULT_DBC(propertiesRemove_Async, arg);
}

void FilesRoutes::propertiesRemove_Async(
    const RemovePropertiesArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RemovePropertiesArg,
        RemovePropertiesErrorException>
        ("2/files/properties/remove",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::GetPropertyTemplateResult> FilesRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateGet_Async, properties::GetPropertyTemplateResult, arg);
}

void FilesRoutes::propertiesTemplateGet_Async(
    const properties::GetPropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<properties::GetPropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        properties::GetPropertyTemplateArg,
        std::unique_ptr<properties::GetPropertyTemplateResult>,
        properties::GetPropertyTemplateResult::factory,
        PropertyTemplateErrorException>
        ("2/files/properties/template/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::ListPropertyTemplateIds> FilesRoutes::propertiesTemplateList(void){
    VOID_ARG_DBC(propertiesTemplateList_Async, properties::ListPropertyTemplateIds);
}

void FilesRoutes::propertiesTemplateList_Async(
    std::function<void(std::unique_ptr<properties::ListPropertyTemplateIds>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        std::unique_ptr<properties::ListPropertyTemplateIds>,
        properties::ListPropertyTemplateIds::factory,
        PropertyTemplateErrorException>
        ("2/files/properties/template/list",
        completed_callback,
        failed_callback);
}

void FilesRoutes::propertiesUpdate(const UpdatePropertyGroupArg& arg ){
    VOID_RESULT_DBC(propertiesUpdate_Async, arg);
}

void FilesRoutes::propertiesUpdate_Async(
    const UpdatePropertyGroupArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UpdatePropertyGroupArg,
        UpdatePropertiesErrorException>
        ("2/files/properties/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::restore(const RestoreArg& arg ){
    DROPBOX_BLOCKING_CALL(restore_Async, FileMetadata, arg);
}

void FilesRoutes::restore_Async(
    const RestoreArg& arg,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RestoreArg,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        RestoreErrorException>
        ("2/files/restore",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SaveUrlResult> FilesRoutes::saveUrl(const SaveUrlArg& arg ){
    DROPBOX_BLOCKING_CALL(saveUrl_Async, SaveUrlResult, arg);
}

void FilesRoutes::saveUrl_Async(
    const SaveUrlArg& arg,
    std::function<void(std::unique_ptr<SaveUrlResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        SaveUrlArg,
        std::unique_ptr<SaveUrlResult>,
        SaveUrlResult::factory,
        SaveUrlErrorException>
        ("2/files/save_url",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SaveUrlJobStatus> FilesRoutes::saveUrlCheckJobStatus(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(saveUrlCheckJobStatus_Async, SaveUrlJobStatus, arg);
}

void FilesRoutes::saveUrlCheckJobStatus_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<SaveUrlJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<SaveUrlJobStatus>,
        SaveUrlJobStatus::factory,
        PollErrorException>
        ("2/files/save_url/check_job_status",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SearchResult> FilesRoutes::search(const SearchArg& arg ){
    DROPBOX_BLOCKING_CALL(search_Async, SearchResult, arg);
}

void FilesRoutes::search_Async(
    const SearchArg& arg,
    std::function<void(std::unique_ptr<SearchResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        SearchArg,
        std::unique_ptr<SearchResult>,
        SearchResult::factory,
        SearchErrorException>
        ("2/files/search",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::upload(const CommitInfo& arg , QIODevice* data){
    DATA_DBC(upload_Async, FileMetadata, arg, data);
}

void FilesRoutes::upload_Async(
    const CommitInfo& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        CommitInfo,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        UploadErrorException>
        ("2/files/upload",
        arg,
        data,
        completed_callback,
        failed_callback);
}

void FilesRoutes::uploadSessionAppend(const UploadSessionCursor& arg , QIODevice* data){
    VOID_RESULT_ARG_WITH_DATA_DBC(uploadSessionAppend_Async, arg, data);
}

void FilesRoutes::uploadSessionAppend_Async(
    const UploadSessionCursor& arg,
    QIODevice* data,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        UploadSessionCursor,
        UploadSessionLookupErrorException>
        ("2/files/upload_session/append",
        arg,
        data,
        completed_callback,
        failed_callback);
}

void FilesRoutes::uploadSessionAppendV2(const UploadSessionAppendArg& arg , QIODevice* data){
    VOID_RESULT_ARG_WITH_DATA_DBC(uploadSessionAppendV2_Async, arg, data);
}

void FilesRoutes::uploadSessionAppendV2_Async(
    const UploadSessionAppendArg& arg,
    QIODevice* data,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        UploadSessionAppendArg,
        UploadSessionLookupErrorException>
        ("2/files/upload_session/append_v2",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMetadata> FilesRoutes::uploadSessionFinish(const UploadSessionFinishArg& arg , QIODevice* data){
    DATA_DBC(uploadSessionFinish_Async, FileMetadata, arg, data);
}

void FilesRoutes::uploadSessionFinish_Async(
    const UploadSessionFinishArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<FileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        UploadSessionFinishArg,
        std::unique_ptr<FileMetadata>,
        FileMetadata::factory,
        UploadSessionFinishErrorException>
        ("2/files/upload_session/finish",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> FilesRoutes::uploadSessionFinishBatch(const UploadSessionFinishBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(uploadSessionFinishBatch_Async, async::LaunchEmptyResult, arg);
}

void FilesRoutes::uploadSessionFinishBatch_Async(
    const UploadSessionFinishBatchArg& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UploadSessionFinishBatchArg,
        std::unique_ptr<async::LaunchEmptyResult>,
        async::LaunchEmptyResult::factory,
        DropboxException>
        ("2/files/upload_session/finish_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<UploadSessionFinishBatchJobStatus> FilesRoutes::uploadSessionFinishBatchCheck(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(uploadSessionFinishBatchCheck_Async, UploadSessionFinishBatchJobStatus, arg);
}

void FilesRoutes::uploadSessionFinishBatchCheck_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<UploadSessionFinishBatchJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<UploadSessionFinishBatchJobStatus>,
        UploadSessionFinishBatchJobStatus::factory,
        PollErrorException>
        ("2/files/upload_session/finish_batch/check",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<UploadSessionStartResult> FilesRoutes::uploadSessionStart(const UploadSessionStartArg& arg , QIODevice* data){
    DATA_DBC(uploadSessionStart_Async, UploadSessionStartResult, arg, data);
}

void FilesRoutes::uploadSessionStart_Async(
    const UploadSessionStartArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<UploadSessionStartResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->uploadStyle<
        UploadSessionStartArg,
        std::unique_ptr<UploadSessionStartResult>,
        UploadSessionStartResult::factory,
        DropboxException>
        ("2/files/upload_session/start",
        arg,
        data,
        completed_callback,
        failed_callback);
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
