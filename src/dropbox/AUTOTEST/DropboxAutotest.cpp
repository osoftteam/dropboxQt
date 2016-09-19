/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification 
***********************************************************/

#include "DropboxAutotest.h"
#include "dropbox/auth/AuthRoutes.h"
#include "dropbox/files/FilesRoutes.h"
#include "dropbox/sharing/SharingRoutes.h"
#include "dropbox/team/TeamRoutes.h"
#include "dropbox/users/UsersRoutes.h"
namespace dropboxQt{

static DropboxClient* cl;


bool DropboxAutotest::init(QString filePathName){
    if(m_f.isOpen())m_f.close();
    m_f.setFileName(filePathName);
    if(!m_f.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate)){qWarning() << "failed to open" << filePathName; return false;}
    m_out.setDevice(&m_f);
    return true;
}

#ifdef DROPBOX_QT_AUTOTEST

static DropboxAutotest* theInstance;

DropboxAutotest& DropboxAutotest::INSTANCE(){return *theInstance;};
DropboxAutotest& DropboxAutotest::operator << (const char * s){
    m_out << s << endl;
    return *this;
}

DropboxAutotest& DropboxAutotest::operator << (const QString & s){
    m_out << s << endl;
    return *this;
}
DropboxAutotest& DropboxAutotest::operator << (const QByteArray & arr){
    m_out << arr << endl;
    return *this;
}
DropboxAutotest& DropboxAutotest::operator << (const QNetworkRequest & r){
    m_out << "POST " << r.url().toString() << endl;
    QList<QByteArray> lst = r.rawHeaderList();
    for(QList<QByteArray>::iterator i = lst.begin(); i != lst.end(); i++){
        m_out << "--header " << *i << ": " << r.rawHeader(*i) << endl;
    }
    return *this;
}
static void call_tokenRevoke_from_Auth(){
    cl->getAuth()->tokenRevoke();
}

static void call_alphaGetMetadata_from_Files(){
    files::AlphaGetMetadataArg arg = files::AlphaGetMetadataArg::EXAMPLE();
    cl->getFiles()->alphaGetMetadata(arg);
}

static void call_alphaUpload_from_Files(){
    files::CommitInfoWithProperties arg = files::CommitInfoWithProperties::EXAMPLE();
    cl->getFiles()->alphaUpload(arg);
}

static void call_copy_from_Files(){
    files::RelocationArg arg = files::RelocationArg::EXAMPLE();
    cl->getFiles()->copy(arg);
}

static void call_copyReferenceGet_from_Files(){
    files::GetCopyReferenceArg arg = files::GetCopyReferenceArg::EXAMPLE();
    cl->getFiles()->copyReferenceGet(arg);
}

static void call_copyReferenceSave_from_Files(){
    files::SaveCopyReferenceArg arg = files::SaveCopyReferenceArg::EXAMPLE();
    cl->getFiles()->copyReferenceSave(arg);
}

static void call_createFolder_from_Files(){
    files::CreateFolderArg arg = files::CreateFolderArg::EXAMPLE();
    cl->getFiles()->createFolder(arg);
}

static void call_deleteOperation_from_Files(){
    files::DeleteArg arg = files::DeleteArg::EXAMPLE();
    cl->getFiles()->deleteOperation(arg);
}

static void call_download_from_Files(){
    files::DownloadArg arg = files::DownloadArg::EXAMPLE();
    cl->getFiles()->download(arg);
}

static void call_getMetadata_from_Files(){
    files::GetMetadataArg arg = files::GetMetadataArg::EXAMPLE();
    cl->getFiles()->getMetadata(arg);
}

static void call_getPreview_from_Files(){
    files::PreviewArg arg = files::PreviewArg::EXAMPLE();
    cl->getFiles()->getPreview(arg);
}

static void call_getTemporaryLink_from_Files(){
    files::GetTemporaryLinkArg arg = files::GetTemporaryLinkArg::EXAMPLE();
    cl->getFiles()->getTemporaryLink(arg);
}

static void call_getThumbnail_from_Files(){
    files::ThumbnailArg arg = files::ThumbnailArg::EXAMPLE();
    cl->getFiles()->getThumbnail(arg);
}

static void call_listFolder_from_Files(){
    files::ListFolderArg arg = files::ListFolderArg::EXAMPLE();
    cl->getFiles()->listFolder(arg);
}

static void call_listFolderContinue_from_Files(){
    files::ListFolderContinueArg arg = files::ListFolderContinueArg::EXAMPLE();
    cl->getFiles()->listFolderContinue(arg);
}

static void call_listFolderGetLatestCursor_from_Files(){
    files::ListFolderArg arg = files::ListFolderArg::EXAMPLE();
    cl->getFiles()->listFolderGetLatestCursor(arg);
}

static void call_listFolderLongpoll_from_Files(){
    files::ListFolderLongpollArg arg = files::ListFolderLongpollArg::EXAMPLE();
    cl->getFiles()->listFolderLongpoll(arg);
}

static void call_listRevisions_from_Files(){
    files::ListRevisionsArg arg = files::ListRevisionsArg::EXAMPLE();
    cl->getFiles()->listRevisions(arg);
}

static void call_move_from_Files(){
    files::RelocationArg arg = files::RelocationArg::EXAMPLE();
    cl->getFiles()->move(arg);
}

static void call_permanentlyDelete_from_Files(){
    files::DeleteArg arg = files::DeleteArg::EXAMPLE();
    cl->getFiles()->permanentlyDelete(arg);
}

static void call_propertiesAdd_from_Files(){
    files::PropertyGroupWithPath arg = files::PropertyGroupWithPath::EXAMPLE();
    cl->getFiles()->propertiesAdd(arg);
}

static void call_propertiesOverwrite_from_Files(){
    files::PropertyGroupWithPath arg = files::PropertyGroupWithPath::EXAMPLE();
    cl->getFiles()->propertiesOverwrite(arg);
}

static void call_propertiesRemove_from_Files(){
    files::RemovePropertiesArg arg = files::RemovePropertiesArg::EXAMPLE();
    cl->getFiles()->propertiesRemove(arg);
}

static void call_propertiesTemplateGet_from_Files(){
    properties::GetPropertyTemplateArg arg = properties::GetPropertyTemplateArg::EXAMPLE();
    cl->getFiles()->propertiesTemplateGet(arg);
}

static void call_propertiesTemplateList_from_Files(){
    cl->getFiles()->propertiesTemplateList();
}

static void call_propertiesUpdate_from_Files(){
    files::UpdatePropertyGroupArg arg = files::UpdatePropertyGroupArg::EXAMPLE();
    cl->getFiles()->propertiesUpdate(arg);
}

static void call_restore_from_Files(){
    files::RestoreArg arg = files::RestoreArg::EXAMPLE();
    cl->getFiles()->restore(arg);
}

static void call_saveUrl_from_Files(){
    files::SaveUrlArg arg = files::SaveUrlArg::EXAMPLE();
    cl->getFiles()->saveUrl(arg);
}

static void call_saveUrlCheckJobStatus_from_Files(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getFiles()->saveUrlCheckJobStatus(arg);
}

static void call_search_from_Files(){
    files::SearchArg arg = files::SearchArg::EXAMPLE();
    cl->getFiles()->search(arg);
}

static void call_upload_from_Files(){
    files::CommitInfo arg = files::CommitInfo::EXAMPLE();
    cl->getFiles()->upload(arg);
}

static void call_uploadSessionAppend_from_Files(){
    files::UploadSessionCursor arg = files::UploadSessionCursor::EXAMPLE();
    cl->getFiles()->uploadSessionAppend(arg);
}

static void call_uploadSessionAppendV2_from_Files(){
    files::UploadSessionAppendArg arg = files::UploadSessionAppendArg::EXAMPLE();
    cl->getFiles()->uploadSessionAppendV2(arg);
}

static void call_uploadSessionFinish_from_Files(){
    files::UploadSessionFinishArg arg = files::UploadSessionFinishArg::EXAMPLE();
    cl->getFiles()->uploadSessionFinish(arg);
}

static void call_uploadSessionFinishBatch_from_Files(){
    files::UploadSessionFinishBatchArg arg = files::UploadSessionFinishBatchArg::EXAMPLE();
    cl->getFiles()->uploadSessionFinishBatch(arg);
}

static void call_uploadSessionFinishBatchCheck_from_Files(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getFiles()->uploadSessionFinishBatchCheck(arg);
}

static void call_uploadSessionStart_from_Files(){
    files::UploadSessionStartArg arg = files::UploadSessionStartArg::EXAMPLE();
    cl->getFiles()->uploadSessionStart(arg);
}

static void call_addFileMember_from_Sharing(){
    sharing::AddFileMemberArgs arg = sharing::AddFileMemberArgs::EXAMPLE();
    cl->getSharing()->addFileMember(arg);
}

static void call_addFolderMember_from_Sharing(){
    sharing::AddFolderMemberArg arg = sharing::AddFolderMemberArg::EXAMPLE();
    cl->getSharing()->addFolderMember(arg);
}

static void call_changeFileMemberAccess_from_Sharing(){
    sharing::ChangeFileMemberAccessArgs arg = sharing::ChangeFileMemberAccessArgs::EXAMPLE();
    cl->getSharing()->changeFileMemberAccess(arg);
}

static void call_checkJobStatus_from_Sharing(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getSharing()->checkJobStatus(arg);
}

static void call_checkRemoveMemberJobStatus_from_Sharing(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getSharing()->checkRemoveMemberJobStatus(arg);
}

static void call_checkShareJobStatus_from_Sharing(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getSharing()->checkShareJobStatus(arg);
}

static void call_createSharedLink_from_Sharing(){
    sharing::CreateSharedLinkArg arg = sharing::CreateSharedLinkArg::EXAMPLE();
    cl->getSharing()->createSharedLink(arg);
}

static void call_createSharedLinkWithSettings_from_Sharing(){
    sharing::CreateSharedLinkWithSettingsArg arg = sharing::CreateSharedLinkWithSettingsArg::EXAMPLE();
    cl->getSharing()->createSharedLinkWithSettings(arg);
}

static void call_getFileMetadata_from_Sharing(){
    sharing::GetFileMetadataArg arg = sharing::GetFileMetadataArg::EXAMPLE();
    cl->getSharing()->getFileMetadata(arg);
}

static void call_getFileMetadataBatch_from_Sharing(){
    sharing::GetFileMetadataBatchArg arg = sharing::GetFileMetadataBatchArg::EXAMPLE();
    cl->getSharing()->getFileMetadataBatch(arg);
}

static void call_getFolderMetadata_from_Sharing(){
    sharing::GetMetadataArgs arg = sharing::GetMetadataArgs::EXAMPLE();
    cl->getSharing()->getFolderMetadata(arg);
}

static void call_getSharedLinkFile_from_Sharing(){
    sharing::GetSharedLinkMetadataArg arg = sharing::GetSharedLinkMetadataArg::EXAMPLE();
    cl->getSharing()->getSharedLinkFile(arg);
}

static void call_getSharedLinkMetadata_from_Sharing(){
    sharing::GetSharedLinkMetadataArg arg = sharing::GetSharedLinkMetadataArg::EXAMPLE();
    cl->getSharing()->getSharedLinkMetadata(arg);
}

static void call_getSharedLinks_from_Sharing(){
    sharing::GetSharedLinksArg arg = sharing::GetSharedLinksArg::EXAMPLE();
    cl->getSharing()->getSharedLinks(arg);
}

static void call_listFileMembers_from_Sharing(){
    sharing::ListFileMembersArg arg = sharing::ListFileMembersArg::EXAMPLE();
    cl->getSharing()->listFileMembers(arg);
}

static void call_listFileMembersBatch_from_Sharing(){
    sharing::ListFileMembersBatchArg arg = sharing::ListFileMembersBatchArg::EXAMPLE();
    cl->getSharing()->listFileMembersBatch(arg);
}

static void call_listFileMembersContinue_from_Sharing(){
    sharing::ListFileMembersContinueArg arg = sharing::ListFileMembersContinueArg::EXAMPLE();
    cl->getSharing()->listFileMembersContinue(arg);
}

static void call_listFolderMembers_from_Sharing(){
    sharing::ListFolderMembersArgs arg = sharing::ListFolderMembersArgs::EXAMPLE();
    cl->getSharing()->listFolderMembers(arg);
}

static void call_listFolderMembersContinue_from_Sharing(){
    sharing::ListFolderMembersContinueArg arg = sharing::ListFolderMembersContinueArg::EXAMPLE();
    cl->getSharing()->listFolderMembersContinue(arg);
}

static void call_listFolders_from_Sharing(){
    sharing::ListFoldersArgs arg = sharing::ListFoldersArgs::EXAMPLE();
    cl->getSharing()->listFolders(arg);
}

static void call_listFoldersContinue_from_Sharing(){
    sharing::ListFoldersContinueArg arg = sharing::ListFoldersContinueArg::EXAMPLE();
    cl->getSharing()->listFoldersContinue(arg);
}

static void call_listMountableFolders_from_Sharing(){
    sharing::ListFoldersArgs arg = sharing::ListFoldersArgs::EXAMPLE();
    cl->getSharing()->listMountableFolders(arg);
}

static void call_listMountableFoldersContinue_from_Sharing(){
    sharing::ListFoldersContinueArg arg = sharing::ListFoldersContinueArg::EXAMPLE();
    cl->getSharing()->listMountableFoldersContinue(arg);
}

static void call_listReceivedFiles_from_Sharing(){
    sharing::ListFilesArg arg = sharing::ListFilesArg::EXAMPLE();
    cl->getSharing()->listReceivedFiles(arg);
}

static void call_listReceivedFilesContinue_from_Sharing(){
    sharing::ListFilesContinueArg arg = sharing::ListFilesContinueArg::EXAMPLE();
    cl->getSharing()->listReceivedFilesContinue(arg);
}

static void call_listSharedLinks_from_Sharing(){
    sharing::ListSharedLinksArg arg = sharing::ListSharedLinksArg::EXAMPLE();
    cl->getSharing()->listSharedLinks(arg);
}

static void call_modifySharedLinkSettings_from_Sharing(){
    sharing::ModifySharedLinkSettingsArgs arg = sharing::ModifySharedLinkSettingsArgs::EXAMPLE();
    cl->getSharing()->modifySharedLinkSettings(arg);
}

static void call_mountFolder_from_Sharing(){
    sharing::MountFolderArg arg = sharing::MountFolderArg::EXAMPLE();
    cl->getSharing()->mountFolder(arg);
}

static void call_relinquishFileMembership_from_Sharing(){
    sharing::RelinquishFileMembershipArg arg = sharing::RelinquishFileMembershipArg::EXAMPLE();
    cl->getSharing()->relinquishFileMembership(arg);
}

static void call_relinquishFolderMembership_from_Sharing(){
    sharing::RelinquishFolderMembershipArg arg = sharing::RelinquishFolderMembershipArg::EXAMPLE();
    cl->getSharing()->relinquishFolderMembership(arg);
}

static void call_removeFileMember_from_Sharing(){
    sharing::RemoveFileMemberArg arg = sharing::RemoveFileMemberArg::EXAMPLE();
    cl->getSharing()->removeFileMember(arg);
}

static void call_removeFileMember2_from_Sharing(){
    sharing::RemoveFileMemberArg arg = sharing::RemoveFileMemberArg::EXAMPLE();
    cl->getSharing()->removeFileMember2(arg);
}

static void call_removeFolderMember_from_Sharing(){
    sharing::RemoveFolderMemberArg arg = sharing::RemoveFolderMemberArg::EXAMPLE();
    cl->getSharing()->removeFolderMember(arg);
}

static void call_revokeSharedLink_from_Sharing(){
    sharing::RevokeSharedLinkArg arg = sharing::RevokeSharedLinkArg::EXAMPLE();
    cl->getSharing()->revokeSharedLink(arg);
}

static void call_shareFolder_from_Sharing(){
    sharing::ShareFolderArg arg = sharing::ShareFolderArg::EXAMPLE();
    cl->getSharing()->shareFolder(arg);
}

static void call_transferFolder_from_Sharing(){
    sharing::TransferFolderArg arg = sharing::TransferFolderArg::EXAMPLE();
    cl->getSharing()->transferFolder(arg);
}

static void call_unmountFolder_from_Sharing(){
    sharing::UnmountFolderArg arg = sharing::UnmountFolderArg::EXAMPLE();
    cl->getSharing()->unmountFolder(arg);
}

static void call_unshareFile_from_Sharing(){
    sharing::UnshareFileArg arg = sharing::UnshareFileArg::EXAMPLE();
    cl->getSharing()->unshareFile(arg);
}

static void call_unshareFolder_from_Sharing(){
    sharing::UnshareFolderArg arg = sharing::UnshareFolderArg::EXAMPLE();
    cl->getSharing()->unshareFolder(arg);
}

static void call_updateFolderMember_from_Sharing(){
    sharing::UpdateFolderMemberArg arg = sharing::UpdateFolderMemberArg::EXAMPLE();
    cl->getSharing()->updateFolderMember(arg);
}

static void call_updateFolderPolicy_from_Sharing(){
    sharing::UpdateFolderPolicyArg arg = sharing::UpdateFolderPolicyArg::EXAMPLE();
    cl->getSharing()->updateFolderPolicy(arg);
}

static void call_alphaGroupsCreate_from_Team(){
    team::GroupCreateArg arg = team::GroupCreateArg::EXAMPLE();
    cl->getTeam()->alphaGroupsCreate(arg);
}

static void call_alphaGroupsGetInfo_from_Team(){
    team::GroupsSelector arg = team::GroupsSelector::EXAMPLE();
    cl->getTeam()->alphaGroupsGetInfo(arg);
}

static void call_alphaGroupsList_from_Team(){
    team::GroupsListArg arg = team::GroupsListArg::EXAMPLE();
    cl->getTeam()->alphaGroupsList(arg);
}

static void call_alphaGroupsListContinue_from_Team(){
    team::GroupsListContinueArg arg = team::GroupsListContinueArg::EXAMPLE();
    cl->getTeam()->alphaGroupsListContinue(arg);
}

static void call_alphaGroupsUpdate_from_Team(){
    team::GroupUpdateArgs arg = team::GroupUpdateArgs::EXAMPLE();
    cl->getTeam()->alphaGroupsUpdate(arg);
}

static void call_devicesListMemberDevices_from_Team(){
    team::ListMemberDevicesArg arg = team::ListMemberDevicesArg::EXAMPLE();
    cl->getTeam()->devicesListMemberDevices(arg);
}

static void call_devicesListMembersDevices_from_Team(){
    team::ListMembersDevicesArg arg = team::ListMembersDevicesArg::EXAMPLE();
    cl->getTeam()->devicesListMembersDevices(arg);
}

static void call_devicesListTeamDevices_from_Team(){
    team::ListTeamDevicesArg arg = team::ListTeamDevicesArg::EXAMPLE();
    cl->getTeam()->devicesListTeamDevices(arg);
}

static void call_devicesRevokeDeviceSession_from_Team(){
    team::RevokeDeviceSessionArg arg = team::RevokeDeviceSessionArg::EXAMPLE();
    cl->getTeam()->devicesRevokeDeviceSession(arg);
}

static void call_devicesRevokeDeviceSessionBatch_from_Team(){
    team::RevokeDeviceSessionBatchArg arg = team::RevokeDeviceSessionBatchArg::EXAMPLE();
    cl->getTeam()->devicesRevokeDeviceSessionBatch(arg);
}

static void call_getInfo_from_Team(){
    cl->getTeam()->getInfo();
}

static void call_groupsCreate_from_Team(){
    team::GroupCreateArg arg = team::GroupCreateArg::EXAMPLE();
    cl->getTeam()->groupsCreate(arg);
}

static void call_groupsDelete_from_Team(){
    team::GroupSelector arg = team::GroupSelector::EXAMPLE();
    cl->getTeam()->groupsDelete(arg);
}

static void call_groupsGetInfo_from_Team(){
    team::GroupsSelector arg = team::GroupsSelector::EXAMPLE();
    cl->getTeam()->groupsGetInfo(arg);
}

static void call_groupsJobStatusGet_from_Team(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getTeam()->groupsJobStatusGet(arg);
}

static void call_groupsList_from_Team(){
    team::GroupsListArg arg = team::GroupsListArg::EXAMPLE();
    cl->getTeam()->groupsList(arg);
}

static void call_groupsListContinue_from_Team(){
    team::GroupsListContinueArg arg = team::GroupsListContinueArg::EXAMPLE();
    cl->getTeam()->groupsListContinue(arg);
}

static void call_groupsMembersAdd_from_Team(){
    team::GroupMembersAddArg arg = team::GroupMembersAddArg::EXAMPLE();
    cl->getTeam()->groupsMembersAdd(arg);
}

static void call_groupsMembersList_from_Team(){
    team::GroupsMembersListArg arg = team::GroupsMembersListArg::EXAMPLE();
    cl->getTeam()->groupsMembersList(arg);
}

static void call_groupsMembersListContinue_from_Team(){
    team::GroupsMembersListContinueArg arg = team::GroupsMembersListContinueArg::EXAMPLE();
    cl->getTeam()->groupsMembersListContinue(arg);
}

static void call_groupsMembersRemove_from_Team(){
    team::GroupMembersRemoveArg arg = team::GroupMembersRemoveArg::EXAMPLE();
    cl->getTeam()->groupsMembersRemove(arg);
}

static void call_groupsMembersSetAccessType_from_Team(){
    team::GroupMembersSetAccessTypeArg arg = team::GroupMembersSetAccessTypeArg::EXAMPLE();
    cl->getTeam()->groupsMembersSetAccessType(arg);
}

static void call_groupsUpdate_from_Team(){
    team::GroupUpdateArgs arg = team::GroupUpdateArgs::EXAMPLE();
    cl->getTeam()->groupsUpdate(arg);
}

static void call_linkedAppsListMemberLinkedApps_from_Team(){
    team::ListMemberAppsArg arg = team::ListMemberAppsArg::EXAMPLE();
    cl->getTeam()->linkedAppsListMemberLinkedApps(arg);
}

static void call_linkedAppsListMembersLinkedApps_from_Team(){
    team::ListMembersAppsArg arg = team::ListMembersAppsArg::EXAMPLE();
    cl->getTeam()->linkedAppsListMembersLinkedApps(arg);
}

static void call_linkedAppsListTeamLinkedApps_from_Team(){
    team::ListTeamAppsArg arg = team::ListTeamAppsArg::EXAMPLE();
    cl->getTeam()->linkedAppsListTeamLinkedApps(arg);
}

static void call_linkedAppsRevokeLinkedApp_from_Team(){
    team::RevokeLinkedApiAppArg arg = team::RevokeLinkedApiAppArg::EXAMPLE();
    cl->getTeam()->linkedAppsRevokeLinkedApp(arg);
}

static void call_linkedAppsRevokeLinkedAppBatch_from_Team(){
    team::RevokeLinkedApiAppBatchArg arg = team::RevokeLinkedApiAppBatchArg::EXAMPLE();
    cl->getTeam()->linkedAppsRevokeLinkedAppBatch(arg);
}

static void call_membersAdd_from_Team(){
    team::MembersAddArg arg = team::MembersAddArg::EXAMPLE();
    cl->getTeam()->membersAdd(arg);
}

static void call_membersAddJobStatusGet_from_Team(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getTeam()->membersAddJobStatusGet(arg);
}

static void call_membersGetInfo_from_Team(){
    team::MembersGetInfoArgs arg = team::MembersGetInfoArgs::EXAMPLE();
    cl->getTeam()->membersGetInfo(arg);
}

static void call_membersList_from_Team(){
    team::MembersListArg arg = team::MembersListArg::EXAMPLE();
    cl->getTeam()->membersList(arg);
}

static void call_membersListContinue_from_Team(){
    team::MembersListContinueArg arg = team::MembersListContinueArg::EXAMPLE();
    cl->getTeam()->membersListContinue(arg);
}

static void call_membersRecover_from_Team(){
    team::MembersRecoverArg arg = team::MembersRecoverArg::EXAMPLE();
    cl->getTeam()->membersRecover(arg);
}

static void call_membersRemove_from_Team(){
    team::MembersRemoveArg arg = team::MembersRemoveArg::EXAMPLE();
    cl->getTeam()->membersRemove(arg);
}

static void call_membersRemoveJobStatusGet_from_Team(){
    async::PollArg arg = async::PollArg::EXAMPLE();
    cl->getTeam()->membersRemoveJobStatusGet(arg);
}

static void call_membersSendWelcomeEmail_from_Team(){
    team::UserSelectorArg arg = team::UserSelectorArg::EXAMPLE();
    cl->getTeam()->membersSendWelcomeEmail(arg);
}

static void call_membersSetAdminPermissions_from_Team(){
    team::MembersSetPermissionsArg arg = team::MembersSetPermissionsArg::EXAMPLE();
    cl->getTeam()->membersSetAdminPermissions(arg);
}

static void call_membersSetProfile_from_Team(){
    team::MembersSetProfileArg arg = team::MembersSetProfileArg::EXAMPLE();
    cl->getTeam()->membersSetProfile(arg);
}

static void call_membersSuspend_from_Team(){
    team::MembersDeactivateArg arg = team::MembersDeactivateArg::EXAMPLE();
    cl->getTeam()->membersSuspend(arg);
}

static void call_membersUnsuspend_from_Team(){
    team::MembersUnsuspendArg arg = team::MembersUnsuspendArg::EXAMPLE();
    cl->getTeam()->membersUnsuspend(arg);
}

static void call_propertiesTemplateAdd_from_Team(){
    team::AddPropertyTemplateArg arg = team::AddPropertyTemplateArg::EXAMPLE();
    cl->getTeam()->propertiesTemplateAdd(arg);
}

static void call_propertiesTemplateGet_from_Team(){
    properties::GetPropertyTemplateArg arg = properties::GetPropertyTemplateArg::EXAMPLE();
    cl->getTeam()->propertiesTemplateGet(arg);
}

static void call_propertiesTemplateList_from_Team(){
    cl->getTeam()->propertiesTemplateList();
}

static void call_propertiesTemplateUpdate_from_Team(){
    team::UpdatePropertyTemplateArg arg = team::UpdatePropertyTemplateArg::EXAMPLE();
    cl->getTeam()->propertiesTemplateUpdate(arg);
}

static void call_reportsGetActivity_from_Team(){
    team::DateRange arg = team::DateRange::EXAMPLE();
    cl->getTeam()->reportsGetActivity(arg);
}

static void call_reportsGetDevices_from_Team(){
    team::DateRange arg = team::DateRange::EXAMPLE();
    cl->getTeam()->reportsGetDevices(arg);
}

static void call_reportsGetMembership_from_Team(){
    team::DateRange arg = team::DateRange::EXAMPLE();
    cl->getTeam()->reportsGetMembership(arg);
}

static void call_reportsGetStorage_from_Team(){
    team::DateRange arg = team::DateRange::EXAMPLE();
    cl->getTeam()->reportsGetStorage(arg);
}

static void call_getAccount_from_Users(){
    users::GetAccountArg arg = users::GetAccountArg::EXAMPLE();
    cl->getUsers()->getAccount(arg);
}

static void call_getAccountBatch_from_Users(){
    users::GetAccountBatchArg arg = users::GetAccountBatchArg::EXAMPLE();
    cl->getUsers()->getAccountBatch(arg);
}

static void call_getCurrentAccount_from_Users(){
    cl->getUsers()->getCurrentAccount();
}

static void call_getSpaceUsage_from_Users(){
    cl->getUsers()->getSpaceUsage();
}


static void test_call_AuthRoutes(){
    call_tokenRevoke_from_Auth();
}

static void test_call_FilesRoutes(){
    call_alphaGetMetadata_from_Files();
    call_alphaUpload_from_Files();
    call_copy_from_Files();
    call_copyReferenceGet_from_Files();
    call_copyReferenceSave_from_Files();
    call_createFolder_from_Files();
    call_deleteOperation_from_Files();
    call_download_from_Files();
    call_getMetadata_from_Files();
    call_getPreview_from_Files();
    call_getTemporaryLink_from_Files();
    call_getThumbnail_from_Files();
    call_listFolder_from_Files();
    call_listFolderContinue_from_Files();
    call_listFolderGetLatestCursor_from_Files();
    call_listFolderLongpoll_from_Files();
    call_listRevisions_from_Files();
    call_move_from_Files();
    call_permanentlyDelete_from_Files();
    call_propertiesAdd_from_Files();
    call_propertiesOverwrite_from_Files();
    call_propertiesRemove_from_Files();
    call_propertiesTemplateGet_from_Files();
    call_propertiesTemplateList_from_Files();
    call_propertiesUpdate_from_Files();
    call_restore_from_Files();
    call_saveUrl_from_Files();
    call_saveUrlCheckJobStatus_from_Files();
    call_search_from_Files();
    call_upload_from_Files();
    call_uploadSessionAppend_from_Files();
    call_uploadSessionAppendV2_from_Files();
    call_uploadSessionFinish_from_Files();
    call_uploadSessionFinishBatch_from_Files();
    call_uploadSessionFinishBatchCheck_from_Files();
    call_uploadSessionStart_from_Files();
}

static void test_call_SharingRoutes(){
    call_addFileMember_from_Sharing();
    call_addFolderMember_from_Sharing();
    call_changeFileMemberAccess_from_Sharing();
    call_checkJobStatus_from_Sharing();
    call_checkRemoveMemberJobStatus_from_Sharing();
    call_checkShareJobStatus_from_Sharing();
    call_createSharedLink_from_Sharing();
    call_createSharedLinkWithSettings_from_Sharing();
    call_getFileMetadata_from_Sharing();
    call_getFileMetadataBatch_from_Sharing();
    call_getFolderMetadata_from_Sharing();
    call_getSharedLinkFile_from_Sharing();
    call_getSharedLinkMetadata_from_Sharing();
    call_getSharedLinks_from_Sharing();
    call_listFileMembers_from_Sharing();
    call_listFileMembersBatch_from_Sharing();
    call_listFileMembersContinue_from_Sharing();
    call_listFolderMembers_from_Sharing();
    call_listFolderMembersContinue_from_Sharing();
    call_listFolders_from_Sharing();
    call_listFoldersContinue_from_Sharing();
    call_listMountableFolders_from_Sharing();
    call_listMountableFoldersContinue_from_Sharing();
    call_listReceivedFiles_from_Sharing();
    call_listReceivedFilesContinue_from_Sharing();
    call_listSharedLinks_from_Sharing();
    call_modifySharedLinkSettings_from_Sharing();
    call_mountFolder_from_Sharing();
    call_relinquishFileMembership_from_Sharing();
    call_relinquishFolderMembership_from_Sharing();
    call_removeFileMember_from_Sharing();
    call_removeFileMember2_from_Sharing();
    call_removeFolderMember_from_Sharing();
    call_revokeSharedLink_from_Sharing();
    call_shareFolder_from_Sharing();
    call_transferFolder_from_Sharing();
    call_unmountFolder_from_Sharing();
    call_unshareFile_from_Sharing();
    call_unshareFolder_from_Sharing();
    call_updateFolderMember_from_Sharing();
    call_updateFolderPolicy_from_Sharing();
}

static void test_call_TeamRoutes(){
    call_alphaGroupsCreate_from_Team();
    call_alphaGroupsGetInfo_from_Team();
    call_alphaGroupsList_from_Team();
    call_alphaGroupsListContinue_from_Team();
    call_alphaGroupsUpdate_from_Team();
    call_devicesListMemberDevices_from_Team();
    call_devicesListMembersDevices_from_Team();
    call_devicesListTeamDevices_from_Team();
    call_devicesRevokeDeviceSession_from_Team();
    call_devicesRevokeDeviceSessionBatch_from_Team();
    call_getInfo_from_Team();
    call_groupsCreate_from_Team();
    call_groupsDelete_from_Team();
    call_groupsGetInfo_from_Team();
    call_groupsJobStatusGet_from_Team();
    call_groupsList_from_Team();
    call_groupsListContinue_from_Team();
    call_groupsMembersAdd_from_Team();
    call_groupsMembersList_from_Team();
    call_groupsMembersListContinue_from_Team();
    call_groupsMembersRemove_from_Team();
    call_groupsMembersSetAccessType_from_Team();
    call_groupsUpdate_from_Team();
    call_linkedAppsListMemberLinkedApps_from_Team();
    call_linkedAppsListMembersLinkedApps_from_Team();
    call_linkedAppsListTeamLinkedApps_from_Team();
    call_linkedAppsRevokeLinkedApp_from_Team();
    call_linkedAppsRevokeLinkedAppBatch_from_Team();
    call_membersAdd_from_Team();
    call_membersAddJobStatusGet_from_Team();
    call_membersGetInfo_from_Team();
    call_membersList_from_Team();
    call_membersListContinue_from_Team();
    call_membersRecover_from_Team();
    call_membersRemove_from_Team();
    call_membersRemoveJobStatusGet_from_Team();
    call_membersSendWelcomeEmail_from_Team();
    call_membersSetAdminPermissions_from_Team();
    call_membersSetProfile_from_Team();
    call_membersSuspend_from_Team();
    call_membersUnsuspend_from_Team();
    call_propertiesTemplateAdd_from_Team();
    call_propertiesTemplateGet_from_Team();
    call_propertiesTemplateList_from_Team();
    call_propertiesTemplateUpdate_from_Team();
    call_reportsGetActivity_from_Team();
    call_reportsGetDevices_from_Team();
    call_reportsGetMembership_from_Team();
    call_reportsGetStorage_from_Team();
}

static void test_call_UsersRoutes(){
    call_getAccount_from_Users();
    call_getAccountBatch_from_Users();
    call_getCurrentAccount_from_Users();
    call_getSpaceUsage_from_Users();
}


void DropboxAutotest::generateCalls(){
    test_call_AuthRoutes();
    test_call_FilesRoutes();
    test_call_SharingRoutes();
    test_call_TeamRoutes();
    test_call_UsersRoutes();
}
#else //DROPBOX_QT_AUTOTEST
void DropboxAutotest::generateCalls(){
    qWarning() << "define DROPBOX_QT_AUTOTEST to enable autotest";
}
#endif //DROPBOX_QT_AUTOTEST

DropboxAutotest::DropboxAutotest(DropboxClient& c):
m_c(c){
    cl = &m_c;
    #ifdef DROPBOX_QT_AUTOTEST
    theInstance = this;
    #endif //DROPBOX_QT_AUTOTEST
}

}//dropboxQt
