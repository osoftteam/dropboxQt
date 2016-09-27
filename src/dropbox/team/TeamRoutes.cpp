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

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsCreate(const GroupCreateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupCreateErrorException>("2/team/alpha/groups/create", js);
}

std::list <GroupsGetInfoItem> TeamRoutes::alphaGroupsGetInfo(const GroupsSelector& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/alpha/groups/get_info", js);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsList(const GroupsListArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsListResult>, GroupsListResult::factory, NotAnException>("2/team/alpha/groups/list", js);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsListContinue(const GroupsListContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsListResult>, GroupsListResult::factory, GroupsListContinueErrorException>("2/team/alpha/groups/list/continue", js);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsUpdate(const GroupUpdateArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupUpdateErrorException>("2/team/alpha/groups/update", js);
}

std::unique_ptr<ListMemberDevicesResult> TeamRoutes::devicesListMemberDevices(const ListMemberDevicesArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListMemberDevicesResult>, ListMemberDevicesResult::factory, ListMemberDevicesErrorException>("2/team/devices/list_member_devices", js);
}

std::unique_ptr<ListMembersDevicesResult> TeamRoutes::devicesListMembersDevices(const ListMembersDevicesArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListMembersDevicesResult>, ListMembersDevicesResult::factory, ListMembersDevicesErrorException>("2/team/devices/list_members_devices", js);
}

std::unique_ptr<ListTeamDevicesResult> TeamRoutes::devicesListTeamDevices(const ListTeamDevicesArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListTeamDevicesResult>, ListTeamDevicesResult::factory, ListTeamDevicesErrorException>("2/team/devices/list_team_devices", js);
}

void TeamRoutes::devicesRevokeDeviceSession(const RevokeDeviceSessionArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, RevokeDeviceSessionErrorException>("2/team/devices/revoke_device_session", js);
}

std::unique_ptr<RevokeDeviceSessionBatchResult> TeamRoutes::devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<RevokeDeviceSessionBatchResult>, RevokeDeviceSessionBatchResult::factory, RevokeDeviceSessionBatchErrorException>("2/team/devices/revoke_device_session_batch", js);
}

std::unique_ptr<TeamGetInfoResult> TeamRoutes::getInfo(void){
    static const QJsonObject js;
    return m_end_point->rpcStyle< std::unique_ptr<TeamGetInfoResult>, TeamGetInfoResult::factory, NotAnException >("2/team/get_info", js);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsCreate(const GroupCreateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupCreateErrorException>("2/team/groups/create", js);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::groupsDelete(const GroupSelector& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, GroupDeleteErrorException>("2/team/groups/delete", js);
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsGetInfo(const GroupsSelector& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/groups/get_info", js);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::groupsJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::PollEmptyResult>, async::PollEmptyResult::factory, GroupsPollErrorException>("2/team/groups/job_status/get", js);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsList(const GroupsListArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsListResult>, GroupsListResult::factory, NotAnException>("2/team/groups/list", js);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsListContinue(const GroupsListContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsListResult>, GroupsListResult::factory, GroupsListContinueErrorException>("2/team/groups/list/continue", js);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersAdd(const GroupMembersAddArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupMembersChangeResult>, GroupMembersChangeResult::factory, GroupMembersAddErrorException>("2/team/groups/members/add", js);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersList(const GroupsMembersListArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsMembersListResult>, GroupsMembersListResult::factory, GroupSelectorErrorException>("2/team/groups/members/list", js);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersListContinue(const GroupsMembersListContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupsMembersListResult>, GroupsMembersListResult::factory, GroupsMembersListContinueErrorException>("2/team/groups/members/list/continue", js);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersRemove(const GroupMembersRemoveArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupMembersChangeResult>, GroupMembersChangeResult::factory, GroupMembersRemoveErrorException>("2/team/groups/members/remove", js);
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupMemberSetAccessTypeErrorException>("2/team/groups/members/set_access_type", js);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsUpdate(const GroupUpdateArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupUpdateErrorException>("2/team/groups/update", js);
}

std::unique_ptr<ListMemberAppsResult> TeamRoutes::linkedAppsListMemberLinkedApps(const ListMemberAppsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListMemberAppsResult>, ListMemberAppsResult::factory, ListMemberAppsErrorException>("2/team/linked_apps/list_member_linked_apps", js);
}

std::unique_ptr<ListMembersAppsResult> TeamRoutes::linkedAppsListMembersLinkedApps(const ListMembersAppsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListMembersAppsResult>, ListMembersAppsResult::factory, ListMembersAppsErrorException>("2/team/linked_apps/list_members_linked_apps", js);
}

std::unique_ptr<ListTeamAppsResult> TeamRoutes::linkedAppsListTeamLinkedApps(const ListTeamAppsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<ListTeamAppsResult>, ListTeamAppsResult::factory, ListTeamAppsErrorException>("2/team/linked_apps/list_team_linked_apps", js);
}

void TeamRoutes::linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, RevokeLinkedAppErrorException>("2/team/linked_apps/revoke_linked_app", js);
}

std::unique_ptr<RevokeLinkedAppBatchResult> TeamRoutes::linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<RevokeLinkedAppBatchResult>, RevokeLinkedAppBatchResult::factory, RevokeLinkedAppBatchErrorException>("2/team/linked_apps/revoke_linked_app_batch", js);
}

std::unique_ptr<MembersAddLaunch> TeamRoutes::membersAdd(const MembersAddArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MembersAddLaunch>, MembersAddLaunch::factory, NotAnException>("2/team/members/add", js);
}

std::unique_ptr<MembersAddJobStatus> TeamRoutes::membersAddJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MembersAddJobStatus>, MembersAddJobStatus::factory, PollErrorException>("2/team/members/add/job_status/get", js);
}

std::list <MembersGetInfoItem> TeamRoutes::membersGetInfo(const MembersGetInfoArgs& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <MembersGetInfoItem>, ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>, MembersGetInfoErrorException>("2/team/members/get_info", js);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersList(const MembersListArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MembersListResult>, MembersListResult::factory, MembersListErrorException>("2/team/members/list", js);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersListContinue(const MembersListContinueArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MembersListResult>, MembersListResult::factory, MembersListContinueErrorException>("2/team/members/list/continue", js);
}

void TeamRoutes::membersRecover(const MembersRecoverArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, MembersRecoverErrorException>("2/team/members/recover", js);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::membersRemove(const MembersRemoveArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, MembersRemoveErrorException>("2/team/members/remove", js);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::membersRemoveJobStatusGet(const async::PollArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<async::PollEmptyResult>, async::PollEmptyResult::factory, PollErrorException>("2/team/members/remove/job_status/get", js);
}

void TeamRoutes::membersSendWelcomeEmail(const UserSelectorArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, MembersSendWelcomeErrorException>("2/team/members/send_welcome_email", js);
}

std::unique_ptr<MembersSetPermissionsResult> TeamRoutes::membersSetAdminPermissions(const MembersSetPermissionsArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<MembersSetPermissionsResult>, MembersSetPermissionsResult::factory, MembersSetPermissionsErrorException>("2/team/members/set_admin_permissions", js);
}

std::unique_ptr<TeamMemberInfo> TeamRoutes::membersSetProfile(const MembersSetProfileArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<TeamMemberInfo>, TeamMemberInfo::factory, MembersSetProfileErrorException>("2/team/members/set_profile", js);
}

void TeamRoutes::membersSuspend(const MembersDeactivateArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, MembersSuspendErrorException>("2/team/members/suspend", js);
}

void TeamRoutes::membersUnsuspend(const MembersUnsuspendArg& arg){
    QJsonObject js(arg);
    m_end_point->rpcStyle< std::unique_ptr<VoidResult>, VoidResult, MembersUnsuspendErrorException>("2/team/members/unsuspend", js);
}

std::unique_ptr<AddPropertyTemplateResult> TeamRoutes::propertiesTemplateAdd(const AddPropertyTemplateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<AddPropertyTemplateResult>, AddPropertyTemplateResult::factory, ModifyPropertyTemplateErrorException>("2/team/properties/template/add", js);
}

std::unique_ptr<properties::GetPropertyTemplateResult> TeamRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<properties::GetPropertyTemplateResult>, properties::GetPropertyTemplateResult::factory, PropertyTemplateErrorException>("2/team/properties/template/get", js);
}

std::unique_ptr<properties::ListPropertyTemplateIds> TeamRoutes::propertiesTemplateList(void){
    static const QJsonObject js;
    return m_end_point->rpcStyle< std::unique_ptr<properties::ListPropertyTemplateIds>, properties::ListPropertyTemplateIds::factory, PropertyTemplateErrorException >("2/team/properties/template/list", js);
}

std::unique_ptr<UpdatePropertyTemplateResult> TeamRoutes::propertiesTemplateUpdate(const UpdatePropertyTemplateArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<UpdatePropertyTemplateResult>, UpdatePropertyTemplateResult::factory, ModifyPropertyTemplateErrorException>("2/team/properties/template/update", js);
}

std::unique_ptr<GetActivityReport> TeamRoutes::reportsGetActivity(const DateRange& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetActivityReport>, GetActivityReport::factory, DateRangeErrorException>("2/team/reports/get_activity", js);
}

std::unique_ptr<GetDevicesReport> TeamRoutes::reportsGetDevices(const DateRange& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetDevicesReport>, GetDevicesReport::factory, DateRangeErrorException>("2/team/reports/get_devices", js);
}

std::unique_ptr<GetMembershipReport> TeamRoutes::reportsGetMembership(const DateRange& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetMembershipReport>, GetMembershipReport::factory, DateRangeErrorException>("2/team/reports/get_membership", js);
}

std::unique_ptr<GetStorageReport> TeamRoutes::reportsGetStorage(const DateRange& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<GetStorageReport>, GetStorageReport::factory, DateRangeErrorException>("2/team/reports/get_storage", js);
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
