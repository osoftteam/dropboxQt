/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/sharing/SharingRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
using namespace dropboxQt;
using namespace sharing;

std::unique_ptr<std::list <FileMemberActionResult>> SharingRoutes::addFileMember(const AddFileMemberArgs& arg ){
    DROPBOX_BLOCKING_CALL(addFileMember_Async, std::list <FileMemberActionResult>, arg);
}

void SharingRoutes::addFileMember_Async(
    const AddFileMemberArgs& arg,
    std::function<void(std::unique_ptr<std::list <FileMemberActionResult>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        AddFileMemberArgs,
        std::unique_ptr<std::list <FileMemberActionResult>>,
        ListFromJsonLoader<std::list <FileMemberActionResult>, FileMemberActionResult>,
        AddFileMemberErrorException>
        ("2/sharing/add_file_member",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::addFolderMember(const AddFolderMemberArg& arg ){
    VOID_RESULT_DBC(addFolderMember_Async, arg);
}

void SharingRoutes::addFolderMember_Async(
    const AddFolderMemberArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        AddFolderMemberArg,
        AddFolderMemberErrorException>
        ("2/sharing/add_folder_member",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMemberActionResult> SharingRoutes::changeFileMemberAccess(const ChangeFileMemberAccessArgs& arg ){
    DROPBOX_BLOCKING_CALL(changeFileMemberAccess_Async, FileMemberActionResult, arg);
}

void SharingRoutes::changeFileMemberAccess_Async(
    const ChangeFileMemberAccessArgs& arg,
    std::function<void(std::unique_ptr<FileMemberActionResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ChangeFileMemberAccessArgs,
        std::unique_ptr<FileMemberActionResult>,
        FileMemberActionResult::factory,
        FileMemberActionErrorException>
        ("2/sharing/change_file_member_access",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<JobStatus> SharingRoutes::checkJobStatus(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(checkJobStatus_Async, JobStatus, arg);
}

void SharingRoutes::checkJobStatus_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<JobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<JobStatus>,
        JobStatus::factory,
        PollErrorException>
        ("2/sharing/check_job_status",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<RemoveMemberJobStatus> SharingRoutes::checkRemoveMemberJobStatus(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(checkRemoveMemberJobStatus_Async, RemoveMemberJobStatus, arg);
}

void SharingRoutes::checkRemoveMemberJobStatus_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<RemoveMemberJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<RemoveMemberJobStatus>,
        RemoveMemberJobStatus::factory,
        PollErrorException>
        ("2/sharing/check_remove_member_job_status",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ShareFolderJobStatus> SharingRoutes::checkShareJobStatus(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(checkShareJobStatus_Async, ShareFolderJobStatus, arg);
}

void SharingRoutes::checkShareJobStatus_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<ShareFolderJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<ShareFolderJobStatus>,
        ShareFolderJobStatus::factory,
        PollErrorException>
        ("2/sharing/check_share_job_status",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<PathLinkMetadata> SharingRoutes::createSharedLink(const CreateSharedLinkArg& arg ){
    DROPBOX_BLOCKING_CALL(createSharedLink_Async, PathLinkMetadata, arg);
}

void SharingRoutes::createSharedLink_Async(
    const CreateSharedLinkArg& arg,
    std::function<void(std::unique_ptr<PathLinkMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        CreateSharedLinkArg,
        std::unique_ptr<PathLinkMetadata>,
        PathLinkMetadata::factory,
        CreateSharedLinkErrorException>
        ("2/sharing/create_shared_link",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg& arg ){
    DROPBOX_BLOCKING_CALL(createSharedLinkWithSettings_Async, SharedLinkMetadata, arg);
}

void SharingRoutes::createSharedLinkWithSettings_Async(
    const CreateSharedLinkWithSettingsArg& arg,
    std::function<void(std::unique_ptr<SharedLinkMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        CreateSharedLinkWithSettingsArg,
        std::unique_ptr<SharedLinkMetadata>,
        SharedLinkMetadata::factory,
        CreateSharedLinkWithSettingsErrorException>
        ("2/sharing/create_shared_link_with_settings",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFileMetadata> SharingRoutes::getFileMetadata(const GetFileMetadataArg& arg ){
    DROPBOX_BLOCKING_CALL(getFileMetadata_Async, SharedFileMetadata, arg);
}

void SharingRoutes::getFileMetadata_Async(
    const GetFileMetadataArg& arg,
    std::function<void(std::unique_ptr<SharedFileMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetFileMetadataArg,
        std::unique_ptr<SharedFileMetadata>,
        SharedFileMetadata::factory,
        GetFileMetadataErrorException>
        ("2/sharing/get_file_metadata",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GetFileMetadataBatchResult>> SharingRoutes::getFileMetadataBatch(const GetFileMetadataBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(getFileMetadataBatch_Async, std::list <GetFileMetadataBatchResult>, arg);
}

void SharingRoutes::getFileMetadataBatch_Async(
    const GetFileMetadataBatchArg& arg,
    std::function<void(std::unique_ptr<std::list <GetFileMetadataBatchResult>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetFileMetadataBatchArg,
        std::unique_ptr<std::list <GetFileMetadataBatchResult>>,
        ListFromJsonLoader<std::list <GetFileMetadataBatchResult>, GetFileMetadataBatchResult>,
        SharingUserErrorException>
        ("2/sharing/get_file_metadata/batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::getFolderMetadata(const GetMetadataArgs& arg ){
    DROPBOX_BLOCKING_CALL(getFolderMetadata_Async, SharedFolderMetadata, arg);
}

void SharingRoutes::getFolderMetadata_Async(
    const GetMetadataArgs& arg,
    std::function<void(std::unique_ptr<SharedFolderMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetMetadataArgs,
        std::unique_ptr<SharedFolderMetadata>,
        SharedFolderMetadata::factory,
        SharedFolderAccessErrorException>
        ("2/sharing/get_folder_metadata",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkFile(const GetSharedLinkMetadataArg& arg , QIODevice* data){
    DATA_DBC(getSharedLinkFile_Async, SharedLinkMetadata, arg, data);
}

void SharingRoutes::getSharedLinkFile_Async(
    const GetSharedLinkMetadataArg& arg,
    QIODevice* data,
    std::function<void(std::unique_ptr<SharedLinkMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->downloadStyle<
        GetSharedLinkMetadataArg,
        std::unique_ptr<SharedLinkMetadata>,
        SharedLinkMetadata::factory,
        GetSharedLinkFileErrorException>
        ("2/sharing/get_shared_link_file",
        arg,
        data,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::getSharedLinkMetadata(const GetSharedLinkMetadataArg& arg ){
    DROPBOX_BLOCKING_CALL(getSharedLinkMetadata_Async, SharedLinkMetadata, arg);
}

void SharingRoutes::getSharedLinkMetadata_Async(
    const GetSharedLinkMetadataArg& arg,
    std::function<void(std::unique_ptr<SharedLinkMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetSharedLinkMetadataArg,
        std::unique_ptr<SharedLinkMetadata>,
        SharedLinkMetadata::factory,
        SharedLinkErrorException>
        ("2/sharing/get_shared_link_metadata",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetSharedLinksResult> SharingRoutes::getSharedLinks(const GetSharedLinksArg& arg ){
    DROPBOX_BLOCKING_CALL(getSharedLinks_Async, GetSharedLinksResult, arg);
}

void SharingRoutes::getSharedLinks_Async(
    const GetSharedLinksArg& arg,
    std::function<void(std::unique_ptr<GetSharedLinksResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetSharedLinksArg,
        std::unique_ptr<GetSharedLinksResult>,
        GetSharedLinksResult::factory,
        GetSharedLinksErrorException>
        ("2/sharing/get_shared_links",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembers(const ListFileMembersArg& arg ){
    DROPBOX_BLOCKING_CALL(listFileMembers_Async, SharedFileMembers, arg);
}

void SharingRoutes::listFileMembers_Async(
    const ListFileMembersArg& arg,
    std::function<void(std::unique_ptr<SharedFileMembers>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFileMembersArg,
        std::unique_ptr<SharedFileMembers>,
        SharedFileMembers::factory,
        ListFileMembersErrorException>
        ("2/sharing/list_file_members",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <ListFileMembersBatchResult>> SharingRoutes::listFileMembersBatch(const ListFileMembersBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(listFileMembersBatch_Async, std::list <ListFileMembersBatchResult>, arg);
}

void SharingRoutes::listFileMembersBatch_Async(
    const ListFileMembersBatchArg& arg,
    std::function<void(std::unique_ptr<std::list <ListFileMembersBatchResult>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFileMembersBatchArg,
        std::unique_ptr<std::list <ListFileMembersBatchResult>>,
        ListFromJsonLoader<std::list <ListFileMembersBatchResult>, ListFileMembersBatchResult>,
        SharingUserErrorException>
        ("2/sharing/list_file_members/batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFileMembers> SharingRoutes::listFileMembersContinue(const ListFileMembersContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listFileMembersContinue_Async, SharedFileMembers, arg);
}

void SharingRoutes::listFileMembersContinue_Async(
    const ListFileMembersContinueArg& arg,
    std::function<void(std::unique_ptr<SharedFileMembers>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFileMembersContinueArg,
        std::unique_ptr<SharedFileMembers>,
        SharedFileMembers::factory,
        ListFileMembersContinueErrorException>
        ("2/sharing/list_file_members/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembers(const ListFolderMembersArgs& arg ){
    DROPBOX_BLOCKING_CALL(listFolderMembers_Async, SharedFolderMembers, arg);
}

void SharingRoutes::listFolderMembers_Async(
    const ListFolderMembersArgs& arg,
    std::function<void(std::unique_ptr<SharedFolderMembers>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderMembersArgs,
        std::unique_ptr<SharedFolderMembers>,
        SharedFolderMembers::factory,
        SharedFolderAccessErrorException>
        ("2/sharing/list_folder_members",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFolderMembers> SharingRoutes::listFolderMembersContinue(const ListFolderMembersContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listFolderMembersContinue_Async, SharedFolderMembers, arg);
}

void SharingRoutes::listFolderMembersContinue_Async(
    const ListFolderMembersContinueArg& arg,
    std::function<void(std::unique_ptr<SharedFolderMembers>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFolderMembersContinueArg,
        std::unique_ptr<SharedFolderMembers>,
        SharedFolderMembers::factory,
        ListFolderMembersContinueErrorException>
        ("2/sharing/list_folder_members/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFolders(const ListFoldersArgs& arg ){
    DROPBOX_BLOCKING_CALL(listFolders_Async, ListFoldersResult, arg);
}

void SharingRoutes::listFolders_Async(
    const ListFoldersArgs& arg,
    std::function<void(std::unique_ptr<ListFoldersResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFoldersArgs,
        std::unique_ptr<ListFoldersResult>,
        ListFoldersResult::factory,
        DropboxException>
        ("2/sharing/list_folders",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listFoldersContinue(const ListFoldersContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listFoldersContinue_Async, ListFoldersResult, arg);
}

void SharingRoutes::listFoldersContinue_Async(
    const ListFoldersContinueArg& arg,
    std::function<void(std::unique_ptr<ListFoldersResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFoldersContinueArg,
        std::unique_ptr<ListFoldersResult>,
        ListFoldersResult::factory,
        ListFoldersContinueErrorException>
        ("2/sharing/list_folders/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFolders(const ListFoldersArgs& arg ){
    DROPBOX_BLOCKING_CALL(listMountableFolders_Async, ListFoldersResult, arg);
}

void SharingRoutes::listMountableFolders_Async(
    const ListFoldersArgs& arg,
    std::function<void(std::unique_ptr<ListFoldersResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFoldersArgs,
        std::unique_ptr<ListFoldersResult>,
        ListFoldersResult::factory,
        DropboxException>
        ("2/sharing/list_mountable_folders",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFoldersResult> SharingRoutes::listMountableFoldersContinue(const ListFoldersContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listMountableFoldersContinue_Async, ListFoldersResult, arg);
}

void SharingRoutes::listMountableFoldersContinue_Async(
    const ListFoldersContinueArg& arg,
    std::function<void(std::unique_ptr<ListFoldersResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFoldersContinueArg,
        std::unique_ptr<ListFoldersResult>,
        ListFoldersResult::factory,
        ListFoldersContinueErrorException>
        ("2/sharing/list_mountable_folders/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFiles(const ListFilesArg& arg ){
    DROPBOX_BLOCKING_CALL(listReceivedFiles_Async, ListFilesResult, arg);
}

void SharingRoutes::listReceivedFiles_Async(
    const ListFilesArg& arg,
    std::function<void(std::unique_ptr<ListFilesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFilesArg,
        std::unique_ptr<ListFilesResult>,
        ListFilesResult::factory,
        SharingUserErrorException>
        ("2/sharing/list_received_files",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListFilesResult> SharingRoutes::listReceivedFilesContinue(const ListFilesContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(listReceivedFilesContinue_Async, ListFilesResult, arg);
}

void SharingRoutes::listReceivedFilesContinue_Async(
    const ListFilesContinueArg& arg,
    std::function<void(std::unique_ptr<ListFilesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListFilesContinueArg,
        std::unique_ptr<ListFilesResult>,
        ListFilesResult::factory,
        ListFilesContinueErrorException>
        ("2/sharing/list_received_files/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListSharedLinksResult> SharingRoutes::listSharedLinks(const ListSharedLinksArg& arg ){
    DROPBOX_BLOCKING_CALL(listSharedLinks_Async, ListSharedLinksResult, arg);
}

void SharingRoutes::listSharedLinks_Async(
    const ListSharedLinksArg& arg,
    std::function<void(std::unique_ptr<ListSharedLinksResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListSharedLinksArg,
        std::unique_ptr<ListSharedLinksResult>,
        ListSharedLinksResult::factory,
        ListSharedLinksErrorException>
        ("2/sharing/list_shared_links",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedLinkMetadata> SharingRoutes::modifySharedLinkSettings(const ModifySharedLinkSettingsArgs& arg ){
    DROPBOX_BLOCKING_CALL(modifySharedLinkSettings_Async, SharedLinkMetadata, arg);
}

void SharingRoutes::modifySharedLinkSettings_Async(
    const ModifySharedLinkSettingsArgs& arg,
    std::function<void(std::unique_ptr<SharedLinkMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ModifySharedLinkSettingsArgs,
        std::unique_ptr<SharedLinkMetadata>,
        SharedLinkMetadata::factory,
        ModifySharedLinkSettingsErrorException>
        ("2/sharing/modify_shared_link_settings",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::mountFolder(const MountFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(mountFolder_Async, SharedFolderMetadata, arg);
}

void SharingRoutes::mountFolder_Async(
    const MountFolderArg& arg,
    std::function<void(std::unique_ptr<SharedFolderMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MountFolderArg,
        std::unique_ptr<SharedFolderMetadata>,
        SharedFolderMetadata::factory,
        MountFolderErrorException>
        ("2/sharing/mount_folder",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::relinquishFileMembership(const RelinquishFileMembershipArg& arg ){
    VOID_RESULT_DBC(relinquishFileMembership_Async, arg);
}

void SharingRoutes::relinquishFileMembership_Async(
    const RelinquishFileMembershipArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RelinquishFileMembershipArg,
        RelinquishFileMembershipErrorException>
        ("2/sharing/relinquish_file_membership",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::relinquishFolderMembership(const RelinquishFolderMembershipArg& arg ){
    DROPBOX_BLOCKING_CALL(relinquishFolderMembership_Async, async::LaunchEmptyResult, arg);
}

void SharingRoutes::relinquishFolderMembership_Async(
    const RelinquishFolderMembershipArg& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RelinquishFolderMembershipArg,
        std::unique_ptr<async::LaunchEmptyResult>,
        async::LaunchEmptyResult::factory,
        RelinquishFolderMembershipErrorException>
        ("2/sharing/relinquish_folder_membership",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMemberActionIndividualResult> SharingRoutes::removeFileMember(const RemoveFileMemberArg& arg ){
    DROPBOX_BLOCKING_CALL(removeFileMember_Async, FileMemberActionIndividualResult, arg);
}

void SharingRoutes::removeFileMember_Async(
    const RemoveFileMemberArg& arg,
    std::function<void(std::unique_ptr<FileMemberActionIndividualResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RemoveFileMemberArg,
        std::unique_ptr<FileMemberActionIndividualResult>,
        FileMemberActionIndividualResult::factory,
        RemoveFileMemberErrorException>
        ("2/sharing/remove_file_member",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FileMemberRemoveActionResult> SharingRoutes::removeFileMember2(const RemoveFileMemberArg& arg ){
    DROPBOX_BLOCKING_CALL(removeFileMember2_Async, FileMemberRemoveActionResult, arg);
}

void SharingRoutes::removeFileMember2_Async(
    const RemoveFileMemberArg& arg,
    std::function<void(std::unique_ptr<FileMemberRemoveActionResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RemoveFileMemberArg,
        std::unique_ptr<FileMemberRemoveActionResult>,
        FileMemberRemoveActionResult::factory,
        RemoveFileMemberErrorException>
        ("2/sharing/remove_file_member_2",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchResultBase> SharingRoutes::removeFolderMember(const RemoveFolderMemberArg& arg ){
    DROPBOX_BLOCKING_CALL(removeFolderMember_Async, async::LaunchResultBase, arg);
}

void SharingRoutes::removeFolderMember_Async(
    const RemoveFolderMemberArg& arg,
    std::function<void(std::unique_ptr<async::LaunchResultBase>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RemoveFolderMemberArg,
        std::unique_ptr<async::LaunchResultBase>,
        async::LaunchResultBase::factory,
        RemoveFolderMemberErrorException>
        ("2/sharing/remove_folder_member",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::revokeSharedLink(const RevokeSharedLinkArg& arg ){
    VOID_RESULT_DBC(revokeSharedLink_Async, arg);
}

void SharingRoutes::revokeSharedLink_Async(
    const RevokeSharedLinkArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeSharedLinkArg,
        RevokeSharedLinkErrorException>
        ("2/sharing/revoke_shared_link",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ShareFolderLaunch> SharingRoutes::shareFolder(const ShareFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(shareFolder_Async, ShareFolderLaunch, arg);
}

void SharingRoutes::shareFolder_Async(
    const ShareFolderArg& arg,
    std::function<void(std::unique_ptr<ShareFolderLaunch>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ShareFolderArg,
        std::unique_ptr<ShareFolderLaunch>,
        ShareFolderLaunch::factory,
        ShareFolderErrorException>
        ("2/sharing/share_folder",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::transferFolder(const TransferFolderArg& arg ){
    VOID_RESULT_DBC(transferFolder_Async, arg);
}

void SharingRoutes::transferFolder_Async(
    const TransferFolderArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        TransferFolderArg,
        TransferFolderErrorException>
        ("2/sharing/transfer_folder",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::unmountFolder(const UnmountFolderArg& arg ){
    VOID_RESULT_DBC(unmountFolder_Async, arg);
}

void SharingRoutes::unmountFolder_Async(
    const UnmountFolderArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UnmountFolderArg,
        UnmountFolderErrorException>
        ("2/sharing/unmount_folder",
        arg,
        completed_callback,
        failed_callback);
}

void SharingRoutes::unshareFile(const UnshareFileArg& arg ){
    VOID_RESULT_DBC(unshareFile_Async, arg);
}

void SharingRoutes::unshareFile_Async(
    const UnshareFileArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UnshareFileArg,
        UnshareFileErrorException>
        ("2/sharing/unshare_file",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> SharingRoutes::unshareFolder(const UnshareFolderArg& arg ){
    DROPBOX_BLOCKING_CALL(unshareFolder_Async, async::LaunchEmptyResult, arg);
}

void SharingRoutes::unshareFolder_Async(
    const UnshareFolderArg& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UnshareFolderArg,
        std::unique_ptr<async::LaunchEmptyResult>,
        async::LaunchEmptyResult::factory,
        UnshareFolderErrorException>
        ("2/sharing/unshare_folder",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MemberAccessLevelResult> SharingRoutes::updateFolderMember(const UpdateFolderMemberArg& arg ){
    DROPBOX_BLOCKING_CALL(updateFolderMember_Async, MemberAccessLevelResult, arg);
}

void SharingRoutes::updateFolderMember_Async(
    const UpdateFolderMemberArg& arg,
    std::function<void(std::unique_ptr<MemberAccessLevelResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UpdateFolderMemberArg,
        std::unique_ptr<MemberAccessLevelResult>,
        MemberAccessLevelResult::factory,
        UpdateFolderMemberErrorException>
        ("2/sharing/update_folder_member",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<SharedFolderMetadata> SharingRoutes::updateFolderPolicy(const UpdateFolderPolicyArg& arg ){
    DROPBOX_BLOCKING_CALL(updateFolderPolicy_Async, SharedFolderMetadata, arg);
}

void SharingRoutes::updateFolderPolicy_Async(
    const UpdateFolderPolicyArg& arg,
    std::function<void(std::unique_ptr<SharedFolderMetadata>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UpdateFolderPolicyArg,
        std::unique_ptr<SharedFolderMetadata>,
        SharedFolderMetadata::factory,
        UpdateFolderPolicyErrorException>
        ("2/sharing/update_folder_policy",
        arg,
        completed_callback,
        failed_callback);
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
