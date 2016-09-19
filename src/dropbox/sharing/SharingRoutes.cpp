/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
#include "dropbox/endpoint/DropboxHost.h"

namespace dropboxQt{

namespace sharing{
SharingRoutes::SharingRoutes(Endpoint* p):m_end_point(p){
}

std::list <FileMemberActionResult> SharingRoutes::addFileMember(const AddFileMemberArgs& arg){
    QJsonObject js(arg);
    std::list <FileMemberActionResult> r = m_end_point->rpcStyle<std::list <FileMemberActionResult>, ListFromJsonLoader<std::list <FileMemberActionResult>, FileMemberActionResult>, AddFileMemberErrorException>("2/sharing/add_file_member", js);
    return r;
}

void SharingRoutes::addFolderMember(const AddFolderMemberArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, AddFolderMemberErrorException>("2/sharing/add_folder_member", js);
}

FileMemberActionResult SharingRoutes::changeFileMemberAccess(const ChangeFileMemberAccessArgs& arg){
    QJsonObject js(arg);
    FileMemberActionResult r = m_end_point->rpcStyle<FileMemberActionResult, StructFromJsonLoader<FileMemberActionResult>, FileMemberActionErrorException>("2/sharing/change_file_member_access", js);
    return r;
}

JobStatus SharingRoutes::checkJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    JobStatus r = m_end_point->rpcStyle<JobStatus, StructFromJsonLoader<JobStatus>, PollErrorException>("2/sharing/check_job_status", js);
    return r;
}

RemoveMemberJobStatus SharingRoutes::checkRemoveMemberJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    RemoveMemberJobStatus r = m_end_point->rpcStyle<RemoveMemberJobStatus, StructFromJsonLoader<RemoveMemberJobStatus>, PollErrorException>("2/sharing/check_remove_member_job_status", js);
    return r;
}

ShareFolderJobStatus SharingRoutes::checkShareJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    ShareFolderJobStatus r = m_end_point->rpcStyle<ShareFolderJobStatus, StructFromJsonLoader<ShareFolderJobStatus>, PollErrorException>("2/sharing/check_share_job_status", js);
    return r;
}

PathLinkMetadata SharingRoutes::createSharedLink(const CreateSharedLinkArg& arg){
    QJsonObject js(arg);
    PathLinkMetadata r = m_end_point->rpcStyle<PathLinkMetadata, StructFromJsonLoader<PathLinkMetadata>, CreateSharedLinkErrorException>("2/sharing/create_shared_link", js);
    return r;
}

SharedLinkMetadata SharingRoutes::createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg& arg){
    QJsonObject js(arg);
    SharedLinkMetadata r = m_end_point->rpcStyle<SharedLinkMetadata, StructFromJsonLoader<SharedLinkMetadata>, CreateSharedLinkWithSettingsErrorException>("2/sharing/create_shared_link_with_settings", js);
    return r;
}

SharedFileMetadata SharingRoutes::getFileMetadata(const GetFileMetadataArg& arg){
    QJsonObject js(arg);
    SharedFileMetadata r = m_end_point->rpcStyle<SharedFileMetadata, StructFromJsonLoader<SharedFileMetadata>, GetFileMetadataErrorException>("2/sharing/get_file_metadata", js);
    return r;
}

std::list <GetFileMetadataBatchResult> SharingRoutes::getFileMetadataBatch(const GetFileMetadataBatchArg& arg){
    QJsonObject js(arg);
    std::list <GetFileMetadataBatchResult> r = m_end_point->rpcStyle<std::list <GetFileMetadataBatchResult>, ListFromJsonLoader<std::list <GetFileMetadataBatchResult>, GetFileMetadataBatchResult>, SharingUserErrorException>("2/sharing/get_file_metadata/batch", js);
    return r;
}

SharedFolderMetadata SharingRoutes::getFolderMetadata(const GetMetadataArgs& arg){
    QJsonObject js(arg);
    SharedFolderMetadata r = m_end_point->rpcStyle<SharedFolderMetadata, StructFromJsonLoader<SharedFolderMetadata>, SharedFolderAccessErrorException>("2/sharing/get_folder_metadata", js);
    return r;
}

SharedLinkMetadata SharingRoutes::getSharedLinkFile(const GetSharedLinkMetadataArg& arg, QIODevice* out){
    QJsonObject js(arg);
    SharedLinkMetadata r = m_end_point->downloadStyle<SharedLinkMetadata, StructFromJsonLoader<SharedLinkMetadata>, GetSharedLinkFileErrorException>("2/sharing/get_shared_link_file", js, out);
    return r;
}

SharedLinkMetadata SharingRoutes::getSharedLinkMetadata(const GetSharedLinkMetadataArg& arg){
    QJsonObject js(arg);
    SharedLinkMetadata r = m_end_point->rpcStyle<SharedLinkMetadata, StructFromJsonLoader<SharedLinkMetadata>, SharedLinkErrorException>("2/sharing/get_shared_link_metadata", js);
    return r;
}

GetSharedLinksResult SharingRoutes::getSharedLinks(const GetSharedLinksArg& arg){
    QJsonObject js(arg);
    GetSharedLinksResult r = m_end_point->rpcStyle<GetSharedLinksResult, StructFromJsonLoader<GetSharedLinksResult>, GetSharedLinksErrorException>("2/sharing/get_shared_links", js);
    return r;
}

SharedFileMembers SharingRoutes::listFileMembers(const ListFileMembersArg& arg){
    QJsonObject js(arg);
    SharedFileMembers r = m_end_point->rpcStyle<SharedFileMembers, StructFromJsonLoader<SharedFileMembers>, ListFileMembersErrorException>("2/sharing/list_file_members", js);
    return r;
}

std::list <ListFileMembersBatchResult> SharingRoutes::listFileMembersBatch(const ListFileMembersBatchArg& arg){
    QJsonObject js(arg);
    std::list <ListFileMembersBatchResult> r = m_end_point->rpcStyle<std::list <ListFileMembersBatchResult>, ListFromJsonLoader<std::list <ListFileMembersBatchResult>, ListFileMembersBatchResult>, SharingUserErrorException>("2/sharing/list_file_members/batch", js);
    return r;
}

SharedFileMembers SharingRoutes::listFileMembersContinue(const ListFileMembersContinueArg& arg){
    QJsonObject js(arg);
    SharedFileMembers r = m_end_point->rpcStyle<SharedFileMembers, StructFromJsonLoader<SharedFileMembers>, ListFileMembersContinueErrorException>("2/sharing/list_file_members/continue", js);
    return r;
}

SharedFolderMembers SharingRoutes::listFolderMembers(const ListFolderMembersArgs& arg){
    QJsonObject js(arg);
    SharedFolderMembers r = m_end_point->rpcStyle<SharedFolderMembers, StructFromJsonLoader<SharedFolderMembers>, SharedFolderAccessErrorException>("2/sharing/list_folder_members", js);
    return r;
}

SharedFolderMembers SharingRoutes::listFolderMembersContinue(const ListFolderMembersContinueArg& arg){
    QJsonObject js(arg);
    SharedFolderMembers r = m_end_point->rpcStyle<SharedFolderMembers, StructFromJsonLoader<SharedFolderMembers>, ListFolderMembersContinueErrorException>("2/sharing/list_folder_members/continue", js);
    return r;
}

ListFoldersResult SharingRoutes::listFolders(const ListFoldersArgs& arg){
    QJsonObject js(arg);
    ListFoldersResult r = m_end_point->rpcStyle<ListFoldersResult, StructFromJsonLoader<ListFoldersResult>, NotAnException>("2/sharing/list_folders", js);
    return r;
}

ListFoldersResult SharingRoutes::listFoldersContinue(const ListFoldersContinueArg& arg){
    QJsonObject js(arg);
    ListFoldersResult r = m_end_point->rpcStyle<ListFoldersResult, StructFromJsonLoader<ListFoldersResult>, ListFoldersContinueErrorException>("2/sharing/list_folders/continue", js);
    return r;
}

ListFoldersResult SharingRoutes::listMountableFolders(const ListFoldersArgs& arg){
    QJsonObject js(arg);
    ListFoldersResult r = m_end_point->rpcStyle<ListFoldersResult, StructFromJsonLoader<ListFoldersResult>, NotAnException>("2/sharing/list_mountable_folders", js);
    return r;
}

ListFoldersResult SharingRoutes::listMountableFoldersContinue(const ListFoldersContinueArg& arg){
    QJsonObject js(arg);
    ListFoldersResult r = m_end_point->rpcStyle<ListFoldersResult, StructFromJsonLoader<ListFoldersResult>, ListFoldersContinueErrorException>("2/sharing/list_mountable_folders/continue", js);
    return r;
}

ListFilesResult SharingRoutes::listReceivedFiles(const ListFilesArg& arg){
    QJsonObject js(arg);
    ListFilesResult r = m_end_point->rpcStyle<ListFilesResult, StructFromJsonLoader<ListFilesResult>, SharingUserErrorException>("2/sharing/list_received_files", js);
    return r;
}

ListFilesResult SharingRoutes::listReceivedFilesContinue(const ListFilesContinueArg& arg){
    QJsonObject js(arg);
    ListFilesResult r = m_end_point->rpcStyle<ListFilesResult, StructFromJsonLoader<ListFilesResult>, ListFilesContinueErrorException>("2/sharing/list_received_files/continue", js);
    return r;
}

ListSharedLinksResult SharingRoutes::listSharedLinks(const ListSharedLinksArg& arg){
    QJsonObject js(arg);
    ListSharedLinksResult r = m_end_point->rpcStyle<ListSharedLinksResult, StructFromJsonLoader<ListSharedLinksResult>, ListSharedLinksErrorException>("2/sharing/list_shared_links", js);
    return r;
}

SharedLinkMetadata SharingRoutes::modifySharedLinkSettings(const ModifySharedLinkSettingsArgs& arg){
    QJsonObject js(arg);
    SharedLinkMetadata r = m_end_point->rpcStyle<SharedLinkMetadata, StructFromJsonLoader<SharedLinkMetadata>, ModifySharedLinkSettingsErrorException>("2/sharing/modify_shared_link_settings", js);
    return r;
}

SharedFolderMetadata SharingRoutes::mountFolder(const MountFolderArg& arg){
    QJsonObject js(arg);
    SharedFolderMetadata r = m_end_point->rpcStyle<SharedFolderMetadata, StructFromJsonLoader<SharedFolderMetadata>, MountFolderErrorException>("2/sharing/mount_folder", js);
    return r;
}

void SharingRoutes::relinquishFileMembership(const RelinquishFileMembershipArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, RelinquishFileMembershipErrorException>("2/sharing/relinquish_file_membership", js);
}

async::LaunchEmptyResult SharingRoutes::relinquishFolderMembership(const RelinquishFolderMembershipArg& arg){
    QJsonObject js(arg);
    async::LaunchEmptyResult r = m_end_point->rpcStyle<async::LaunchEmptyResult, StructFromJsonLoader<async::LaunchEmptyResult>, RelinquishFolderMembershipErrorException>("2/sharing/relinquish_folder_membership", js);
    return r;
}

FileMemberActionIndividualResult SharingRoutes::removeFileMember(const RemoveFileMemberArg& arg){
    QJsonObject js(arg);
    FileMemberActionIndividualResult r = m_end_point->rpcStyle<FileMemberActionIndividualResult, StructFromJsonLoader<FileMemberActionIndividualResult>, RemoveFileMemberErrorException>("2/sharing/remove_file_member", js);
    return r;
}

FileMemberRemoveActionResult SharingRoutes::removeFileMember2(const RemoveFileMemberArg& arg){
    QJsonObject js(arg);
    FileMemberRemoveActionResult r = m_end_point->rpcStyle<FileMemberRemoveActionResult, StructFromJsonLoader<FileMemberRemoveActionResult>, RemoveFileMemberErrorException>("2/sharing/remove_file_member_2", js);
    return r;
}

async::LaunchResultBase SharingRoutes::removeFolderMember(const RemoveFolderMemberArg& arg){
    QJsonObject js(arg);
    async::LaunchResultBase r = m_end_point->rpcStyle<async::LaunchResultBase, StructFromJsonLoader<async::LaunchResultBase>, RemoveFolderMemberErrorException>("2/sharing/remove_folder_member", js);
    return r;
}

void SharingRoutes::revokeSharedLink(const RevokeSharedLinkArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, RevokeSharedLinkErrorException>("2/sharing/revoke_shared_link", js);
}

ShareFolderLaunch SharingRoutes::shareFolder(const ShareFolderArg& arg){
    QJsonObject js(arg);
    ShareFolderLaunch r = m_end_point->rpcStyle<ShareFolderLaunch, StructFromJsonLoader<ShareFolderLaunch>, ShareFolderErrorException>("2/sharing/share_folder", js);
    return r;
}

void SharingRoutes::transferFolder(const TransferFolderArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, TransferFolderErrorException>("2/sharing/transfer_folder", js);
}

void SharingRoutes::unmountFolder(const UnmountFolderArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, UnmountFolderErrorException>("2/sharing/unmount_folder", js);
}

void SharingRoutes::unshareFile(const UnshareFileArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, UnshareFileErrorException>("2/sharing/unshare_file", js);
}

async::LaunchEmptyResult SharingRoutes::unshareFolder(const UnshareFolderArg& arg){
    QJsonObject js(arg);
    async::LaunchEmptyResult r = m_end_point->rpcStyle<async::LaunchEmptyResult, StructFromJsonLoader<async::LaunchEmptyResult>, UnshareFolderErrorException>("2/sharing/unshare_folder", js);
    return r;
}

MemberAccessLevelResult SharingRoutes::updateFolderMember(const UpdateFolderMemberArg& arg){
    QJsonObject js(arg);
    MemberAccessLevelResult r = m_end_point->rpcStyle<MemberAccessLevelResult, StructFromJsonLoader<MemberAccessLevelResult>, UpdateFolderMemberErrorException>("2/sharing/update_folder_member", js);
    return r;
}

SharedFolderMetadata SharingRoutes::updateFolderPolicy(const UpdateFolderPolicyArg& arg){
    QJsonObject js(arg);
    SharedFolderMetadata r = m_end_point->rpcStyle<SharedFolderMetadata, StructFromJsonLoader<SharedFolderMetadata>, UpdateFolderPolicyErrorException>("2/sharing/update_folder_policy", js);
    return r;
}

AddFileMemberErrorException::AddFileMemberErrorException(const sharing::AddFileMemberError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void AddFileMemberErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::AddFileMemberError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw AddFileMemberErrorException(err, summary, status_code, message);
}

AddFolderMemberErrorException::AddFolderMemberErrorException(const sharing::AddFolderMemberError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void AddFolderMemberErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::AddFolderMemberError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw AddFolderMemberErrorException(err, summary, status_code, message);
}

FileMemberActionErrorException::FileMemberActionErrorException(const sharing::FileMemberActionError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void FileMemberActionErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::FileMemberActionError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw FileMemberActionErrorException(err, summary, status_code, message);
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



CreateSharedLinkErrorException::CreateSharedLinkErrorException(const sharing::CreateSharedLinkError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void CreateSharedLinkErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::CreateSharedLinkError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw CreateSharedLinkErrorException(err, summary, status_code, message);
}

CreateSharedLinkWithSettingsErrorException::CreateSharedLinkWithSettingsErrorException(const sharing::CreateSharedLinkWithSettingsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void CreateSharedLinkWithSettingsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::CreateSharedLinkWithSettingsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw CreateSharedLinkWithSettingsErrorException(err, summary, status_code, message);
}

GetFileMetadataErrorException::GetFileMetadataErrorException(const sharing::GetFileMetadataError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetFileMetadataErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::GetFileMetadataError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetFileMetadataErrorException(err, summary, status_code, message);
}

SharingUserErrorException::SharingUserErrorException(const sharing::SharingUserError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SharingUserErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::SharingUserError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SharingUserErrorException(err, summary, status_code, message);
}

SharedFolderAccessErrorException::SharedFolderAccessErrorException(const sharing::SharedFolderAccessError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SharedFolderAccessErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::SharedFolderAccessError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SharedFolderAccessErrorException(err, summary, status_code, message);
}

GetSharedLinkFileErrorException::GetSharedLinkFileErrorException(const sharing::GetSharedLinkFileError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetSharedLinkFileErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::GetSharedLinkFileError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetSharedLinkFileErrorException(err, summary, status_code, message);
}

SharedLinkErrorException::SharedLinkErrorException(const sharing::SharedLinkError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void SharedLinkErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::SharedLinkError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw SharedLinkErrorException(err, summary, status_code, message);
}

GetSharedLinksErrorException::GetSharedLinksErrorException(const sharing::GetSharedLinksError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetSharedLinksErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::GetSharedLinksError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetSharedLinksErrorException(err, summary, status_code, message);
}

ListFileMembersErrorException::ListFileMembersErrorException(const sharing::ListFileMembersError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFileMembersErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListFileMembersError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFileMembersErrorException(err, summary, status_code, message);
}


ListFileMembersContinueErrorException::ListFileMembersContinueErrorException(const sharing::ListFileMembersContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFileMembersContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListFileMembersContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFileMembersContinueErrorException(err, summary, status_code, message);
}


ListFolderMembersContinueErrorException::ListFolderMembersContinueErrorException(const sharing::ListFolderMembersContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFolderMembersContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListFolderMembersContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFolderMembersContinueErrorException(err, summary, status_code, message);
}


ListFoldersContinueErrorException::ListFoldersContinueErrorException(const sharing::ListFoldersContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFoldersContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListFoldersContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFoldersContinueErrorException(err, summary, status_code, message);
}




ListFilesContinueErrorException::ListFilesContinueErrorException(const sharing::ListFilesContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListFilesContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListFilesContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListFilesContinueErrorException(err, summary, status_code, message);
}

ListSharedLinksErrorException::ListSharedLinksErrorException(const sharing::ListSharedLinksError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListSharedLinksErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ListSharedLinksError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListSharedLinksErrorException(err, summary, status_code, message);
}

ModifySharedLinkSettingsErrorException::ModifySharedLinkSettingsErrorException(const sharing::ModifySharedLinkSettingsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ModifySharedLinkSettingsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ModifySharedLinkSettingsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ModifySharedLinkSettingsErrorException(err, summary, status_code, message);
}

MountFolderErrorException::MountFolderErrorException(const sharing::MountFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MountFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::MountFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MountFolderErrorException(err, summary, status_code, message);
}

RelinquishFileMembershipErrorException::RelinquishFileMembershipErrorException(const sharing::RelinquishFileMembershipError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RelinquishFileMembershipErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::RelinquishFileMembershipError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RelinquishFileMembershipErrorException(err, summary, status_code, message);
}

RelinquishFolderMembershipErrorException::RelinquishFolderMembershipErrorException(const sharing::RelinquishFolderMembershipError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RelinquishFolderMembershipErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::RelinquishFolderMembershipError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RelinquishFolderMembershipErrorException(err, summary, status_code, message);
}

RemoveFileMemberErrorException::RemoveFileMemberErrorException(const sharing::RemoveFileMemberError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RemoveFileMemberErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::RemoveFileMemberError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RemoveFileMemberErrorException(err, summary, status_code, message);
}


RemoveFolderMemberErrorException::RemoveFolderMemberErrorException(const sharing::RemoveFolderMemberError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RemoveFolderMemberErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::RemoveFolderMemberError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RemoveFolderMemberErrorException(err, summary, status_code, message);
}

RevokeSharedLinkErrorException::RevokeSharedLinkErrorException(const sharing::RevokeSharedLinkError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RevokeSharedLinkErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::RevokeSharedLinkError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RevokeSharedLinkErrorException(err, summary, status_code, message);
}

ShareFolderErrorException::ShareFolderErrorException(const sharing::ShareFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ShareFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::ShareFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ShareFolderErrorException(err, summary, status_code, message);
}

TransferFolderErrorException::TransferFolderErrorException(const sharing::TransferFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void TransferFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::TransferFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw TransferFolderErrorException(err, summary, status_code, message);
}

UnmountFolderErrorException::UnmountFolderErrorException(const sharing::UnmountFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UnmountFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::UnmountFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UnmountFolderErrorException(err, summary, status_code, message);
}

UnshareFileErrorException::UnshareFileErrorException(const sharing::UnshareFileError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UnshareFileErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::UnshareFileError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UnshareFileErrorException(err, summary, status_code, message);
}

UnshareFolderErrorException::UnshareFolderErrorException(const sharing::UnshareFolderError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UnshareFolderErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::UnshareFolderError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UnshareFolderErrorException(err, summary, status_code, message);
}

UpdateFolderMemberErrorException::UpdateFolderMemberErrorException(const sharing::UpdateFolderMemberError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UpdateFolderMemberErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::UpdateFolderMemberError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UpdateFolderMemberErrorException(err, summary, status_code, message);
}

UpdateFolderPolicyErrorException::UpdateFolderPolicyErrorException(const sharing::UpdateFolderPolicyError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void UpdateFolderPolicyErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    sharing::UpdateFolderPolicyError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw UpdateFolderPolicyErrorException(err, summary, status_code, message);
}

}//sharing
}//dropboxQt
