/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/team/TeamRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
using namespace dropboxQt;
using namespace team;

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsCreate(const GroupCreateArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsCreate_Async, GroupFullInfo, arg);
}

void TeamRoutes::alphaGroupsCreate_Async(
    const GroupCreateArg& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupCreateArg,
        std::unique_ptr<GroupFullInfo>,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/alpha/groups/create",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::alphaGroupsGetInfo(const GroupsSelector& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsGetInfo_Async, std::list <GroupsGetInfoItem>, arg);
}

void TeamRoutes::alphaGroupsGetInfo_Async(
    const GroupsSelector& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsSelector,
        std::unique_ptr<std::list <GroupsGetInfoItem>>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/alpha/groups/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsList(const GroupsListArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsList_Async, GroupsListResult, arg);
}

void TeamRoutes::alphaGroupsList_Async(
    const GroupsListArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListArg,
        std::unique_ptr<GroupsListResult>,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/alpha/groups/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsListContinue(const GroupsListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsListContinue_Async, GroupsListResult, arg);
}

void TeamRoutes::alphaGroupsListContinue_Async(
    const GroupsListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        std::unique_ptr<GroupsListResult>,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/alpha/groups/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsUpdate(const GroupUpdateArgs& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsUpdate_Async, GroupFullInfo, arg);
}

void TeamRoutes::alphaGroupsUpdate_Async(
    const GroupUpdateArgs& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        std::unique_ptr<GroupFullInfo>,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/alpha/groups/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMemberDevicesResult> TeamRoutes::devicesListMemberDevices(const ListMemberDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListMemberDevices_Async, ListMemberDevicesResult, arg);
}

void TeamRoutes::devicesListMemberDevices_Async(
    const ListMemberDevicesArg& arg,
    std::function<void(std::unique_ptr<ListMemberDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMemberDevicesArg,
        std::unique_ptr<ListMemberDevicesResult>,
        ListMemberDevicesResult::factory,
        ListMemberDevicesErrorException>
        ("2/team/devices/list_member_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMembersDevicesResult> TeamRoutes::devicesListMembersDevices(const ListMembersDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListMembersDevices_Async, ListMembersDevicesResult, arg);
}

void TeamRoutes::devicesListMembersDevices_Async(
    const ListMembersDevicesArg& arg,
    std::function<void(std::unique_ptr<ListMembersDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMembersDevicesArg,
        std::unique_ptr<ListMembersDevicesResult>,
        ListMembersDevicesResult::factory,
        ListMembersDevicesErrorException>
        ("2/team/devices/list_members_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListTeamDevicesResult> TeamRoutes::devicesListTeamDevices(const ListTeamDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListTeamDevices_Async, ListTeamDevicesResult, arg);
}

void TeamRoutes::devicesListTeamDevices_Async(
    const ListTeamDevicesArg& arg,
    std::function<void(std::unique_ptr<ListTeamDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListTeamDevicesArg,
        std::unique_ptr<ListTeamDevicesResult>,
        ListTeamDevicesResult::factory,
        ListTeamDevicesErrorException>
        ("2/team/devices/list_team_devices",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::devicesRevokeDeviceSession(const RevokeDeviceSessionArg& arg ){
    VOID_RESULT_DBC(devicesRevokeDeviceSession_Async, arg);
}

void TeamRoutes::devicesRevokeDeviceSession_Async(
    const RevokeDeviceSessionArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeDeviceSessionArg,
        RevokeDeviceSessionErrorException>
        ("2/team/devices/revoke_device_session",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<RevokeDeviceSessionBatchResult> TeamRoutes::devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesRevokeDeviceSessionBatch_Async, RevokeDeviceSessionBatchResult, arg);
}

void TeamRoutes::devicesRevokeDeviceSessionBatch_Async(
    const RevokeDeviceSessionBatchArg& arg,
    std::function<void(std::unique_ptr<RevokeDeviceSessionBatchResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeDeviceSessionBatchArg,
        std::unique_ptr<RevokeDeviceSessionBatchResult>,
        RevokeDeviceSessionBatchResult::factory,
        RevokeDeviceSessionBatchErrorException>
        ("2/team/devices/revoke_device_session_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<TeamGetInfoResult> TeamRoutes::getInfo(void){
    VOID_ARG_DBC(getInfo_Async, TeamGetInfoResult);
}

void TeamRoutes::getInfo_Async(
    std::function<void(std::unique_ptr<TeamGetInfoResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        std::unique_ptr<TeamGetInfoResult>,
        TeamGetInfoResult::factory,
        DropboxException>
        ("2/team/get_info",
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsCreate(const GroupCreateArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsCreate_Async, GroupFullInfo, arg);
}

void TeamRoutes::groupsCreate_Async(
    const GroupCreateArg& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupCreateArg,
        std::unique_ptr<GroupFullInfo>,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/groups/create",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::groupsDelete(const GroupSelector& arg ){
    DROPBOX_BLOCKING_CALL(groupsDelete_Async, async::LaunchEmptyResult, arg);
}

void TeamRoutes::groupsDelete_Async(
    const GroupSelector& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupSelector,
        std::unique_ptr<async::LaunchEmptyResult>,
        async::LaunchEmptyResult::factory,
        GroupDeleteErrorException>
        ("2/team/groups/delete",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::groupsGetInfo(const GroupsSelector& arg ){
    DROPBOX_BLOCKING_CALL(groupsGetInfo_Async, std::list <GroupsGetInfoItem>, arg);
}

void TeamRoutes::groupsGetInfo_Async(
    const GroupsSelector& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsSelector,
        std::unique_ptr<std::list <GroupsGetInfoItem>>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/groups/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::groupsJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsJobStatusGet_Async, async::PollEmptyResult, arg);
}

void TeamRoutes::groupsJobStatusGet_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<async::PollEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<async::PollEmptyResult>,
        async::PollEmptyResult::factory,
        GroupsPollErrorException>
        ("2/team/groups/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsList(const GroupsListArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsList_Async, GroupsListResult, arg);
}

void TeamRoutes::groupsList_Async(
    const GroupsListArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListArg,
        std::unique_ptr<GroupsListResult>,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/groups/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsListContinue(const GroupsListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsListContinue_Async, GroupsListResult, arg);
}

void TeamRoutes::groupsListContinue_Async(
    const GroupsListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        std::unique_ptr<GroupsListResult>,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/groups/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersAdd(const GroupMembersAddArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersAdd_Async, GroupMembersChangeResult, arg);
}

void TeamRoutes::groupsMembersAdd_Async(
    const GroupMembersAddArg& arg,
    std::function<void(std::unique_ptr<GroupMembersChangeResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersAddArg,
        std::unique_ptr<GroupMembersChangeResult>,
        GroupMembersChangeResult::factory,
        GroupMembersAddErrorException>
        ("2/team/groups/members/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersList(const GroupsMembersListArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersList_Async, GroupsMembersListResult, arg);
}

void TeamRoutes::groupsMembersList_Async(
    const GroupsMembersListArg& arg,
    std::function<void(std::unique_ptr<GroupsMembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsMembersListArg,
        std::unique_ptr<GroupsMembersListResult>,
        GroupsMembersListResult::factory,
        GroupSelectorErrorException>
        ("2/team/groups/members/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersListContinue(const GroupsMembersListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersListContinue_Async, GroupsMembersListResult, arg);
}

void TeamRoutes::groupsMembersListContinue_Async(
    const GroupsMembersListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsMembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsMembersListContinueArg,
        std::unique_ptr<GroupsMembersListResult>,
        GroupsMembersListResult::factory,
        GroupsMembersListContinueErrorException>
        ("2/team/groups/members/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersRemove(const GroupMembersRemoveArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersRemove_Async, GroupMembersChangeResult, arg);
}

void TeamRoutes::groupsMembersRemove_Async(
    const GroupMembersRemoveArg& arg,
    std::function<void(std::unique_ptr<GroupMembersChangeResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersRemoveArg,
        std::unique_ptr<GroupMembersChangeResult>,
        GroupMembersChangeResult::factory,
        GroupMembersRemoveErrorException>
        ("2/team/groups/members/remove",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersSetAccessType_Async, std::list <GroupsGetInfoItem>, arg);
}

void TeamRoutes::groupsMembersSetAccessType_Async(
    const GroupMembersSetAccessTypeArg& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersSetAccessTypeArg,
        std::unique_ptr<std::list <GroupsGetInfoItem>>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupMemberSetAccessTypeErrorException>
        ("2/team/groups/members/set_access_type",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsUpdate(const GroupUpdateArgs& arg ){
    DROPBOX_BLOCKING_CALL(groupsUpdate_Async, GroupFullInfo, arg);
}

void TeamRoutes::groupsUpdate_Async(
    const GroupUpdateArgs& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        std::unique_ptr<GroupFullInfo>,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/groups/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMemberAppsResult> TeamRoutes::linkedAppsListMemberLinkedApps(const ListMemberAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListMemberLinkedApps_Async, ListMemberAppsResult, arg);
}

void TeamRoutes::linkedAppsListMemberLinkedApps_Async(
    const ListMemberAppsArg& arg,
    std::function<void(std::unique_ptr<ListMemberAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMemberAppsArg,
        std::unique_ptr<ListMemberAppsResult>,
        ListMemberAppsResult::factory,
        ListMemberAppsErrorException>
        ("2/team/linked_apps/list_member_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMembersAppsResult> TeamRoutes::linkedAppsListMembersLinkedApps(const ListMembersAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListMembersLinkedApps_Async, ListMembersAppsResult, arg);
}

void TeamRoutes::linkedAppsListMembersLinkedApps_Async(
    const ListMembersAppsArg& arg,
    std::function<void(std::unique_ptr<ListMembersAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMembersAppsArg,
        std::unique_ptr<ListMembersAppsResult>,
        ListMembersAppsResult::factory,
        ListMembersAppsErrorException>
        ("2/team/linked_apps/list_members_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListTeamAppsResult> TeamRoutes::linkedAppsListTeamLinkedApps(const ListTeamAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListTeamLinkedApps_Async, ListTeamAppsResult, arg);
}

void TeamRoutes::linkedAppsListTeamLinkedApps_Async(
    const ListTeamAppsArg& arg,
    std::function<void(std::unique_ptr<ListTeamAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListTeamAppsArg,
        std::unique_ptr<ListTeamAppsResult>,
        ListTeamAppsResult::factory,
        ListTeamAppsErrorException>
        ("2/team/linked_apps/list_team_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& arg ){
    VOID_RESULT_DBC(linkedAppsRevokeLinkedApp_Async, arg);
}

void TeamRoutes::linkedAppsRevokeLinkedApp_Async(
    const RevokeLinkedApiAppArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeLinkedApiAppArg,
        RevokeLinkedAppErrorException>
        ("2/team/linked_apps/revoke_linked_app",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<RevokeLinkedAppBatchResult> TeamRoutes::linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsRevokeLinkedAppBatch_Async, RevokeLinkedAppBatchResult, arg);
}

void TeamRoutes::linkedAppsRevokeLinkedAppBatch_Async(
    const RevokeLinkedApiAppBatchArg& arg,
    std::function<void(std::unique_ptr<RevokeLinkedAppBatchResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeLinkedApiAppBatchArg,
        std::unique_ptr<RevokeLinkedAppBatchResult>,
        RevokeLinkedAppBatchResult::factory,
        RevokeLinkedAppBatchErrorException>
        ("2/team/linked_apps/revoke_linked_app_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersAddLaunch> TeamRoutes::membersAdd(const MembersAddArg& arg ){
    DROPBOX_BLOCKING_CALL(membersAdd_Async, MembersAddLaunch, arg);
}

void TeamRoutes::membersAdd_Async(
    const MembersAddArg& arg,
    std::function<void(std::unique_ptr<MembersAddLaunch>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersAddArg,
        std::unique_ptr<MembersAddLaunch>,
        MembersAddLaunch::factory,
        DropboxException>
        ("2/team/members/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersAddJobStatus> TeamRoutes::membersAddJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(membersAddJobStatusGet_Async, MembersAddJobStatus, arg);
}

void TeamRoutes::membersAddJobStatusGet_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<MembersAddJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<MembersAddJobStatus>,
        MembersAddJobStatus::factory,
        PollErrorException>
        ("2/team/members/add/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <MembersGetInfoItem>> TeamRoutes::membersGetInfo(const MembersGetInfoArgs& arg ){
    DROPBOX_BLOCKING_CALL(membersGetInfo_Async, std::list <MembersGetInfoItem>, arg);
}

void TeamRoutes::membersGetInfo_Async(
    const MembersGetInfoArgs& arg,
    std::function<void(std::unique_ptr<std::list <MembersGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersGetInfoArgs,
        std::unique_ptr<std::list <MembersGetInfoItem>>,
        ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>,
        MembersGetInfoErrorException>
        ("2/team/members/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersList(const MembersListArg& arg ){
    DROPBOX_BLOCKING_CALL(membersList_Async, MembersListResult, arg);
}

void TeamRoutes::membersList_Async(
    const MembersListArg& arg,
    std::function<void(std::unique_ptr<MembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersListArg,
        std::unique_ptr<MembersListResult>,
        MembersListResult::factory,
        MembersListErrorException>
        ("2/team/members/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersListContinue(const MembersListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(membersListContinue_Async, MembersListResult, arg);
}

void TeamRoutes::membersListContinue_Async(
    const MembersListContinueArg& arg,
    std::function<void(std::unique_ptr<MembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersListContinueArg,
        std::unique_ptr<MembersListResult>,
        MembersListResult::factory,
        MembersListContinueErrorException>
        ("2/team/members/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersRecover(const MembersRecoverArg& arg ){
    VOID_RESULT_DBC(membersRecover_Async, arg);
}

void TeamRoutes::membersRecover_Async(
    const MembersRecoverArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersRecoverArg,
        MembersRecoverErrorException>
        ("2/team/members/recover",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::membersRemove(const MembersRemoveArg& arg ){
    DROPBOX_BLOCKING_CALL(membersRemove_Async, async::LaunchEmptyResult, arg);
}

void TeamRoutes::membersRemove_Async(
    const MembersRemoveArg& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersRemoveArg,
        std::unique_ptr<async::LaunchEmptyResult>,
        async::LaunchEmptyResult::factory,
        MembersRemoveErrorException>
        ("2/team/members/remove",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::membersRemoveJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(membersRemoveJobStatusGet_Async, async::PollEmptyResult, arg);
}

void TeamRoutes::membersRemoveJobStatusGet_Async(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<async::PollEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        std::unique_ptr<async::PollEmptyResult>,
        async::PollEmptyResult::factory,
        PollErrorException>
        ("2/team/members/remove/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersSendWelcomeEmail(const UserSelectorArg& arg ){
    VOID_RESULT_DBC(membersSendWelcomeEmail_Async, arg);
}

void TeamRoutes::membersSendWelcomeEmail_Async(
    const UserSelectorArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UserSelectorArg,
        MembersSendWelcomeErrorException>
        ("2/team/members/send_welcome_email",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersSetPermissionsResult> TeamRoutes::membersSetAdminPermissions(const MembersSetPermissionsArg& arg ){
    DROPBOX_BLOCKING_CALL(membersSetAdminPermissions_Async, MembersSetPermissionsResult, arg);
}

void TeamRoutes::membersSetAdminPermissions_Async(
    const MembersSetPermissionsArg& arg,
    std::function<void(std::unique_ptr<MembersSetPermissionsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersSetPermissionsArg,
        std::unique_ptr<MembersSetPermissionsResult>,
        MembersSetPermissionsResult::factory,
        MembersSetPermissionsErrorException>
        ("2/team/members/set_admin_permissions",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<TeamMemberInfo> TeamRoutes::membersSetProfile(const MembersSetProfileArg& arg ){
    DROPBOX_BLOCKING_CALL(membersSetProfile_Async, TeamMemberInfo, arg);
}

void TeamRoutes::membersSetProfile_Async(
    const MembersSetProfileArg& arg,
    std::function<void(std::unique_ptr<TeamMemberInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersSetProfileArg,
        std::unique_ptr<TeamMemberInfo>,
        TeamMemberInfo::factory,
        MembersSetProfileErrorException>
        ("2/team/members/set_profile",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersSuspend(const MembersDeactivateArg& arg ){
    VOID_RESULT_DBC(membersSuspend_Async, arg);
}

void TeamRoutes::membersSuspend_Async(
    const MembersDeactivateArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersDeactivateArg,
        MembersSuspendErrorException>
        ("2/team/members/suspend",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersUnsuspend(const MembersUnsuspendArg& arg ){
    VOID_RESULT_DBC(membersUnsuspend_Async, arg);
}

void TeamRoutes::membersUnsuspend_Async(
    const MembersUnsuspendArg& arg,
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersUnsuspendArg,
        MembersUnsuspendErrorException>
        ("2/team/members/unsuspend",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<AddPropertyTemplateResult> TeamRoutes::propertiesTemplateAdd(const AddPropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateAdd_Async, AddPropertyTemplateResult, arg);
}

void TeamRoutes::propertiesTemplateAdd_Async(
    const AddPropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<AddPropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        AddPropertyTemplateArg,
        std::unique_ptr<AddPropertyTemplateResult>,
        AddPropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::GetPropertyTemplateResult> TeamRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateGet_Async, properties::GetPropertyTemplateResult, arg);
}

void TeamRoutes::propertiesTemplateGet_Async(
    const properties::GetPropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<properties::GetPropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        properties::GetPropertyTemplateArg,
        std::unique_ptr<properties::GetPropertyTemplateResult>,
        properties::GetPropertyTemplateResult::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::ListPropertyTemplateIds> TeamRoutes::propertiesTemplateList(void){
    VOID_ARG_DBC(propertiesTemplateList_Async, properties::ListPropertyTemplateIds);
}

void TeamRoutes::propertiesTemplateList_Async(
    std::function<void(std::unique_ptr<properties::ListPropertyTemplateIds>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        std::unique_ptr<properties::ListPropertyTemplateIds>,
        properties::ListPropertyTemplateIds::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/list",
        completed_callback,
        failed_callback);
}

std::unique_ptr<UpdatePropertyTemplateResult> TeamRoutes::propertiesTemplateUpdate(const UpdatePropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateUpdate_Async, UpdatePropertyTemplateResult, arg);
}

void TeamRoutes::propertiesTemplateUpdate_Async(
    const UpdatePropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<UpdatePropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UpdatePropertyTemplateArg,
        std::unique_ptr<UpdatePropertyTemplateResult>,
        UpdatePropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetActivityReport> TeamRoutes::reportsGetActivity(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetActivity_Async, GetActivityReport, arg);
}

void TeamRoutes::reportsGetActivity_Async(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetActivityReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        std::unique_ptr<GetActivityReport>,
        GetActivityReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_activity",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetDevicesReport> TeamRoutes::reportsGetDevices(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetDevices_Async, GetDevicesReport, arg);
}

void TeamRoutes::reportsGetDevices_Async(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetDevicesReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        std::unique_ptr<GetDevicesReport>,
        GetDevicesReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetMembershipReport> TeamRoutes::reportsGetMembership(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetMembership_Async, GetMembershipReport, arg);
}

void TeamRoutes::reportsGetMembership_Async(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetMembershipReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        std::unique_ptr<GetMembershipReport>,
        GetMembershipReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_membership",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetStorageReport> TeamRoutes::reportsGetStorage(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetStorage_Async, GetStorageReport, arg);
}

void TeamRoutes::reportsGetStorage_Async(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetStorageReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        std::unique_ptr<GetStorageReport>,
        GetStorageReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_storage",
        arg,
        completed_callback,
        failed_callback);
}

IMPLEMENT_API_ERR_EXCEPTION(GroupCreateErrorException, team::GroupCreateError);
IMPLEMENT_API_ERR_EXCEPTION(GroupsGetInfoErrorException, team::GroupsGetInfoError);
IMPLEMENT_API_ERR_EXCEPTION(GroupsListContinueErrorException, team::GroupsListContinueError);
IMPLEMENT_API_ERR_EXCEPTION(GroupUpdateErrorException, team::GroupUpdateError);
IMPLEMENT_API_ERR_EXCEPTION(ListMemberDevicesErrorException, team::ListMemberDevicesError);
IMPLEMENT_API_ERR_EXCEPTION(ListMembersDevicesErrorException, team::ListMembersDevicesError);
IMPLEMENT_API_ERR_EXCEPTION(ListTeamDevicesErrorException, team::ListTeamDevicesError);
IMPLEMENT_API_ERR_EXCEPTION(RevokeDeviceSessionErrorException, team::RevokeDeviceSessionError);
IMPLEMENT_API_ERR_EXCEPTION(RevokeDeviceSessionBatchErrorException, team::RevokeDeviceSessionBatchError);
IMPLEMENT_API_ERR_EXCEPTION(GroupDeleteErrorException, team::GroupDeleteError);
IMPLEMENT_API_ERR_EXCEPTION(GroupsPollErrorException, team::GroupsPollError);
IMPLEMENT_API_ERR_EXCEPTION(GroupMembersAddErrorException, team::GroupMembersAddError);
IMPLEMENT_API_ERR_EXCEPTION(GroupSelectorErrorException, team::GroupSelectorError);
IMPLEMENT_API_ERR_EXCEPTION(GroupsMembersListContinueErrorException, team::GroupsMembersListContinueError);
IMPLEMENT_API_ERR_EXCEPTION(GroupMembersRemoveErrorException, team::GroupMembersRemoveError);
IMPLEMENT_API_ERR_EXCEPTION(GroupMemberSetAccessTypeErrorException, team::GroupMemberSetAccessTypeError);
IMPLEMENT_API_ERR_EXCEPTION(ListMemberAppsErrorException, team::ListMemberAppsError);
IMPLEMENT_API_ERR_EXCEPTION(ListMembersAppsErrorException, team::ListMembersAppsError);
IMPLEMENT_API_ERR_EXCEPTION(ListTeamAppsErrorException, team::ListTeamAppsError);
IMPLEMENT_API_ERR_EXCEPTION(RevokeLinkedAppErrorException, team::RevokeLinkedAppError);
IMPLEMENT_API_ERR_EXCEPTION(RevokeLinkedAppBatchErrorException, team::RevokeLinkedAppBatchError);
IMPLEMENT_API_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_API_ERR_EXCEPTION(MembersGetInfoErrorException, team::MembersGetInfoError);
IMPLEMENT_API_ERR_EXCEPTION(MembersListErrorException, team::MembersListError);
IMPLEMENT_API_ERR_EXCEPTION(MembersListContinueErrorException, team::MembersListContinueError);
IMPLEMENT_API_ERR_EXCEPTION(MembersRecoverErrorException, team::MembersRecoverError);
IMPLEMENT_API_ERR_EXCEPTION(MembersRemoveErrorException, team::MembersRemoveError);
IMPLEMENT_API_ERR_EXCEPTION(MembersSendWelcomeErrorException, team::MembersSendWelcomeError);
IMPLEMENT_API_ERR_EXCEPTION(MembersSetPermissionsErrorException, team::MembersSetPermissionsError);
IMPLEMENT_API_ERR_EXCEPTION(MembersSetProfileErrorException, team::MembersSetProfileError);
IMPLEMENT_API_ERR_EXCEPTION(MembersSuspendErrorException, team::MembersSuspendError);
IMPLEMENT_API_ERR_EXCEPTION(MembersUnsuspendErrorException, team::MembersUnsuspendError);
IMPLEMENT_API_ERR_EXCEPTION(ModifyPropertyTemplateErrorException, properties::ModifyPropertyTemplateError);
IMPLEMENT_API_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);
IMPLEMENT_API_ERR_EXCEPTION(DateRangeErrorException, team::DateRangeError);
