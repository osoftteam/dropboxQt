/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
#include "dropbox/endpoint/DropboxHost.h"

namespace dropboxQt{

namespace team{
TeamRoutes::TeamRoutes(Endpoint* p):m_end_point(p){
}

GroupFullInfo TeamRoutes::alphaGroupsCreate(const GroupCreateArg& arg){
    QJsonObject js(arg);
    GroupFullInfo r = m_end_point->rpcStyle<GroupFullInfo, StructFromJsonLoader<GroupFullInfo>, GroupCreateErrorException>("2/team/alpha/groups/create", js);
    return r;
}

std::list <GroupsGetInfoItem> TeamRoutes::alphaGroupsGetInfo(const GroupsSelector& arg){
    QJsonObject js(arg);
    std::list <GroupsGetInfoItem> r = m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/alpha/groups/get_info", js);
    return r;
}

GroupsListResult TeamRoutes::alphaGroupsList(const GroupsListArg& arg){
    QJsonObject js(arg);
    GroupsListResult r = m_end_point->rpcStyle<GroupsListResult, StructFromJsonLoader<GroupsListResult>, NotAnException>("2/team/alpha/groups/list", js);
    return r;
}

GroupsListResult TeamRoutes::alphaGroupsListContinue(const GroupsListContinueArg& arg){
    QJsonObject js(arg);
    GroupsListResult r = m_end_point->rpcStyle<GroupsListResult, StructFromJsonLoader<GroupsListResult>, GroupsListContinueErrorException>("2/team/alpha/groups/list/continue", js);
    return r;
}

GroupFullInfo TeamRoutes::alphaGroupsUpdate(const GroupUpdateArgs& arg){
    QJsonObject js(arg);
    GroupFullInfo r = m_end_point->rpcStyle<GroupFullInfo, StructFromJsonLoader<GroupFullInfo>, GroupUpdateErrorException>("2/team/alpha/groups/update", js);
    return r;
}

ListMemberDevicesResult TeamRoutes::devicesListMemberDevices(const ListMemberDevicesArg& arg){
    QJsonObject js(arg);
    ListMemberDevicesResult r = m_end_point->rpcStyle<ListMemberDevicesResult, StructFromJsonLoader<ListMemberDevicesResult>, ListMemberDevicesErrorException>("2/team/devices/list_member_devices", js);
    return r;
}

ListMembersDevicesResult TeamRoutes::devicesListMembersDevices(const ListMembersDevicesArg& arg){
    QJsonObject js(arg);
    ListMembersDevicesResult r = m_end_point->rpcStyle<ListMembersDevicesResult, StructFromJsonLoader<ListMembersDevicesResult>, ListMembersDevicesErrorException>("2/team/devices/list_members_devices", js);
    return r;
}

ListTeamDevicesResult TeamRoutes::devicesListTeamDevices(const ListTeamDevicesArg& arg){
    QJsonObject js(arg);
    ListTeamDevicesResult r = m_end_point->rpcStyle<ListTeamDevicesResult, StructFromJsonLoader<ListTeamDevicesResult>, ListTeamDevicesErrorException>("2/team/devices/list_team_devices", js);
    return r;
}

void TeamRoutes::devicesRevokeDeviceSession(const RevokeDeviceSessionArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, RevokeDeviceSessionErrorException>("2/team/devices/revoke_device_session", js);
}

RevokeDeviceSessionBatchResult TeamRoutes::devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg& arg){
    QJsonObject js(arg);
    RevokeDeviceSessionBatchResult r = m_end_point->rpcStyle<RevokeDeviceSessionBatchResult, StructFromJsonLoader<RevokeDeviceSessionBatchResult>, RevokeDeviceSessionBatchErrorException>("2/team/devices/revoke_device_session_batch", js);
    return r;
}

TeamGetInfoResult TeamRoutes::getInfo(void){
    static const QJsonObject js;
    TeamGetInfoResult r = m_end_point->rpcStyle<TeamGetInfoResult, StructFromJsonLoader<TeamGetInfoResult>, NotAnException >("2/team/get_info", js);
    return r;
}

GroupFullInfo TeamRoutes::groupsCreate(const GroupCreateArg& arg){
    QJsonObject js(arg);
    GroupFullInfo r = m_end_point->rpcStyle<GroupFullInfo, StructFromJsonLoader<GroupFullInfo>, GroupCreateErrorException>("2/team/groups/create", js);
    return r;
}

async::LaunchEmptyResult TeamRoutes::groupsDelete(const GroupSelector& arg){
    QJsonObject js(arg);
    async::LaunchEmptyResult r = m_end_point->rpcStyle<async::LaunchEmptyResult, StructFromJsonLoader<async::LaunchEmptyResult>, GroupDeleteErrorException>("2/team/groups/delete", js);
    return r;
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsGetInfo(const GroupsSelector& arg){
    QJsonObject js(arg);
    std::list <GroupsGetInfoItem> r = m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/groups/get_info", js);
    return r;
}

async::PollEmptyResult TeamRoutes::groupsJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    async::PollEmptyResult r = m_end_point->rpcStyle<async::PollEmptyResult, StructFromJsonLoader<async::PollEmptyResult>, GroupsPollErrorException>("2/team/groups/job_status/get", js);
    return r;
}

GroupsListResult TeamRoutes::groupsList(const GroupsListArg& arg){
    QJsonObject js(arg);
    GroupsListResult r = m_end_point->rpcStyle<GroupsListResult, StructFromJsonLoader<GroupsListResult>, NotAnException>("2/team/groups/list", js);
    return r;
}

GroupsListResult TeamRoutes::groupsListContinue(const GroupsListContinueArg& arg){
    QJsonObject js(arg);
    GroupsListResult r = m_end_point->rpcStyle<GroupsListResult, StructFromJsonLoader<GroupsListResult>, GroupsListContinueErrorException>("2/team/groups/list/continue", js);
    return r;
}

GroupMembersChangeResult TeamRoutes::groupsMembersAdd(const GroupMembersAddArg& arg){
    QJsonObject js(arg);
    GroupMembersChangeResult r = m_end_point->rpcStyle<GroupMembersChangeResult, StructFromJsonLoader<GroupMembersChangeResult>, GroupMembersAddErrorException>("2/team/groups/members/add", js);
    return r;
}

GroupsMembersListResult TeamRoutes::groupsMembersList(const GroupsMembersListArg& arg){
    QJsonObject js(arg);
    GroupsMembersListResult r = m_end_point->rpcStyle<GroupsMembersListResult, StructFromJsonLoader<GroupsMembersListResult>, GroupSelectorErrorException>("2/team/groups/members/list", js);
    return r;
}

GroupsMembersListResult TeamRoutes::groupsMembersListContinue(const GroupsMembersListContinueArg& arg){
    QJsonObject js(arg);
    GroupsMembersListResult r = m_end_point->rpcStyle<GroupsMembersListResult, StructFromJsonLoader<GroupsMembersListResult>, GroupsMembersListContinueErrorException>("2/team/groups/members/list/continue", js);
    return r;
}

GroupMembersChangeResult TeamRoutes::groupsMembersRemove(const GroupMembersRemoveArg& arg){
    QJsonObject js(arg);
    GroupMembersChangeResult r = m_end_point->rpcStyle<GroupMembersChangeResult, StructFromJsonLoader<GroupMembersChangeResult>, GroupMembersRemoveErrorException>("2/team/groups/members/remove", js);
    return r;
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& arg){
    QJsonObject js(arg);
    std::list <GroupsGetInfoItem> r = m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupMemberSetAccessTypeErrorException>("2/team/groups/members/set_access_type", js);
    return r;
}

GroupFullInfo TeamRoutes::groupsUpdate(const GroupUpdateArgs& arg){
    QJsonObject js(arg);
    GroupFullInfo r = m_end_point->rpcStyle<GroupFullInfo, StructFromJsonLoader<GroupFullInfo>, GroupUpdateErrorException>("2/team/groups/update", js);
    return r;
}

ListMemberAppsResult TeamRoutes::linkedAppsListMemberLinkedApps(const ListMemberAppsArg& arg){
    QJsonObject js(arg);
    ListMemberAppsResult r = m_end_point->rpcStyle<ListMemberAppsResult, StructFromJsonLoader<ListMemberAppsResult>, ListMemberAppsErrorException>("2/team/linked_apps/list_member_linked_apps", js);
    return r;
}

ListMembersAppsResult TeamRoutes::linkedAppsListMembersLinkedApps(const ListMembersAppsArg& arg){
    QJsonObject js(arg);
    ListMembersAppsResult r = m_end_point->rpcStyle<ListMembersAppsResult, StructFromJsonLoader<ListMembersAppsResult>, ListMembersAppsErrorException>("2/team/linked_apps/list_members_linked_apps", js);
    return r;
}

ListTeamAppsResult TeamRoutes::linkedAppsListTeamLinkedApps(const ListTeamAppsArg& arg){
    QJsonObject js(arg);
    ListTeamAppsResult r = m_end_point->rpcStyle<ListTeamAppsResult, StructFromJsonLoader<ListTeamAppsResult>, ListTeamAppsErrorException>("2/team/linked_apps/list_team_linked_apps", js);
    return r;
}

void TeamRoutes::linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, RevokeLinkedAppErrorException>("2/team/linked_apps/revoke_linked_app", js);
}

RevokeLinkedAppBatchResult TeamRoutes::linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg& arg){
    QJsonObject js(arg);
    RevokeLinkedAppBatchResult r = m_end_point->rpcStyle<RevokeLinkedAppBatchResult, StructFromJsonLoader<RevokeLinkedAppBatchResult>, RevokeLinkedAppBatchErrorException>("2/team/linked_apps/revoke_linked_app_batch", js);
    return r;
}

MembersAddLaunch TeamRoutes::membersAdd(const MembersAddArg& arg){
    QJsonObject js(arg);
    MembersAddLaunch r = m_end_point->rpcStyle<MembersAddLaunch, StructFromJsonLoader<MembersAddLaunch>, NotAnException>("2/team/members/add", js);
    return r;
}

MembersAddJobStatus TeamRoutes::membersAddJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    MembersAddJobStatus r = m_end_point->rpcStyle<MembersAddJobStatus, StructFromJsonLoader<MembersAddJobStatus>, PollErrorException>("2/team/members/add/job_status/get", js);
    return r;
}

std::list <MembersGetInfoItem> TeamRoutes::membersGetInfo(const MembersGetInfoArgs& arg){
    QJsonObject js(arg);
    std::list <MembersGetInfoItem> r = m_end_point->rpcStyle<std::list <MembersGetInfoItem>, ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>, MembersGetInfoErrorException>("2/team/members/get_info", js);
    return r;
}

MembersListResult TeamRoutes::membersList(const MembersListArg& arg){
    QJsonObject js(arg);
    MembersListResult r = m_end_point->rpcStyle<MembersListResult, StructFromJsonLoader<MembersListResult>, MembersListErrorException>("2/team/members/list", js);
    return r;
}

MembersListResult TeamRoutes::membersListContinue(const MembersListContinueArg& arg){
    QJsonObject js(arg);
    MembersListResult r = m_end_point->rpcStyle<MembersListResult, StructFromJsonLoader<MembersListResult>, MembersListContinueErrorException>("2/team/members/list/continue", js);
    return r;
}

void TeamRoutes::membersRecover(const MembersRecoverArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, MembersRecoverErrorException>("2/team/members/recover", js);
}

async::LaunchEmptyResult TeamRoutes::membersRemove(const MembersRemoveArg& arg){
    QJsonObject js(arg);
    async::LaunchEmptyResult r = m_end_point->rpcStyle<async::LaunchEmptyResult, StructFromJsonLoader<async::LaunchEmptyResult>, MembersRemoveErrorException>("2/team/members/remove", js);
    return r;
}

async::PollEmptyResult TeamRoutes::membersRemoveJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    async::PollEmptyResult r = m_end_point->rpcStyle<async::PollEmptyResult, StructFromJsonLoader<async::PollEmptyResult>, PollErrorException>("2/team/members/remove/job_status/get", js);
    return r;
}

void TeamRoutes::membersSendWelcomeEmail(const UserSelectorArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, MembersSendWelcomeErrorException>("2/team/members/send_welcome_email", js);
}

MembersSetPermissionsResult TeamRoutes::membersSetAdminPermissions(const MembersSetPermissionsArg& arg){
    QJsonObject js(arg);
    MembersSetPermissionsResult r = m_end_point->rpcStyle<MembersSetPermissionsResult, StructFromJsonLoader<MembersSetPermissionsResult>, MembersSetPermissionsErrorException>("2/team/members/set_admin_permissions", js);
    return r;
}

TeamMemberInfo TeamRoutes::membersSetProfile(const MembersSetProfileArg& arg){
    QJsonObject js(arg);
    TeamMemberInfo r = m_end_point->rpcStyle<TeamMemberInfo, StructFromJsonLoader<TeamMemberInfo>, MembersSetProfileErrorException>("2/team/members/set_profile", js);
    return r;
}

void TeamRoutes::membersSuspend(const MembersDeactivateArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, MembersSuspendErrorException>("2/team/members/suspend", js);
}

void TeamRoutes::membersUnsuspend(const MembersUnsuspendArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, MembersUnsuspendErrorException>("2/team/members/unsuspend", js);
}

AddPropertyTemplateResult TeamRoutes::propertiesTemplateAdd(const AddPropertyTemplateArg& arg){
    QJsonObject js(arg);
    AddPropertyTemplateResult r = m_end_point->rpcStyle<AddPropertyTemplateResult, StructFromJsonLoader<AddPropertyTemplateResult>, ModifyPropertyTemplateErrorException>("2/team/properties/template/add", js);
    return r;
}

properties::GetPropertyTemplateResult TeamRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg){
    QJsonObject js(arg);
    properties::GetPropertyTemplateResult r = m_end_point->rpcStyle<properties::GetPropertyTemplateResult, StructFromJsonLoader<properties::GetPropertyTemplateResult>, PropertyTemplateErrorException>("2/team/properties/template/get", js);
    return r;
}

properties::ListPropertyTemplateIds TeamRoutes::propertiesTemplateList(void){
    static const QJsonObject js;
    properties::ListPropertyTemplateIds r = m_end_point->rpcStyle<properties::ListPropertyTemplateIds, StructFromJsonLoader<properties::ListPropertyTemplateIds>, PropertyTemplateErrorException >("2/team/properties/template/list", js);
    return r;
}

UpdatePropertyTemplateResult TeamRoutes::propertiesTemplateUpdate(const UpdatePropertyTemplateArg& arg){
    QJsonObject js(arg);
    UpdatePropertyTemplateResult r = m_end_point->rpcStyle<UpdatePropertyTemplateResult, StructFromJsonLoader<UpdatePropertyTemplateResult>, ModifyPropertyTemplateErrorException>("2/team/properties/template/update", js);
    return r;
}

GetActivityReport TeamRoutes::reportsGetActivity(const DateRange& arg){
    QJsonObject js(arg);
    GetActivityReport r = m_end_point->rpcStyle<GetActivityReport, StructFromJsonLoader<GetActivityReport>, DateRangeErrorException>("2/team/reports/get_activity", js);
    return r;
}

GetDevicesReport TeamRoutes::reportsGetDevices(const DateRange& arg){
    QJsonObject js(arg);
    GetDevicesReport r = m_end_point->rpcStyle<GetDevicesReport, StructFromJsonLoader<GetDevicesReport>, DateRangeErrorException>("2/team/reports/get_devices", js);
    return r;
}

GetMembershipReport TeamRoutes::reportsGetMembership(const DateRange& arg){
    QJsonObject js(arg);
    GetMembershipReport r = m_end_point->rpcStyle<GetMembershipReport, StructFromJsonLoader<GetMembershipReport>, DateRangeErrorException>("2/team/reports/get_membership", js);
    return r;
}

GetStorageReport TeamRoutes::reportsGetStorage(const DateRange& arg){
    QJsonObject js(arg);
    GetStorageReport r = m_end_point->rpcStyle<GetStorageReport, StructFromJsonLoader<GetStorageReport>, DateRangeErrorException>("2/team/reports/get_storage", js);
    return r;
}

IMPLEMENT_DBOX_ERR_EXCEPTION(GroupCreateErrorException, team::GroupCreateError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupsGetInfoErrorException, team::GroupsGetInfoError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupsListContinueErrorException, team::GroupsListContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupUpdateErrorException, team::GroupUpdateError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListMemberDevicesErrorException, team::ListMemberDevicesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListMembersDevicesErrorException, team::ListMembersDevicesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListTeamDevicesErrorException, team::ListTeamDevicesError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RevokeDeviceSessionErrorException, team::RevokeDeviceSessionError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RevokeDeviceSessionBatchErrorException, team::RevokeDeviceSessionBatchError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupDeleteErrorException, team::GroupDeleteError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupsPollErrorException, team::GroupsPollError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupMembersAddErrorException, team::GroupMembersAddError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupSelectorErrorException, team::GroupSelectorError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupsMembersListContinueErrorException, team::GroupsMembersListContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupMembersRemoveErrorException, team::GroupMembersRemoveError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GroupMemberSetAccessTypeErrorException, team::GroupMemberSetAccessTypeError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListMemberAppsErrorException, team::ListMemberAppsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListMembersAppsErrorException, team::ListMembersAppsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ListTeamAppsErrorException, team::ListTeamAppsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RevokeLinkedAppErrorException, team::RevokeLinkedAppError);
IMPLEMENT_DBOX_ERR_EXCEPTION(RevokeLinkedAppBatchErrorException, team::RevokeLinkedAppBatchError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PollErrorException, async::PollError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersGetInfoErrorException, team::MembersGetInfoError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersListErrorException, team::MembersListError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersListContinueErrorException, team::MembersListContinueError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersRecoverErrorException, team::MembersRecoverError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersRemoveErrorException, team::MembersRemoveError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersSendWelcomeErrorException, team::MembersSendWelcomeError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersSetPermissionsErrorException, team::MembersSetPermissionsError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersSetProfileErrorException, team::MembersSetProfileError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersSuspendErrorException, team::MembersSuspendError);
IMPLEMENT_DBOX_ERR_EXCEPTION(MembersUnsuspendErrorException, team::MembersUnsuspendError);
IMPLEMENT_DBOX_ERR_EXCEPTION(ModifyPropertyTemplateErrorException, properties::ModifyPropertyTemplateError);
IMPLEMENT_DBOX_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);
IMPLEMENT_DBOX_ERR_EXCEPTION(DateRangeErrorException, team::DateRangeError);
}//team
}//dropboxQt
