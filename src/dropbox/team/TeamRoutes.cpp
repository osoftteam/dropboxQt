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
    DROPBOX_BLOCKING_CALL(alphaGroupsCreate_AsyncCB, GroupFullInfo, arg);
}

DropboxTask<GroupFullInfo>* TeamRoutes::alphaGroupsCreate_Async(const GroupCreateArg& arg)
{
    DropboxTask<GroupFullInfo>* t = new DropboxTask<GroupFullInfo>();
    m_end_point->rpcStyle<
        GroupCreateArg,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/alpha/groups/create",
        arg,
        t);
    return t;
}

void TeamRoutes::alphaGroupsCreate_AsyncCB(
    const GroupCreateArg& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupCreateArg,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/alpha/groups/create",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::alphaGroupsGetInfo(const GroupsSelector& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsGetInfo_AsyncCB, std::list <GroupsGetInfoItem>, arg);
}

DropboxTask<std::list <GroupsGetInfoItem>>* TeamRoutes::alphaGroupsGetInfo_Async(const GroupsSelector& arg)
{
    DropboxTask<std::list <GroupsGetInfoItem>>* t = new DropboxTask<std::list <GroupsGetInfoItem>>();
    m_end_point->rpcStyle<
        GroupsSelector,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/alpha/groups/get_info",
        arg,
        t);
    return t;
}

void TeamRoutes::alphaGroupsGetInfo_AsyncCB(
    const GroupsSelector& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsSelector,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/alpha/groups/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsList(const GroupsListArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsList_AsyncCB, GroupsListResult, arg);
}

DropboxTask<GroupsListResult>* TeamRoutes::alphaGroupsList_Async(const GroupsListArg& arg)
{
    DropboxTask<GroupsListResult>* t = new DropboxTask<GroupsListResult>();
    m_end_point->rpcStyle<
        GroupsListArg,
        GroupsListResult,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/alpha/groups/list",
        arg,
        t);
    return t;
}

void TeamRoutes::alphaGroupsList_AsyncCB(
    const GroupsListArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListArg,
        GroupsListResult,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/alpha/groups/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsListContinue(const GroupsListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsListContinue_AsyncCB, GroupsListResult, arg);
}

DropboxTask<GroupsListResult>* TeamRoutes::alphaGroupsListContinue_Async(const GroupsListContinueArg& arg)
{
    DropboxTask<GroupsListResult>* t = new DropboxTask<GroupsListResult>();
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        GroupsListResult,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/alpha/groups/list/continue",
        arg,
        t);
    return t;
}

void TeamRoutes::alphaGroupsListContinue_AsyncCB(
    const GroupsListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        GroupsListResult,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/alpha/groups/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsUpdate(const GroupUpdateArgs& arg ){
    DROPBOX_BLOCKING_CALL(alphaGroupsUpdate_AsyncCB, GroupFullInfo, arg);
}

DropboxTask<GroupFullInfo>* TeamRoutes::alphaGroupsUpdate_Async(const GroupUpdateArgs& arg)
{
    DropboxTask<GroupFullInfo>* t = new DropboxTask<GroupFullInfo>();
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/alpha/groups/update",
        arg,
        t);
    return t;
}

void TeamRoutes::alphaGroupsUpdate_AsyncCB(
    const GroupUpdateArgs& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/alpha/groups/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMemberDevicesResult> TeamRoutes::devicesListMemberDevices(const ListMemberDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListMemberDevices_AsyncCB, ListMemberDevicesResult, arg);
}

DropboxTask<ListMemberDevicesResult>* TeamRoutes::devicesListMemberDevices_Async(const ListMemberDevicesArg& arg)
{
    DropboxTask<ListMemberDevicesResult>* t = new DropboxTask<ListMemberDevicesResult>();
    m_end_point->rpcStyle<
        ListMemberDevicesArg,
        ListMemberDevicesResult,
        ListMemberDevicesResult::factory,
        ListMemberDevicesErrorException>
        ("2/team/devices/list_member_devices",
        arg,
        t);
    return t;
}

void TeamRoutes::devicesListMemberDevices_AsyncCB(
    const ListMemberDevicesArg& arg,
    std::function<void(std::unique_ptr<ListMemberDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMemberDevicesArg,
        ListMemberDevicesResult,
        ListMemberDevicesResult::factory,
        ListMemberDevicesErrorException>
        ("2/team/devices/list_member_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMembersDevicesResult> TeamRoutes::devicesListMembersDevices(const ListMembersDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListMembersDevices_AsyncCB, ListMembersDevicesResult, arg);
}

DropboxTask<ListMembersDevicesResult>* TeamRoutes::devicesListMembersDevices_Async(const ListMembersDevicesArg& arg)
{
    DropboxTask<ListMembersDevicesResult>* t = new DropboxTask<ListMembersDevicesResult>();
    m_end_point->rpcStyle<
        ListMembersDevicesArg,
        ListMembersDevicesResult,
        ListMembersDevicesResult::factory,
        ListMembersDevicesErrorException>
        ("2/team/devices/list_members_devices",
        arg,
        t);
    return t;
}

void TeamRoutes::devicesListMembersDevices_AsyncCB(
    const ListMembersDevicesArg& arg,
    std::function<void(std::unique_ptr<ListMembersDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMembersDevicesArg,
        ListMembersDevicesResult,
        ListMembersDevicesResult::factory,
        ListMembersDevicesErrorException>
        ("2/team/devices/list_members_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListTeamDevicesResult> TeamRoutes::devicesListTeamDevices(const ListTeamDevicesArg& arg ){
    DROPBOX_BLOCKING_CALL(devicesListTeamDevices_AsyncCB, ListTeamDevicesResult, arg);
}

DropboxTask<ListTeamDevicesResult>* TeamRoutes::devicesListTeamDevices_Async(const ListTeamDevicesArg& arg)
{
    DropboxTask<ListTeamDevicesResult>* t = new DropboxTask<ListTeamDevicesResult>();
    m_end_point->rpcStyle<
        ListTeamDevicesArg,
        ListTeamDevicesResult,
        ListTeamDevicesResult::factory,
        ListTeamDevicesErrorException>
        ("2/team/devices/list_team_devices",
        arg,
        t);
    return t;
}

void TeamRoutes::devicesListTeamDevices_AsyncCB(
    const ListTeamDevicesArg& arg,
    std::function<void(std::unique_ptr<ListTeamDevicesResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListTeamDevicesArg,
        ListTeamDevicesResult,
        ListTeamDevicesResult::factory,
        ListTeamDevicesErrorException>
        ("2/team/devices/list_team_devices",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::devicesRevokeDeviceSession(const RevokeDeviceSessionArg& arg ){
    VOID_RESULT_DBC(devicesRevokeDeviceSession_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::devicesRevokeDeviceSession_Async(const RevokeDeviceSessionArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        RevokeDeviceSessionArg,
        RevokeDeviceSessionErrorException>
        ("2/team/devices/revoke_device_session",
        arg,
        t);
    return t;
}

void TeamRoutes::devicesRevokeDeviceSession_AsyncCB(
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
    DROPBOX_BLOCKING_CALL(devicesRevokeDeviceSessionBatch_AsyncCB, RevokeDeviceSessionBatchResult, arg);
}

DropboxTask<RevokeDeviceSessionBatchResult>* TeamRoutes::devicesRevokeDeviceSessionBatch_Async(const RevokeDeviceSessionBatchArg& arg)
{
    DropboxTask<RevokeDeviceSessionBatchResult>* t = new DropboxTask<RevokeDeviceSessionBatchResult>();
    m_end_point->rpcStyle<
        RevokeDeviceSessionBatchArg,
        RevokeDeviceSessionBatchResult,
        RevokeDeviceSessionBatchResult::factory,
        RevokeDeviceSessionBatchErrorException>
        ("2/team/devices/revoke_device_session_batch",
        arg,
        t);
    return t;
}

void TeamRoutes::devicesRevokeDeviceSessionBatch_AsyncCB(
    const RevokeDeviceSessionBatchArg& arg,
    std::function<void(std::unique_ptr<RevokeDeviceSessionBatchResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeDeviceSessionBatchArg,
        RevokeDeviceSessionBatchResult,
        RevokeDeviceSessionBatchResult::factory,
        RevokeDeviceSessionBatchErrorException>
        ("2/team/devices/revoke_device_session_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<TeamGetInfoResult> TeamRoutes::getInfo(void){
    VOID_ARG_DBC(getInfo_AsyncCB, TeamGetInfoResult);
}

DropboxTask<TeamGetInfoResult>* TeamRoutes::getInfo_Async()
{
    DropboxTask<TeamGetInfoResult>* t = new DropboxTask<TeamGetInfoResult>();
    m_end_point->rpcStyle<
        TeamGetInfoResult,
        TeamGetInfoResult::factory,
        DropboxException>
        ("2/team/get_info",
        t);
    return t;
}

void TeamRoutes::getInfo_AsyncCB(
    std::function<void(std::unique_ptr<TeamGetInfoResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        TeamGetInfoResult,
        TeamGetInfoResult::factory,
        DropboxException>
        ("2/team/get_info",
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsCreate(const GroupCreateArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsCreate_AsyncCB, GroupFullInfo, arg);
}

DropboxTask<GroupFullInfo>* TeamRoutes::groupsCreate_Async(const GroupCreateArg& arg)
{
    DropboxTask<GroupFullInfo>* t = new DropboxTask<GroupFullInfo>();
    m_end_point->rpcStyle<
        GroupCreateArg,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/groups/create",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsCreate_AsyncCB(
    const GroupCreateArg& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupCreateArg,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupCreateErrorException>
        ("2/team/groups/create",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::groupsDelete(const GroupSelector& arg ){
    DROPBOX_BLOCKING_CALL(groupsDelete_AsyncCB, async::LaunchEmptyResult, arg);
}

DropboxTask<async::LaunchEmptyResult>* TeamRoutes::groupsDelete_Async(const GroupSelector& arg)
{
    DropboxTask<async::LaunchEmptyResult>* t = new DropboxTask<async::LaunchEmptyResult>();
    m_end_point->rpcStyle<
        GroupSelector,
        async::LaunchEmptyResult,
        async::LaunchEmptyResult::factory,
        GroupDeleteErrorException>
        ("2/team/groups/delete",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsDelete_AsyncCB(
    const GroupSelector& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupSelector,
        async::LaunchEmptyResult,
        async::LaunchEmptyResult::factory,
        GroupDeleteErrorException>
        ("2/team/groups/delete",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::groupsGetInfo(const GroupsSelector& arg ){
    DROPBOX_BLOCKING_CALL(groupsGetInfo_AsyncCB, std::list <GroupsGetInfoItem>, arg);
}

DropboxTask<std::list <GroupsGetInfoItem>>* TeamRoutes::groupsGetInfo_Async(const GroupsSelector& arg)
{
    DropboxTask<std::list <GroupsGetInfoItem>>* t = new DropboxTask<std::list <GroupsGetInfoItem>>();
    m_end_point->rpcStyle<
        GroupsSelector,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/groups/get_info",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsGetInfo_AsyncCB(
    const GroupsSelector& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsSelector,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupsGetInfoErrorException>
        ("2/team/groups/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::groupsJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsJobStatusGet_AsyncCB, async::PollEmptyResult, arg);
}

DropboxTask<async::PollEmptyResult>* TeamRoutes::groupsJobStatusGet_Async(const async::PollArg& arg)
{
    DropboxTask<async::PollEmptyResult>* t = new DropboxTask<async::PollEmptyResult>();
    m_end_point->rpcStyle<
        async::PollArg,
        async::PollEmptyResult,
        async::PollEmptyResult::factory,
        GroupsPollErrorException>
        ("2/team/groups/job_status/get",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsJobStatusGet_AsyncCB(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<async::PollEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        async::PollEmptyResult,
        async::PollEmptyResult::factory,
        GroupsPollErrorException>
        ("2/team/groups/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsList(const GroupsListArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsList_AsyncCB, GroupsListResult, arg);
}

DropboxTask<GroupsListResult>* TeamRoutes::groupsList_Async(const GroupsListArg& arg)
{
    DropboxTask<GroupsListResult>* t = new DropboxTask<GroupsListResult>();
    m_end_point->rpcStyle<
        GroupsListArg,
        GroupsListResult,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/groups/list",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsList_AsyncCB(
    const GroupsListArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListArg,
        GroupsListResult,
        GroupsListResult::factory,
        DropboxException>
        ("2/team/groups/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsListContinue(const GroupsListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsListContinue_AsyncCB, GroupsListResult, arg);
}

DropboxTask<GroupsListResult>* TeamRoutes::groupsListContinue_Async(const GroupsListContinueArg& arg)
{
    DropboxTask<GroupsListResult>* t = new DropboxTask<GroupsListResult>();
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        GroupsListResult,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/groups/list/continue",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsListContinue_AsyncCB(
    const GroupsListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsListContinueArg,
        GroupsListResult,
        GroupsListResult::factory,
        GroupsListContinueErrorException>
        ("2/team/groups/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersAdd(const GroupMembersAddArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersAdd_AsyncCB, GroupMembersChangeResult, arg);
}

DropboxTask<GroupMembersChangeResult>* TeamRoutes::groupsMembersAdd_Async(const GroupMembersAddArg& arg)
{
    DropboxTask<GroupMembersChangeResult>* t = new DropboxTask<GroupMembersChangeResult>();
    m_end_point->rpcStyle<
        GroupMembersAddArg,
        GroupMembersChangeResult,
        GroupMembersChangeResult::factory,
        GroupMembersAddErrorException>
        ("2/team/groups/members/add",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsMembersAdd_AsyncCB(
    const GroupMembersAddArg& arg,
    std::function<void(std::unique_ptr<GroupMembersChangeResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersAddArg,
        GroupMembersChangeResult,
        GroupMembersChangeResult::factory,
        GroupMembersAddErrorException>
        ("2/team/groups/members/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersList(const GroupsMembersListArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersList_AsyncCB, GroupsMembersListResult, arg);
}

DropboxTask<GroupsMembersListResult>* TeamRoutes::groupsMembersList_Async(const GroupsMembersListArg& arg)
{
    DropboxTask<GroupsMembersListResult>* t = new DropboxTask<GroupsMembersListResult>();
    m_end_point->rpcStyle<
        GroupsMembersListArg,
        GroupsMembersListResult,
        GroupsMembersListResult::factory,
        GroupSelectorErrorException>
        ("2/team/groups/members/list",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsMembersList_AsyncCB(
    const GroupsMembersListArg& arg,
    std::function<void(std::unique_ptr<GroupsMembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsMembersListArg,
        GroupsMembersListResult,
        GroupsMembersListResult::factory,
        GroupSelectorErrorException>
        ("2/team/groups/members/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersListContinue(const GroupsMembersListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersListContinue_AsyncCB, GroupsMembersListResult, arg);
}

DropboxTask<GroupsMembersListResult>* TeamRoutes::groupsMembersListContinue_Async(const GroupsMembersListContinueArg& arg)
{
    DropboxTask<GroupsMembersListResult>* t = new DropboxTask<GroupsMembersListResult>();
    m_end_point->rpcStyle<
        GroupsMembersListContinueArg,
        GroupsMembersListResult,
        GroupsMembersListResult::factory,
        GroupsMembersListContinueErrorException>
        ("2/team/groups/members/list/continue",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsMembersListContinue_AsyncCB(
    const GroupsMembersListContinueArg& arg,
    std::function<void(std::unique_ptr<GroupsMembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupsMembersListContinueArg,
        GroupsMembersListResult,
        GroupsMembersListResult::factory,
        GroupsMembersListContinueErrorException>
        ("2/team/groups/members/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersRemove(const GroupMembersRemoveArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersRemove_AsyncCB, GroupMembersChangeResult, arg);
}

DropboxTask<GroupMembersChangeResult>* TeamRoutes::groupsMembersRemove_Async(const GroupMembersRemoveArg& arg)
{
    DropboxTask<GroupMembersChangeResult>* t = new DropboxTask<GroupMembersChangeResult>();
    m_end_point->rpcStyle<
        GroupMembersRemoveArg,
        GroupMembersChangeResult,
        GroupMembersChangeResult::factory,
        GroupMembersRemoveErrorException>
        ("2/team/groups/members/remove",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsMembersRemove_AsyncCB(
    const GroupMembersRemoveArg& arg,
    std::function<void(std::unique_ptr<GroupMembersChangeResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersRemoveArg,
        GroupMembersChangeResult,
        GroupMembersChangeResult::factory,
        GroupMembersRemoveErrorException>
        ("2/team/groups/members/remove",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <GroupsGetInfoItem>> TeamRoutes::groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& arg ){
    DROPBOX_BLOCKING_CALL(groupsMembersSetAccessType_AsyncCB, std::list <GroupsGetInfoItem>, arg);
}

DropboxTask<std::list <GroupsGetInfoItem>>* TeamRoutes::groupsMembersSetAccessType_Async(const GroupMembersSetAccessTypeArg& arg)
{
    DropboxTask<std::list <GroupsGetInfoItem>>* t = new DropboxTask<std::list <GroupsGetInfoItem>>();
    m_end_point->rpcStyle<
        GroupMembersSetAccessTypeArg,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupMemberSetAccessTypeErrorException>
        ("2/team/groups/members/set_access_type",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsMembersSetAccessType_AsyncCB(
    const GroupMembersSetAccessTypeArg& arg,
    std::function<void(std::unique_ptr<std::list <GroupsGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupMembersSetAccessTypeArg,
        std::list <GroupsGetInfoItem>,
        ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>,
        GroupMemberSetAccessTypeErrorException>
        ("2/team/groups/members/set_access_type",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsUpdate(const GroupUpdateArgs& arg ){
    DROPBOX_BLOCKING_CALL(groupsUpdate_AsyncCB, GroupFullInfo, arg);
}

DropboxTask<GroupFullInfo>* TeamRoutes::groupsUpdate_Async(const GroupUpdateArgs& arg)
{
    DropboxTask<GroupFullInfo>* t = new DropboxTask<GroupFullInfo>();
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/groups/update",
        arg,
        t);
    return t;
}

void TeamRoutes::groupsUpdate_AsyncCB(
    const GroupUpdateArgs& arg,
    std::function<void(std::unique_ptr<GroupFullInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GroupUpdateArgs,
        GroupFullInfo,
        GroupFullInfo::factory,
        GroupUpdateErrorException>
        ("2/team/groups/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMemberAppsResult> TeamRoutes::linkedAppsListMemberLinkedApps(const ListMemberAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListMemberLinkedApps_AsyncCB, ListMemberAppsResult, arg);
}

DropboxTask<ListMemberAppsResult>* TeamRoutes::linkedAppsListMemberLinkedApps_Async(const ListMemberAppsArg& arg)
{
    DropboxTask<ListMemberAppsResult>* t = new DropboxTask<ListMemberAppsResult>();
    m_end_point->rpcStyle<
        ListMemberAppsArg,
        ListMemberAppsResult,
        ListMemberAppsResult::factory,
        ListMemberAppsErrorException>
        ("2/team/linked_apps/list_member_linked_apps",
        arg,
        t);
    return t;
}

void TeamRoutes::linkedAppsListMemberLinkedApps_AsyncCB(
    const ListMemberAppsArg& arg,
    std::function<void(std::unique_ptr<ListMemberAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMemberAppsArg,
        ListMemberAppsResult,
        ListMemberAppsResult::factory,
        ListMemberAppsErrorException>
        ("2/team/linked_apps/list_member_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListMembersAppsResult> TeamRoutes::linkedAppsListMembersLinkedApps(const ListMembersAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListMembersLinkedApps_AsyncCB, ListMembersAppsResult, arg);
}

DropboxTask<ListMembersAppsResult>* TeamRoutes::linkedAppsListMembersLinkedApps_Async(const ListMembersAppsArg& arg)
{
    DropboxTask<ListMembersAppsResult>* t = new DropboxTask<ListMembersAppsResult>();
    m_end_point->rpcStyle<
        ListMembersAppsArg,
        ListMembersAppsResult,
        ListMembersAppsResult::factory,
        ListMembersAppsErrorException>
        ("2/team/linked_apps/list_members_linked_apps",
        arg,
        t);
    return t;
}

void TeamRoutes::linkedAppsListMembersLinkedApps_AsyncCB(
    const ListMembersAppsArg& arg,
    std::function<void(std::unique_ptr<ListMembersAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListMembersAppsArg,
        ListMembersAppsResult,
        ListMembersAppsResult::factory,
        ListMembersAppsErrorException>
        ("2/team/linked_apps/list_members_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<ListTeamAppsResult> TeamRoutes::linkedAppsListTeamLinkedApps(const ListTeamAppsArg& arg ){
    DROPBOX_BLOCKING_CALL(linkedAppsListTeamLinkedApps_AsyncCB, ListTeamAppsResult, arg);
}

DropboxTask<ListTeamAppsResult>* TeamRoutes::linkedAppsListTeamLinkedApps_Async(const ListTeamAppsArg& arg)
{
    DropboxTask<ListTeamAppsResult>* t = new DropboxTask<ListTeamAppsResult>();
    m_end_point->rpcStyle<
        ListTeamAppsArg,
        ListTeamAppsResult,
        ListTeamAppsResult::factory,
        ListTeamAppsErrorException>
        ("2/team/linked_apps/list_team_linked_apps",
        arg,
        t);
    return t;
}

void TeamRoutes::linkedAppsListTeamLinkedApps_AsyncCB(
    const ListTeamAppsArg& arg,
    std::function<void(std::unique_ptr<ListTeamAppsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        ListTeamAppsArg,
        ListTeamAppsResult,
        ListTeamAppsResult::factory,
        ListTeamAppsErrorException>
        ("2/team/linked_apps/list_team_linked_apps",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& arg ){
    VOID_RESULT_DBC(linkedAppsRevokeLinkedApp_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::linkedAppsRevokeLinkedApp_Async(const RevokeLinkedApiAppArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        RevokeLinkedApiAppArg,
        RevokeLinkedAppErrorException>
        ("2/team/linked_apps/revoke_linked_app",
        arg,
        t);
    return t;
}

void TeamRoutes::linkedAppsRevokeLinkedApp_AsyncCB(
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
    DROPBOX_BLOCKING_CALL(linkedAppsRevokeLinkedAppBatch_AsyncCB, RevokeLinkedAppBatchResult, arg);
}

DropboxTask<RevokeLinkedAppBatchResult>* TeamRoutes::linkedAppsRevokeLinkedAppBatch_Async(const RevokeLinkedApiAppBatchArg& arg)
{
    DropboxTask<RevokeLinkedAppBatchResult>* t = new DropboxTask<RevokeLinkedAppBatchResult>();
    m_end_point->rpcStyle<
        RevokeLinkedApiAppBatchArg,
        RevokeLinkedAppBatchResult,
        RevokeLinkedAppBatchResult::factory,
        RevokeLinkedAppBatchErrorException>
        ("2/team/linked_apps/revoke_linked_app_batch",
        arg,
        t);
    return t;
}

void TeamRoutes::linkedAppsRevokeLinkedAppBatch_AsyncCB(
    const RevokeLinkedApiAppBatchArg& arg,
    std::function<void(std::unique_ptr<RevokeLinkedAppBatchResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        RevokeLinkedApiAppBatchArg,
        RevokeLinkedAppBatchResult,
        RevokeLinkedAppBatchResult::factory,
        RevokeLinkedAppBatchErrorException>
        ("2/team/linked_apps/revoke_linked_app_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersAddLaunch> TeamRoutes::membersAdd(const MembersAddArg& arg ){
    DROPBOX_BLOCKING_CALL(membersAdd_AsyncCB, MembersAddLaunch, arg);
}

DropboxTask<MembersAddLaunch>* TeamRoutes::membersAdd_Async(const MembersAddArg& arg)
{
    DropboxTask<MembersAddLaunch>* t = new DropboxTask<MembersAddLaunch>();
    m_end_point->rpcStyle<
        MembersAddArg,
        MembersAddLaunch,
        MembersAddLaunch::factory,
        DropboxException>
        ("2/team/members/add",
        arg,
        t);
    return t;
}

void TeamRoutes::membersAdd_AsyncCB(
    const MembersAddArg& arg,
    std::function<void(std::unique_ptr<MembersAddLaunch>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersAddArg,
        MembersAddLaunch,
        MembersAddLaunch::factory,
        DropboxException>
        ("2/team/members/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersAddJobStatus> TeamRoutes::membersAddJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(membersAddJobStatusGet_AsyncCB, MembersAddJobStatus, arg);
}

DropboxTask<MembersAddJobStatus>* TeamRoutes::membersAddJobStatusGet_Async(const async::PollArg& arg)
{
    DropboxTask<MembersAddJobStatus>* t = new DropboxTask<MembersAddJobStatus>();
    m_end_point->rpcStyle<
        async::PollArg,
        MembersAddJobStatus,
        MembersAddJobStatus::factory,
        PollErrorException>
        ("2/team/members/add/job_status/get",
        arg,
        t);
    return t;
}

void TeamRoutes::membersAddJobStatusGet_AsyncCB(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<MembersAddJobStatus>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        MembersAddJobStatus,
        MembersAddJobStatus::factory,
        PollErrorException>
        ("2/team/members/add/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <MembersGetInfoItem>> TeamRoutes::membersGetInfo(const MembersGetInfoArgs& arg ){
    DROPBOX_BLOCKING_CALL(membersGetInfo_AsyncCB, std::list <MembersGetInfoItem>, arg);
}

DropboxTask<std::list <MembersGetInfoItem>>* TeamRoutes::membersGetInfo_Async(const MembersGetInfoArgs& arg)
{
    DropboxTask<std::list <MembersGetInfoItem>>* t = new DropboxTask<std::list <MembersGetInfoItem>>();
    m_end_point->rpcStyle<
        MembersGetInfoArgs,
        std::list <MembersGetInfoItem>,
        ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>,
        MembersGetInfoErrorException>
        ("2/team/members/get_info",
        arg,
        t);
    return t;
}

void TeamRoutes::membersGetInfo_AsyncCB(
    const MembersGetInfoArgs& arg,
    std::function<void(std::unique_ptr<std::list <MembersGetInfoItem>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersGetInfoArgs,
        std::list <MembersGetInfoItem>,
        ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>,
        MembersGetInfoErrorException>
        ("2/team/members/get_info",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersList(const MembersListArg& arg ){
    DROPBOX_BLOCKING_CALL(membersList_AsyncCB, MembersListResult, arg);
}

DropboxTask<MembersListResult>* TeamRoutes::membersList_Async(const MembersListArg& arg)
{
    DropboxTask<MembersListResult>* t = new DropboxTask<MembersListResult>();
    m_end_point->rpcStyle<
        MembersListArg,
        MembersListResult,
        MembersListResult::factory,
        MembersListErrorException>
        ("2/team/members/list",
        arg,
        t);
    return t;
}

void TeamRoutes::membersList_AsyncCB(
    const MembersListArg& arg,
    std::function<void(std::unique_ptr<MembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersListArg,
        MembersListResult,
        MembersListResult::factory,
        MembersListErrorException>
        ("2/team/members/list",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersListContinue(const MembersListContinueArg& arg ){
    DROPBOX_BLOCKING_CALL(membersListContinue_AsyncCB, MembersListResult, arg);
}

DropboxTask<MembersListResult>* TeamRoutes::membersListContinue_Async(const MembersListContinueArg& arg)
{
    DropboxTask<MembersListResult>* t = new DropboxTask<MembersListResult>();
    m_end_point->rpcStyle<
        MembersListContinueArg,
        MembersListResult,
        MembersListResult::factory,
        MembersListContinueErrorException>
        ("2/team/members/list/continue",
        arg,
        t);
    return t;
}

void TeamRoutes::membersListContinue_AsyncCB(
    const MembersListContinueArg& arg,
    std::function<void(std::unique_ptr<MembersListResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersListContinueArg,
        MembersListResult,
        MembersListResult::factory,
        MembersListContinueErrorException>
        ("2/team/members/list/continue",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersRecover(const MembersRecoverArg& arg ){
    VOID_RESULT_DBC(membersRecover_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::membersRecover_Async(const MembersRecoverArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        MembersRecoverArg,
        MembersRecoverErrorException>
        ("2/team/members/recover",
        arg,
        t);
    return t;
}

void TeamRoutes::membersRecover_AsyncCB(
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
    DROPBOX_BLOCKING_CALL(membersRemove_AsyncCB, async::LaunchEmptyResult, arg);
}

DropboxTask<async::LaunchEmptyResult>* TeamRoutes::membersRemove_Async(const MembersRemoveArg& arg)
{
    DropboxTask<async::LaunchEmptyResult>* t = new DropboxTask<async::LaunchEmptyResult>();
    m_end_point->rpcStyle<
        MembersRemoveArg,
        async::LaunchEmptyResult,
        async::LaunchEmptyResult::factory,
        MembersRemoveErrorException>
        ("2/team/members/remove",
        arg,
        t);
    return t;
}

void TeamRoutes::membersRemove_AsyncCB(
    const MembersRemoveArg& arg,
    std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersRemoveArg,
        async::LaunchEmptyResult,
        async::LaunchEmptyResult::factory,
        MembersRemoveErrorException>
        ("2/team/members/remove",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::membersRemoveJobStatusGet(const async::PollArg& arg ){
    DROPBOX_BLOCKING_CALL(membersRemoveJobStatusGet_AsyncCB, async::PollEmptyResult, arg);
}

DropboxTask<async::PollEmptyResult>* TeamRoutes::membersRemoveJobStatusGet_Async(const async::PollArg& arg)
{
    DropboxTask<async::PollEmptyResult>* t = new DropboxTask<async::PollEmptyResult>();
    m_end_point->rpcStyle<
        async::PollArg,
        async::PollEmptyResult,
        async::PollEmptyResult::factory,
        PollErrorException>
        ("2/team/members/remove/job_status/get",
        arg,
        t);
    return t;
}

void TeamRoutes::membersRemoveJobStatusGet_AsyncCB(
    const async::PollArg& arg,
    std::function<void(std::unique_ptr<async::PollEmptyResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        async::PollArg,
        async::PollEmptyResult,
        async::PollEmptyResult::factory,
        PollErrorException>
        ("2/team/members/remove/job_status/get",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersSendWelcomeEmail(const UserSelectorArg& arg ){
    VOID_RESULT_DBC(membersSendWelcomeEmail_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::membersSendWelcomeEmail_Async(const UserSelectorArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        UserSelectorArg,
        MembersSendWelcomeErrorException>
        ("2/team/members/send_welcome_email",
        arg,
        t);
    return t;
}

void TeamRoutes::membersSendWelcomeEmail_AsyncCB(
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
    DROPBOX_BLOCKING_CALL(membersSetAdminPermissions_AsyncCB, MembersSetPermissionsResult, arg);
}

DropboxTask<MembersSetPermissionsResult>* TeamRoutes::membersSetAdminPermissions_Async(const MembersSetPermissionsArg& arg)
{
    DropboxTask<MembersSetPermissionsResult>* t = new DropboxTask<MembersSetPermissionsResult>();
    m_end_point->rpcStyle<
        MembersSetPermissionsArg,
        MembersSetPermissionsResult,
        MembersSetPermissionsResult::factory,
        MembersSetPermissionsErrorException>
        ("2/team/members/set_admin_permissions",
        arg,
        t);
    return t;
}

void TeamRoutes::membersSetAdminPermissions_AsyncCB(
    const MembersSetPermissionsArg& arg,
    std::function<void(std::unique_ptr<MembersSetPermissionsResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersSetPermissionsArg,
        MembersSetPermissionsResult,
        MembersSetPermissionsResult::factory,
        MembersSetPermissionsErrorException>
        ("2/team/members/set_admin_permissions",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<TeamMemberInfo> TeamRoutes::membersSetProfile(const MembersSetProfileArg& arg ){
    DROPBOX_BLOCKING_CALL(membersSetProfile_AsyncCB, TeamMemberInfo, arg);
}

DropboxTask<TeamMemberInfo>* TeamRoutes::membersSetProfile_Async(const MembersSetProfileArg& arg)
{
    DropboxTask<TeamMemberInfo>* t = new DropboxTask<TeamMemberInfo>();
    m_end_point->rpcStyle<
        MembersSetProfileArg,
        TeamMemberInfo,
        TeamMemberInfo::factory,
        MembersSetProfileErrorException>
        ("2/team/members/set_profile",
        arg,
        t);
    return t;
}

void TeamRoutes::membersSetProfile_AsyncCB(
    const MembersSetProfileArg& arg,
    std::function<void(std::unique_ptr<TeamMemberInfo>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        MembersSetProfileArg,
        TeamMemberInfo,
        TeamMemberInfo::factory,
        MembersSetProfileErrorException>
        ("2/team/members/set_profile",
        arg,
        completed_callback,
        failed_callback);
}

void TeamRoutes::membersSuspend(const MembersDeactivateArg& arg ){
    VOID_RESULT_DBC(membersSuspend_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::membersSuspend_Async(const MembersDeactivateArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        MembersDeactivateArg,
        MembersSuspendErrorException>
        ("2/team/members/suspend",
        arg,
        t);
    return t;
}

void TeamRoutes::membersSuspend_AsyncCB(
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
    VOID_RESULT_DBC(membersUnsuspend_AsyncCB, arg);
}

DropboxVoidTask* TeamRoutes::membersUnsuspend_Async(const MembersUnsuspendArg& arg)
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        MembersUnsuspendArg,
        MembersUnsuspendErrorException>
        ("2/team/members/unsuspend",
        arg,
        t);
    return t;
}

void TeamRoutes::membersUnsuspend_AsyncCB(
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
    DROPBOX_BLOCKING_CALL(propertiesTemplateAdd_AsyncCB, AddPropertyTemplateResult, arg);
}

DropboxTask<AddPropertyTemplateResult>* TeamRoutes::propertiesTemplateAdd_Async(const AddPropertyTemplateArg& arg)
{
    DropboxTask<AddPropertyTemplateResult>* t = new DropboxTask<AddPropertyTemplateResult>();
    m_end_point->rpcStyle<
        AddPropertyTemplateArg,
        AddPropertyTemplateResult,
        AddPropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/add",
        arg,
        t);
    return t;
}

void TeamRoutes::propertiesTemplateAdd_AsyncCB(
    const AddPropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<AddPropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        AddPropertyTemplateArg,
        AddPropertyTemplateResult,
        AddPropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/add",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::GetPropertyTemplateResult> TeamRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateGet_AsyncCB, properties::GetPropertyTemplateResult, arg);
}

DropboxTask<properties::GetPropertyTemplateResult>* TeamRoutes::propertiesTemplateGet_Async(const properties::GetPropertyTemplateArg& arg)
{
    DropboxTask<properties::GetPropertyTemplateResult>* t = new DropboxTask<properties::GetPropertyTemplateResult>();
    m_end_point->rpcStyle<
        properties::GetPropertyTemplateArg,
        properties::GetPropertyTemplateResult,
        properties::GetPropertyTemplateResult::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/get",
        arg,
        t);
    return t;
}

void TeamRoutes::propertiesTemplateGet_AsyncCB(
    const properties::GetPropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<properties::GetPropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        properties::GetPropertyTemplateArg,
        properties::GetPropertyTemplateResult,
        properties::GetPropertyTemplateResult::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/get",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<properties::ListPropertyTemplateIds> TeamRoutes::propertiesTemplateList(void){
    VOID_ARG_DBC(propertiesTemplateList_AsyncCB, properties::ListPropertyTemplateIds);
}

DropboxTask<properties::ListPropertyTemplateIds>* TeamRoutes::propertiesTemplateList_Async()
{
    DropboxTask<properties::ListPropertyTemplateIds>* t = new DropboxTask<properties::ListPropertyTemplateIds>();
    m_end_point->rpcStyle<
        properties::ListPropertyTemplateIds,
        properties::ListPropertyTemplateIds::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/list",
        t);
    return t;
}

void TeamRoutes::propertiesTemplateList_AsyncCB(
    std::function<void(std::unique_ptr<properties::ListPropertyTemplateIds>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        properties::ListPropertyTemplateIds,
        properties::ListPropertyTemplateIds::factory,
        PropertyTemplateErrorException>
        ("2/team/properties/template/list",
        completed_callback,
        failed_callback);
}

std::unique_ptr<UpdatePropertyTemplateResult> TeamRoutes::propertiesTemplateUpdate(const UpdatePropertyTemplateArg& arg ){
    DROPBOX_BLOCKING_CALL(propertiesTemplateUpdate_AsyncCB, UpdatePropertyTemplateResult, arg);
}

DropboxTask<UpdatePropertyTemplateResult>* TeamRoutes::propertiesTemplateUpdate_Async(const UpdatePropertyTemplateArg& arg)
{
    DropboxTask<UpdatePropertyTemplateResult>* t = new DropboxTask<UpdatePropertyTemplateResult>();
    m_end_point->rpcStyle<
        UpdatePropertyTemplateArg,
        UpdatePropertyTemplateResult,
        UpdatePropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/update",
        arg,
        t);
    return t;
}

void TeamRoutes::propertiesTemplateUpdate_AsyncCB(
    const UpdatePropertyTemplateArg& arg,
    std::function<void(std::unique_ptr<UpdatePropertyTemplateResult>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        UpdatePropertyTemplateArg,
        UpdatePropertyTemplateResult,
        UpdatePropertyTemplateResult::factory,
        ModifyPropertyTemplateErrorException>
        ("2/team/properties/template/update",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetActivityReport> TeamRoutes::reportsGetActivity(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetActivity_AsyncCB, GetActivityReport, arg);
}

DropboxTask<GetActivityReport>* TeamRoutes::reportsGetActivity_Async(const DateRange& arg)
{
    DropboxTask<GetActivityReport>* t = new DropboxTask<GetActivityReport>();
    m_end_point->rpcStyle<
        DateRange,
        GetActivityReport,
        GetActivityReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_activity",
        arg,
        t);
    return t;
}

void TeamRoutes::reportsGetActivity_AsyncCB(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetActivityReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        GetActivityReport,
        GetActivityReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_activity",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetDevicesReport> TeamRoutes::reportsGetDevices(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetDevices_AsyncCB, GetDevicesReport, arg);
}

DropboxTask<GetDevicesReport>* TeamRoutes::reportsGetDevices_Async(const DateRange& arg)
{
    DropboxTask<GetDevicesReport>* t = new DropboxTask<GetDevicesReport>();
    m_end_point->rpcStyle<
        DateRange,
        GetDevicesReport,
        GetDevicesReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_devices",
        arg,
        t);
    return t;
}

void TeamRoutes::reportsGetDevices_AsyncCB(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetDevicesReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        GetDevicesReport,
        GetDevicesReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_devices",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetMembershipReport> TeamRoutes::reportsGetMembership(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetMembership_AsyncCB, GetMembershipReport, arg);
}

DropboxTask<GetMembershipReport>* TeamRoutes::reportsGetMembership_Async(const DateRange& arg)
{
    DropboxTask<GetMembershipReport>* t = new DropboxTask<GetMembershipReport>();
    m_end_point->rpcStyle<
        DateRange,
        GetMembershipReport,
        GetMembershipReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_membership",
        arg,
        t);
    return t;
}

void TeamRoutes::reportsGetMembership_AsyncCB(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetMembershipReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        GetMembershipReport,
        GetMembershipReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_membership",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<GetStorageReport> TeamRoutes::reportsGetStorage(const DateRange& arg ){
    DROPBOX_BLOCKING_CALL(reportsGetStorage_AsyncCB, GetStorageReport, arg);
}

DropboxTask<GetStorageReport>* TeamRoutes::reportsGetStorage_Async(const DateRange& arg)
{
    DropboxTask<GetStorageReport>* t = new DropboxTask<GetStorageReport>();
    m_end_point->rpcStyle<
        DateRange,
        GetStorageReport,
        GetStorageReport::factory,
        DateRangeErrorException>
        ("2/team/reports/get_storage",
        arg,
        t);
    return t;
}

void TeamRoutes::reportsGetStorage_AsyncCB(
    const DateRange& arg,
    std::function<void(std::unique_ptr<GetStorageReport>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DateRange,
        GetStorageReport,
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
