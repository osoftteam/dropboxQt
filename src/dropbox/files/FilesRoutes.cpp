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

AlphaGetMetadataErrorException::AlphaGetMetadataErrorException(const files::AlphaGetMetadataError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void AlphaGetMetadataErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::AlphaGetMetadataError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw AlphaGetMetadataErrorException(err, summary, status_code, message);
}

UploadErrorWithPropertiesException::UploadErrorWithPropertiesException(const files::UploadErrorWithProperties& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UploadErrorWithPropertiesException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::UploadErrorWithProperties err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UploadErrorWithPropertiesException(err, summary, status_code, message);
}

RelocationErrorException::RelocationErrorException(const files::RelocationError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RelocationErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::RelocationError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RelocationErrorException(err, summary, status_code, message);
}

GetCopyReferenceErrorException::GetCopyReferenceErrorException(const files::GetCopyReferenceError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetCopyReferenceErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::GetCopyReferenceError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetCopyReferenceErrorException(err, summary, status_code, message);
}

SaveCopyReferenceErrorException::SaveCopyReferenceErrorException(const files::SaveCopyReferenceError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SaveCopyReferenceErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::SaveCopyReferenceError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SaveCopyReferenceErrorException(err, summary, status_code, message);
}

CreateFolderErrorException::CreateFolderErrorException(const files::CreateFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void CreateFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::CreateFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw CreateFolderErrorException(err, summary, status_code, message);
}

DeleteErrorException::DeleteErrorException(const files::DeleteError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void DeleteErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::DeleteError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw DeleteErrorException(err, summary, status_code, message);
}

DownloadErrorException::DownloadErrorException(const files::DownloadError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void DownloadErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::DownloadError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw DownloadErrorException(err, summary, status_code, message);
}

GetMetadataErrorException::GetMetadataErrorException(const files::GetMetadataError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetMetadataErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::GetMetadataError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetMetadataErrorException(err, summary, status_code, message);
}

PreviewErrorException::PreviewErrorException(const files::PreviewError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void PreviewErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::PreviewError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw PreviewErrorException(err, summary, status_code, message);
}

GetTemporaryLinkErrorException::GetTemporaryLinkErrorException(const files::GetTemporaryLinkError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetTemporaryLinkErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::GetTemporaryLinkError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetTemporaryLinkErrorException(err, summary, status_code, message);
}

ThumbnailErrorException::ThumbnailErrorException(const files::ThumbnailError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ThumbnailErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::ThumbnailError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ThumbnailErrorException(err, summary, status_code, message);
}

ListFolderErrorException::ListFolderErrorException(const files::ListFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::ListFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFolderErrorException(err, summary, status_code, message);
}

ListFolderContinueErrorException::ListFolderContinueErrorException(const files::ListFolderContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFolderContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::ListFolderContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFolderContinueErrorException(err, summary, status_code, message);
}


ListFolderLongpollErrorException::ListFolderLongpollErrorException(const files::ListFolderLongpollError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFolderLongpollErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::ListFolderLongpollError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFolderLongpollErrorException(err, summary, status_code, message);
}

ListRevisionsErrorException::ListRevisionsErrorException(const files::ListRevisionsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListRevisionsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::ListRevisionsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListRevisionsErrorException(err, summary, status_code, message);
}



AddPropertiesErrorException::AddPropertiesErrorException(const files::AddPropertiesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void AddPropertiesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::AddPropertiesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw AddPropertiesErrorException(err, summary, status_code, message);
}

InvalidPropertyGroupErrorException::InvalidPropertyGroupErrorException(const files::InvalidPropertyGroupError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void InvalidPropertyGroupErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::InvalidPropertyGroupError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw InvalidPropertyGroupErrorException(err, summary, status_code, message);
}

RemovePropertiesErrorException::RemovePropertiesErrorException(const files::RemovePropertiesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RemovePropertiesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::RemovePropertiesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RemovePropertiesErrorException(err, summary, status_code, message);
}

PropertyTemplateErrorException::PropertyTemplateErrorException(const properties::PropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void PropertyTemplateErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    properties::PropertyTemplateError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw PropertyTemplateErrorException(err, summary, status_code, message);
}


UpdatePropertiesErrorException::UpdatePropertiesErrorException(const files::UpdatePropertiesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UpdatePropertiesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::UpdatePropertiesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UpdatePropertiesErrorException(err, summary, status_code, message);
}

RestoreErrorException::RestoreErrorException(const files::RestoreError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RestoreErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::RestoreError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RestoreErrorException(err, summary, status_code, message);
}

SaveUrlErrorException::SaveUrlErrorException(const files::SaveUrlError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SaveUrlErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::SaveUrlError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SaveUrlErrorException(err, summary, status_code, message);
}

PollErrorException::PollErrorException(const async::PollError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void PollErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    async::PollError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw PollErrorException(err, summary, status_code, message);
}

SearchErrorException::SearchErrorException(const files::SearchError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SearchErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::SearchError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SearchErrorException(err, summary, status_code, message);
}

UploadErrorException::UploadErrorException(const files::UploadError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UploadErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::UploadError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UploadErrorException(err, summary, status_code, message);
}

UploadSessionLookupErrorException::UploadSessionLookupErrorException(const files::UploadSessionLookupError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UploadSessionLookupErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::UploadSessionLookupError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UploadSessionLookupErrorException(err, summary, status_code, message);
}


UploadSessionFinishErrorException::UploadSessionFinishErrorException(const files::UploadSessionFinishError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UploadSessionFinishErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    files::UploadSessionFinishError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UploadSessionFinishErrorException(err, summary, status_code, message);
}




}//files
}//dropboxQt
