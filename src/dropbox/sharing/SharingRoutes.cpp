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
    return m_end_point->rpcStyle<std::list <FileMemberActionResult>, ListFromJsonLoader<std::list <FileMemberActionResult>, FileMemberActionResult>, AddFileMemberErrorException>("2/sharing/add_file_member", js);
}

void SharingRoutes::addFolderMember(const AddFolderMemberArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, AddFolderMemberErrorException>("2/sharing/add_folder_member", js);
}

std::unique_ptr<FileMemberActionResult> SharingRoutes::changeFileMemberAccess(const ChangeFileMemberAccessArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<FileMemberActionResult>, FileMemberActionResult::factory, FileMemberActionErrorException>("2/sharing/change_file_member_access", js);
}

std::unique_ptr<JobStatus> SharingRoutes::checkJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<JobStatus>, JobStatus::factory, PollErrorException>("2/sharing/check_job_status", js);
}

std::unique_ptr<RemoveMemberJobStatus> SharingRoutes::checkRemoveMemberJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<RemoveMemberJobStatus>, RemoveMemberJobStatus::factory, PollErrorException>("2/sharing/check_remove_member_job_status", js);
}

std::unique_ptr<ShareFolderJobStatus> SharingRoutes::checkShareJobStatus(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ShareFolderJobStatus>, ShareFolderJobStatus::factory, PollErrorException>("2/sharing/check_share_job_status", js);
}

std::unique_ptr<PathLinkMetadata> SharingRoutes::createSharedLink(const CreateSharedLinkArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<PathLinkMetadata>, PathLinkMetadata::factory, CreateSharedLinkErrorException>("2/sharing/create_shared_link", js);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, CreateSharedLinkWithSettingsErrorException>("2/sharing/create_shared_link_with_settings", js);
}

std::unique_ptr<SharedFileMetadata> SharingRoutes::getFileMetadata(const GetFileMetadataArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFileMetadata>, SharedFileMetadata::factory, GetFileMetadataErrorException>("2/sharing/get_file_metadata", js);
}

std::list <GetFileMetadataBatchResult> SharingRoutes::getFileMetadataBatch(const GetFileMetadataBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <GetFileMetadataBatchResult>, ListFromJsonLoader<std::list <GetFileMetadataBatchResult>, GetFileMetadataBatchResult>, SharingUserErrorException>("2/sharing/get_file_metadata/batch", js);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::getFolderMetadata(const GetMetadataArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, SharedFolderAccessErrorException>("2/sharing/get_folder_metadata", js);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkFile(const GetSharedLinkMetadataArg& arg, QIODevice* out){
    QJsonObject js(arg);
    return m_end_point->downloadStyle< std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, GetSharedLinkFileErrorException>("2/sharing/get_shared_link_file", js, out);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkMetadata(const GetSharedLinkMetadataArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, SharedLinkErrorException>("2/sharing/get_shared_link_metadata", js);
}

std::unique_ptr<GetSharedLinksResult> SharingRoutes::getSharedLinks(const GetSharedLinksArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetSharedLinksResult>, GetSharedLinksResult::factory, GetSharedLinksErrorException>("2/sharing/get_shared_links", js);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembers(const ListFileMembersArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFileMembers>, SharedFileMembers::factory, ListFileMembersErrorException>("2/sharing/list_file_members", js);
}

std::list <ListFileMembersBatchResult> SharingRoutes::listFileMembersBatch(const ListFileMembersBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <ListFileMembersBatchResult>, ListFromJsonLoader<std::list <ListFileMembersBatchResult>, ListFileMembersBatchResult>, SharingUserErrorException>("2/sharing/list_file_members/batch", js);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembersContinue(const ListFileMembersContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFileMembers>, SharedFileMembers::factory, ListFileMembersContinueErrorException>("2/sharing/list_file_members/continue", js);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembers(const ListFolderMembersArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFolderMembers>, SharedFolderMembers::factory, SharedFolderAccessErrorException>("2/sharing/list_folder_members", js);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembersContinue(const ListFolderMembersContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFolderMembers>, SharedFolderMembers::factory, ListFolderMembersContinueErrorException>("2/sharing/list_folder_members/continue", js);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFolders(const ListFoldersArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, NotAnException>("2/sharing/list_folders", js);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFoldersContinue(const ListFoldersContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, ListFoldersContinueErrorException>("2/sharing/list_folders/continue", js);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFolders(const ListFoldersArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, NotAnException>("2/sharing/list_mountable_folders", js);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFoldersContinue(const ListFoldersContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, ListFoldersContinueErrorException>("2/sharing/list_mountable_folders/continue", js);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFiles(const ListFilesArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFilesResult>, ListFilesResult::factory, SharingUserErrorException>("2/sharing/list_received_files", js);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFilesContinue(const ListFilesContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListFilesResult>, ListFilesResult::factory, ListFilesContinueErrorException>("2/sharing/list_received_files/continue", js);
}

std::unique_ptr<ListSharedLinksResult> SharingRoutes::listSharedLinks(const ListSharedLinksArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListSharedLinksResult>, ListSharedLinksResult::factory, ListSharedLinksErrorException>("2/sharing/list_shared_links", js);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::modifySharedLinkSettings(const ModifySharedLinkSettingsArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, ModifySharedLinkSettingsErrorException>("2/sharing/modify_shared_link_settings", js);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::mountFolder(const MountFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, MountFolderErrorException>("2/sharing/mount_folder", js);
}

void SharingRoutes::relinquishFileMembership(const RelinquishFileMembershipArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, RelinquishFileMembershipErrorException>("2/sharing/relinquish_file_membership", js);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::relinquishFolderMembership(const RelinquishFolderMembershipArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, RelinquishFolderMembershipErrorException>("2/sharing/relinquish_folder_membership", js);
}

std::unique_ptr<FileMemberActionIndividualResult> SharingRoutes::removeFileMember(const RemoveFileMemberArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<FileMemberActionIndividualResult>, FileMemberActionIndividualResult::factory, RemoveFileMemberErrorException>("2/sharing/remove_file_member", js);
}

std::unique_ptr<FileMemberRemoveActionResult> SharingRoutes::removeFileMember2(const RemoveFileMemberArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<FileMemberRemoveActionResult>, FileMemberRemoveActionResult::factory, RemoveFileMemberErrorException>("2/sharing/remove_file_member_2", js);
}

std::unique_ptr<async::LaunchResultBase> SharingRoutes::removeFolderMember(const RemoveFolderMemberArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchResultBase>, async::LaunchResultBase::factory, RemoveFolderMemberErrorException>("2/sharing/remove_folder_member", js);
}

void SharingRoutes::revokeSharedLink(const RevokeSharedLinkArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, RevokeSharedLinkErrorException>("2/sharing/revoke_shared_link", js);
}

std::unique_ptr<ShareFolderLaunch> SharingRoutes::shareFolder(const ShareFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ShareFolderLaunch>, ShareFolderLaunch::factory, ShareFolderErrorException>("2/sharing/share_folder", js);
}

void SharingRoutes::transferFolder(const TransferFolderArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, TransferFolderErrorException>("2/sharing/transfer_folder", js);
}

void SharingRoutes::unmountFolder(const UnmountFolderArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, UnmountFolderErrorException>("2/sharing/unmount_folder", js);
}

void SharingRoutes::unshareFile(const UnshareFileArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, UnshareFileErrorException>("2/sharing/unshare_file", js);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::unshareFolder(const UnshareFolderArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, UnshareFolderErrorException>("2/sharing/unshare_folder", js);
}

std::unique_ptr<MemberAccessLevelResult> SharingRoutes::updateFolderMember(const UpdateFolderMemberArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MemberAccessLevelResult>, MemberAccessLevelResult::factory, UpdateFolderMemberErrorException>("2/sharing/update_folder_member", js);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::updateFolderPolicy(const UpdateFolderPolicyArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, UpdateFolderPolicyErrorException>("2/sharing/update_folder_policy", js);
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
