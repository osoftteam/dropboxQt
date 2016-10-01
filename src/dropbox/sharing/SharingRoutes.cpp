/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/sharing/SharingRoutes.h"
#include "dropbox/endpoint/Endpoint.h"

namespace dropboxQt{

namespace sharing{
SharingRoutes::SharingRoutes(Endpoint* p):m_end_point(p){
}

std::list <FileMemberActionResult> SharingRoutes::addFileMember(const AddFileMemberArgs& arg ){
    return m_end_point->rpcStyle<AddFileMemberArgs, std::list <FileMemberActionResult>, ListFromJsonLoader<std::list <FileMemberActionResult>, FileMemberActionResult>, AddFileMemberErrorException>("2/sharing/add_file_member", arg);
}

void SharingRoutes::addFolderMember(const AddFolderMemberArg& arg ){
    m_end_point->rpcStyle<AddFolderMemberArg, std::unique_ptr<VoidType>, VoidType, AddFolderMemberErrorException>("2/sharing/add_folder_member", arg);
}

std::unique_ptr<FileMemberActionResult> SharingRoutes::changeFileMemberAccess(const ChangeFileMemberAccessArgs& arg ){
    return m_end_point->rpcStyle<ChangeFileMemberAccessArgs, std::unique_ptr<FileMemberActionResult>, FileMemberActionResult::factory, FileMemberActionErrorException>("2/sharing/change_file_member_access", arg);
}

std::unique_ptr<JobStatus> SharingRoutes::checkJobStatus(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<JobStatus>, JobStatus::factory, PollErrorException>("2/sharing/check_job_status", arg);
}

std::unique_ptr<RemoveMemberJobStatus> SharingRoutes::checkRemoveMemberJobStatus(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<RemoveMemberJobStatus>, RemoveMemberJobStatus::factory, PollErrorException>("2/sharing/check_remove_member_job_status", arg);
}

std::unique_ptr<ShareFolderJobStatus> SharingRoutes::checkShareJobStatus(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<ShareFolderJobStatus>, ShareFolderJobStatus::factory, PollErrorException>("2/sharing/check_share_job_status", arg);
}

std::unique_ptr<PathLinkMetadata> SharingRoutes::createSharedLink(const CreateSharedLinkArg& arg ){
    return m_end_point->rpcStyle<CreateSharedLinkArg, std::unique_ptr<PathLinkMetadata>, PathLinkMetadata::factory, CreateSharedLinkErrorException>("2/sharing/create_shared_link", arg);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg& arg ){
    return m_end_point->rpcStyle<CreateSharedLinkWithSettingsArg, std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, CreateSharedLinkWithSettingsErrorException>("2/sharing/create_shared_link_with_settings", arg);
}

std::unique_ptr<SharedFileMetadata> SharingRoutes::getFileMetadata(const GetFileMetadataArg& arg ){
    return m_end_point->rpcStyle<GetFileMetadataArg, std::unique_ptr<SharedFileMetadata>, SharedFileMetadata::factory, GetFileMetadataErrorException>("2/sharing/get_file_metadata", arg);
}

std::list <GetFileMetadataBatchResult> SharingRoutes::getFileMetadataBatch(const GetFileMetadataBatchArg& arg ){
    return m_end_point->rpcStyle<GetFileMetadataBatchArg, std::list <GetFileMetadataBatchResult>, ListFromJsonLoader<std::list <GetFileMetadataBatchResult>, GetFileMetadataBatchResult>, SharingUserErrorException>("2/sharing/get_file_metadata/batch", arg);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::getFolderMetadata(const GetMetadataArgs& arg ){
    return m_end_point->rpcStyle<GetMetadataArgs, std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, SharedFolderAccessErrorException>("2/sharing/get_folder_metadata", arg);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkFile(const GetSharedLinkMetadataArg& arg , QIODevice* writeTo){
    return m_end_point->downloadStyle<GetSharedLinkMetadataArg, std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, GetSharedLinkFileErrorException>("2/sharing/get_shared_link_file", arg, writeTo);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkMetadata(const GetSharedLinkMetadataArg& arg ){
    return m_end_point->rpcStyle<GetSharedLinkMetadataArg, std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, SharedLinkErrorException>("2/sharing/get_shared_link_metadata", arg);
}

std::unique_ptr<GetSharedLinksResult> SharingRoutes::getSharedLinks(const GetSharedLinksArg& arg ){
    return m_end_point->rpcStyle<GetSharedLinksArg, std::unique_ptr<GetSharedLinksResult>, GetSharedLinksResult::factory, GetSharedLinksErrorException>("2/sharing/get_shared_links", arg);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembers(const ListFileMembersArg& arg ){
    return m_end_point->rpcStyle<ListFileMembersArg, std::unique_ptr<SharedFileMembers>, SharedFileMembers::factory, ListFileMembersErrorException>("2/sharing/list_file_members", arg);
}

std::list <ListFileMembersBatchResult> SharingRoutes::listFileMembersBatch(const ListFileMembersBatchArg& arg ){
    return m_end_point->rpcStyle<ListFileMembersBatchArg, std::list <ListFileMembersBatchResult>, ListFromJsonLoader<std::list <ListFileMembersBatchResult>, ListFileMembersBatchResult>, SharingUserErrorException>("2/sharing/list_file_members/batch", arg);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembersContinue(const ListFileMembersContinueArg& arg ){
    return m_end_point->rpcStyle<ListFileMembersContinueArg, std::unique_ptr<SharedFileMembers>, SharedFileMembers::factory, ListFileMembersContinueErrorException>("2/sharing/list_file_members/continue", arg);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembers(const ListFolderMembersArgs& arg ){
    return m_end_point->rpcStyle<ListFolderMembersArgs, std::unique_ptr<SharedFolderMembers>, SharedFolderMembers::factory, SharedFolderAccessErrorException>("2/sharing/list_folder_members", arg);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembersContinue(const ListFolderMembersContinueArg& arg ){
    return m_end_point->rpcStyle<ListFolderMembersContinueArg, std::unique_ptr<SharedFolderMembers>, SharedFolderMembers::factory, ListFolderMembersContinueErrorException>("2/sharing/list_folder_members/continue", arg);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFolders(const ListFoldersArgs& arg ){
    return m_end_point->rpcStyle<ListFoldersArgs, std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, NotAnException>("2/sharing/list_folders", arg);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFoldersContinue(const ListFoldersContinueArg& arg ){
    return m_end_point->rpcStyle<ListFoldersContinueArg, std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, ListFoldersContinueErrorException>("2/sharing/list_folders/continue", arg);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFolders(const ListFoldersArgs& arg ){
    return m_end_point->rpcStyle<ListFoldersArgs, std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, NotAnException>("2/sharing/list_mountable_folders", arg);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFoldersContinue(const ListFoldersContinueArg& arg ){
    return m_end_point->rpcStyle<ListFoldersContinueArg, std::unique_ptr<ListFoldersResult>, ListFoldersResult::factory, ListFoldersContinueErrorException>("2/sharing/list_mountable_folders/continue", arg);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFiles(const ListFilesArg& arg ){
    return m_end_point->rpcStyle<ListFilesArg, std::unique_ptr<ListFilesResult>, ListFilesResult::factory, SharingUserErrorException>("2/sharing/list_received_files", arg);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFilesContinue(const ListFilesContinueArg& arg ){
    return m_end_point->rpcStyle<ListFilesContinueArg, std::unique_ptr<ListFilesResult>, ListFilesResult::factory, ListFilesContinueErrorException>("2/sharing/list_received_files/continue", arg);
}

std::unique_ptr<ListSharedLinksResult> SharingRoutes::listSharedLinks(const ListSharedLinksArg& arg ){
    return m_end_point->rpcStyle<ListSharedLinksArg, std::unique_ptr<ListSharedLinksResult>, ListSharedLinksResult::factory, ListSharedLinksErrorException>("2/sharing/list_shared_links", arg);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::modifySharedLinkSettings(const ModifySharedLinkSettingsArgs& arg ){
    return m_end_point->rpcStyle<ModifySharedLinkSettingsArgs, std::unique_ptr<SharedLinkMetadata>, SharedLinkMetadata::factory, ModifySharedLinkSettingsErrorException>("2/sharing/modify_shared_link_settings", arg);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::mountFolder(const MountFolderArg& arg ){
    return m_end_point->rpcStyle<MountFolderArg, std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, MountFolderErrorException>("2/sharing/mount_folder", arg);
}

void SharingRoutes::relinquishFileMembership(const RelinquishFileMembershipArg& arg ){
    m_end_point->rpcStyle<RelinquishFileMembershipArg, std::unique_ptr<VoidType>, VoidType, RelinquishFileMembershipErrorException>("2/sharing/relinquish_file_membership", arg);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::relinquishFolderMembership(const RelinquishFolderMembershipArg& arg ){
    return m_end_point->rpcStyle<RelinquishFolderMembershipArg, std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, RelinquishFolderMembershipErrorException>("2/sharing/relinquish_folder_membership", arg);
}

std::unique_ptr<FileMemberActionIndividualResult> SharingRoutes::removeFileMember(const RemoveFileMemberArg& arg ){
    return m_end_point->rpcStyle<RemoveFileMemberArg, std::unique_ptr<FileMemberActionIndividualResult>, FileMemberActionIndividualResult::factory, RemoveFileMemberErrorException>("2/sharing/remove_file_member", arg);
}

std::unique_ptr<FileMemberRemoveActionResult> SharingRoutes::removeFileMember2(const RemoveFileMemberArg& arg ){
    return m_end_point->rpcStyle<RemoveFileMemberArg, std::unique_ptr<FileMemberRemoveActionResult>, FileMemberRemoveActionResult::factory, RemoveFileMemberErrorException>("2/sharing/remove_file_member_2", arg);
}

std::unique_ptr<async::LaunchResultBase> SharingRoutes::removeFolderMember(const RemoveFolderMemberArg& arg ){
    return m_end_point->rpcStyle<RemoveFolderMemberArg, std::unique_ptr<async::LaunchResultBase>, async::LaunchResultBase::factory, RemoveFolderMemberErrorException>("2/sharing/remove_folder_member", arg);
}

void SharingRoutes::revokeSharedLink(const RevokeSharedLinkArg& arg ){
    m_end_point->rpcStyle<RevokeSharedLinkArg, std::unique_ptr<VoidType>, VoidType, RevokeSharedLinkErrorException>("2/sharing/revoke_shared_link", arg);
}

std::unique_ptr<ShareFolderLaunch> SharingRoutes::shareFolder(const ShareFolderArg& arg ){
    return m_end_point->rpcStyle<ShareFolderArg, std::unique_ptr<ShareFolderLaunch>, ShareFolderLaunch::factory, ShareFolderErrorException>("2/sharing/share_folder", arg);
}

void SharingRoutes::transferFolder(const TransferFolderArg& arg ){
    m_end_point->rpcStyle<TransferFolderArg, std::unique_ptr<VoidType>, VoidType, TransferFolderErrorException>("2/sharing/transfer_folder", arg);
}

void SharingRoutes::unmountFolder(const UnmountFolderArg& arg ){
    m_end_point->rpcStyle<UnmountFolderArg, std::unique_ptr<VoidType>, VoidType, UnmountFolderErrorException>("2/sharing/unmount_folder", arg);
}

void SharingRoutes::unshareFile(const UnshareFileArg& arg ){
    m_end_point->rpcStyle<UnshareFileArg, std::unique_ptr<VoidType>, VoidType, UnshareFileErrorException>("2/sharing/unshare_file", arg);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::unshareFolder(const UnshareFolderArg& arg ){
    return m_end_point->rpcStyle<UnshareFolderArg, std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, UnshareFolderErrorException>("2/sharing/unshare_folder", arg);
}

std::unique_ptr<MemberAccessLevelResult> SharingRoutes::updateFolderMember(const UpdateFolderMemberArg& arg ){
    return m_end_point->rpcStyle<UpdateFolderMemberArg, std::unique_ptr<MemberAccessLevelResult>, MemberAccessLevelResult::factory, UpdateFolderMemberErrorException>("2/sharing/update_folder_member", arg);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::updateFolderPolicy(const UpdateFolderPolicyArg& arg ){
    return m_end_point->rpcStyle<UpdateFolderPolicyArg, std::unique_ptr<SharedFolderMetadata>, SharedFolderMetadata::factory, UpdateFolderPolicyErrorException>("2/sharing/update_folder_policy", arg);
}

IMPLEMENT_API_ERR_EXCEPTION(AddFileMemberErrorException, sharing::AddFileMemberError);
IMPLEMENT_API_ERR_EXCEPTION(AddFolderMemberErrorException, sharing::AddFolderMemberError);
IMPLEMENT_API_ERR_EXCEPTION(FileMemberActionErrorException, sharing::FileMemberActionError);
IMPLEMENT_API_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_API_ERR_EXCEPTION(CreateSharedLinkErrorException, sharing::CreateSharedLinkError);
IMPLEMENT_API_ERR_EXCEPTION(CreateSharedLinkWithSettingsErrorException, sharing::CreateSharedLinkWithSettingsError);
IMPLEMENT_API_ERR_EXCEPTION(GetFileMetadataErrorException, sharing::GetFileMetadataError);
IMPLEMENT_API_ERR_EXCEPTION(SharingUserErrorException, sharing::SharingUserError);
IMPLEMENT_API_ERR_EXCEPTION(SharedFolderAccessErrorException, sharing::SharedFolderAccessError);
IMPLEMENT_API_ERR_EXCEPTION(GetSharedLinkFileErrorException, sharing::GetSharedLinkFileError);
IMPLEMENT_API_ERR_EXCEPTION(SharedLinkErrorException, sharing::SharedLinkError);
IMPLEMENT_API_ERR_EXCEPTION(GetSharedLinksErrorException, sharing::GetSharedLinksError);
IMPLEMENT_API_ERR_EXCEPTION(ListFileMembersErrorException, sharing::ListFileMembersError);
IMPLEMENT_API_ERR_EXCEPTION(ListFileMembersContinueErrorException, sharing::ListFileMembersContinueError);
IMPLEMENT_API_ERR_EXCEPTION(ListFolderMembersContinueErrorException, sharing::ListFolderMembersContinueError);
IMPLEMENT_API_ERR_EXCEPTION(ListFoldersContinueErrorException, sharing::ListFoldersContinueError);
IMPLEMENT_API_ERR_EXCEPTION(ListFilesContinueErrorException, sharing::ListFilesContinueError);
IMPLEMENT_API_ERR_EXCEPTION(ListSharedLinksErrorException, sharing::ListSharedLinksError);
IMPLEMENT_API_ERR_EXCEPTION(ModifySharedLinkSettingsErrorException, sharing::ModifySharedLinkSettingsError);
IMPLEMENT_API_ERR_EXCEPTION(MountFolderErrorException, sharing::MountFolderError);
IMPLEMENT_API_ERR_EXCEPTION(RelinquishFileMembershipErrorException, sharing::RelinquishFileMembershipError);
IMPLEMENT_API_ERR_EXCEPTION(RelinquishFolderMembershipErrorException, sharing::RelinquishFolderMembershipError);
IMPLEMENT_API_ERR_EXCEPTION(RemoveFileMemberErrorException, sharing::RemoveFileMemberError);
IMPLEMENT_API_ERR_EXCEPTION(RemoveFolderMemberErrorException, sharing::RemoveFolderMemberError);
IMPLEMENT_API_ERR_EXCEPTION(RevokeSharedLinkErrorException, sharing::RevokeSharedLinkError);
IMPLEMENT_API_ERR_EXCEPTION(ShareFolderErrorException, sharing::ShareFolderError);
IMPLEMENT_API_ERR_EXCEPTION(TransferFolderErrorException, sharing::TransferFolderError);
IMPLEMENT_API_ERR_EXCEPTION(UnmountFolderErrorException, sharing::UnmountFolderError);
IMPLEMENT_API_ERR_EXCEPTION(UnshareFileErrorException, sharing::UnshareFileError);
IMPLEMENT_API_ERR_EXCEPTION(UnshareFolderErrorException, sharing::UnshareFolderError);
IMPLEMENT_API_ERR_EXCEPTION(UpdateFolderMemberErrorException, sharing::UpdateFolderMemberError);
IMPLEMENT_API_ERR_EXCEPTION(UpdateFolderPolicyErrorException, sharing::UpdateFolderPolicyError);
}//sharing
}//dropboxQt
