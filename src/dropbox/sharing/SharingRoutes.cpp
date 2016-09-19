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

IMPLEMENT_DBOX_ERR_EXCEPTION(AddFileMemberErrorException, sharing::AddFileMemberError);
IMPLEMENT_DBOX_ERR_EXCEPTION(AddFolderMemberErrorException, sharing::AddFolderMemberError);
IMPLEMENT_DBOX_ERR_EXCEPTION(FileMemberActionErrorException, sharing::FileMemberActionError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_DBOX_ERR_EXCEPTION(CreateSharedLinkErrorException, sharing::CreateSharedLinkError);
IMPLEMENT_DBOX_ERR_EXCEPTION(CreateSharedLinkWithSettingsErrorException, sharing::CreateSharedLinkWithSettingsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetFileMetadataErrorException, sharing::GetFileMetadataError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SharingUserErrorException, sharing::SharingUserError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SharedFolderAccessErrorException, sharing::SharedFolderAccessError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetSharedLinkFileErrorException, sharing::GetSharedLinkFileError);
IMPLEMENT_DBOX_ERR_EXCEPTION(SharedLinkErrorException, sharing::SharedLinkError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetSharedLinksErrorException, sharing::GetSharedLinksError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFileMembersErrorException, sharing::ListFileMembersError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFileMembersContinueErrorException, sharing::ListFileMembersContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFolderMembersContinueErrorException, sharing::ListFolderMembersContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFoldersContinueErrorException, sharing::ListFoldersContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListFilesContinueErrorException, sharing::ListFilesContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListSharedLinksErrorException, sharing::ListSharedLinksError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ModifySharedLinkSettingsErrorException, sharing::ModifySharedLinkSettingsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MountFolderErrorException, sharing::MountFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RelinquishFileMembershipErrorException, sharing::RelinquishFileMembershipError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RelinquishFolderMembershipErrorException, sharing::RelinquishFolderMembershipError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RemoveFileMemberErrorException, sharing::RemoveFileMemberError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RemoveFolderMemberErrorException, sharing::RemoveFolderMemberError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RevokeSharedLinkErrorException, sharing::RevokeSharedLinkError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ShareFolderErrorException, sharing::ShareFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(TransferFolderErrorException, sharing::TransferFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UnmountFolderErrorException, sharing::UnmountFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UnshareFileErrorException, sharing::UnshareFileError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UnshareFolderErrorException, sharing::UnshareFolderError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UpdateFolderMemberErrorException, sharing::UpdateFolderMemberError);
IMPLEMENT_DBOX_ERR_EXCEPTION(UpdateFolderPolicyErrorException, sharing::UpdateFolderPolicyError);
}//sharing
}//dropboxQt
