/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/team/TeamRoutes.h"
#include "dropbox/endpoint/Endpoint.h"

namespace dropboxQt{

namespace team{
TeamRoutes::TeamRoutes(Endpoint* p):m_end_point(p){
}

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsCreate(const GroupCreateArg& arg ){
    return m_end_point->rpcStyle<GroupCreateArg, std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupCreateErrorException>("2/team/alpha/groups/create", arg);
}

std::list <GroupsGetInfoItem> TeamRoutes::alphaGroupsGetInfo(const GroupsSelector& arg ){
    return m_end_point->rpcStyle<GroupsSelector, std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/alpha/groups/get_info", arg);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsList(const GroupsListArg& arg ){
    return m_end_point->rpcStyle<GroupsListArg, std::unique_ptr<GroupsListResult>, GroupsListResult::factory, NotAnException>("2/team/alpha/groups/list", arg);
}

std::unique_ptr<GroupsListResult> TeamRoutes::alphaGroupsListContinue(const GroupsListContinueArg& arg ){
    return m_end_point->rpcStyle<GroupsListContinueArg, std::unique_ptr<GroupsListResult>, GroupsListResult::factory, GroupsListContinueErrorException>("2/team/alpha/groups/list/continue", arg);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::alphaGroupsUpdate(const GroupUpdateArgs& arg ){
    return m_end_point->rpcStyle<GroupUpdateArgs, std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupUpdateErrorException>("2/team/alpha/groups/update", arg);
}

std::unique_ptr<ListMemberDevicesResult> TeamRoutes::devicesListMemberDevices(const ListMemberDevicesArg& arg ){
    return m_end_point->rpcStyle<ListMemberDevicesArg, std::unique_ptr<ListMemberDevicesResult>, ListMemberDevicesResult::factory, ListMemberDevicesErrorException>("2/team/devices/list_member_devices", arg);
}

std::unique_ptr<ListMembersDevicesResult> TeamRoutes::devicesListMembersDevices(const ListMembersDevicesArg& arg ){
    return m_end_point->rpcStyle<ListMembersDevicesArg, std::unique_ptr<ListMembersDevicesResult>, ListMembersDevicesResult::factory, ListMembersDevicesErrorException>("2/team/devices/list_members_devices", arg);
}

std::unique_ptr<ListTeamDevicesResult> TeamRoutes::devicesListTeamDevices(const ListTeamDevicesArg& arg ){
    return m_end_point->rpcStyle<ListTeamDevicesArg, std::unique_ptr<ListTeamDevicesResult>, ListTeamDevicesResult::factory, ListTeamDevicesErrorException>("2/team/devices/list_team_devices", arg);
}

void TeamRoutes::devicesRevokeDeviceSession(const RevokeDeviceSessionArg& arg ){
    m_end_point->rpcStyle<RevokeDeviceSessionArg, std::unique_ptr<VoidType>, VoidType, RevokeDeviceSessionErrorException>("2/team/devices/revoke_device_session", arg);
}

std::unique_ptr<RevokeDeviceSessionBatchResult> TeamRoutes::devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg& arg ){
    return m_end_point->rpcStyle<RevokeDeviceSessionBatchArg, std::unique_ptr<RevokeDeviceSessionBatchResult>, RevokeDeviceSessionBatchResult::factory, RevokeDeviceSessionBatchErrorException>("2/team/devices/revoke_device_session_batch", arg);
}

std::unique_ptr<TeamGetInfoResult> TeamRoutes::getInfo(void){
    return m_end_point->rpcStyle<VoidType, std::unique_ptr<TeamGetInfoResult>, TeamGetInfoResult::factory, NotAnException >("2/team/get_info", VoidType::instance());
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsCreate(const GroupCreateArg& arg ){
    return m_end_point->rpcStyle<GroupCreateArg, std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupCreateErrorException>("2/team/groups/create", arg);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::groupsDelete(const GroupSelector& arg ){
    return m_end_point->rpcStyle<GroupSelector, std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, GroupDeleteErrorException>("2/team/groups/delete", arg);
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsGetInfo(const GroupsSelector& arg ){
    return m_end_point->rpcStyle<GroupsSelector, std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupsGetInfoErrorException>("2/team/groups/get_info", arg);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::groupsJobStatusGet(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<async::PollEmptyResult>, async::PollEmptyResult::factory, GroupsPollErrorException>("2/team/groups/job_status/get", arg);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsList(const GroupsListArg& arg ){
    return m_end_point->rpcStyle<GroupsListArg, std::unique_ptr<GroupsListResult>, GroupsListResult::factory, NotAnException>("2/team/groups/list", arg);
}

std::unique_ptr<GroupsListResult> TeamRoutes::groupsListContinue(const GroupsListContinueArg& arg ){
    return m_end_point->rpcStyle<GroupsListContinueArg, std::unique_ptr<GroupsListResult>, GroupsListResult::factory, GroupsListContinueErrorException>("2/team/groups/list/continue", arg);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersAdd(const GroupMembersAddArg& arg ){
    return m_end_point->rpcStyle<GroupMembersAddArg, std::unique_ptr<GroupMembersChangeResult>, GroupMembersChangeResult::factory, GroupMembersAddErrorException>("2/team/groups/members/add", arg);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersList(const GroupsMembersListArg& arg ){
    return m_end_point->rpcStyle<GroupsMembersListArg, std::unique_ptr<GroupsMembersListResult>, GroupsMembersListResult::factory, GroupSelectorErrorException>("2/team/groups/members/list", arg);
}

std::unique_ptr<GroupsMembersListResult> TeamRoutes::groupsMembersListContinue(const GroupsMembersListContinueArg& arg ){
    return m_end_point->rpcStyle<GroupsMembersListContinueArg, std::unique_ptr<GroupsMembersListResult>, GroupsMembersListResult::factory, GroupsMembersListContinueErrorException>("2/team/groups/members/list/continue", arg);
}

std::unique_ptr<GroupMembersChangeResult> TeamRoutes::groupsMembersRemove(const GroupMembersRemoveArg& arg ){
    return m_end_point->rpcStyle<GroupMembersRemoveArg, std::unique_ptr<GroupMembersChangeResult>, GroupMembersChangeResult::factory, GroupMembersRemoveErrorException>("2/team/groups/members/remove", arg);
}

std::list <GroupsGetInfoItem> TeamRoutes::groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg& arg ){
    return m_end_point->rpcStyle<GroupMembersSetAccessTypeArg, std::list <GroupsGetInfoItem>, ListFromJsonLoader<std::list <GroupsGetInfoItem>, GroupsGetInfoItem>, GroupMemberSetAccessTypeErrorException>("2/team/groups/members/set_access_type", arg);
}

std::unique_ptr<GroupFullInfo> TeamRoutes::groupsUpdate(const GroupUpdateArgs& arg ){
    return m_end_point->rpcStyle<GroupUpdateArgs, std::unique_ptr<GroupFullInfo>, GroupFullInfo::factory, GroupUpdateErrorException>("2/team/groups/update", arg);
}

std::unique_ptr<ListMemberAppsResult> TeamRoutes::linkedAppsListMemberLinkedApps(const ListMemberAppsArg& arg ){
    return m_end_point->rpcStyle<ListMemberAppsArg, std::unique_ptr<ListMemberAppsResult>, ListMemberAppsResult::factory, ListMemberAppsErrorException>("2/team/linked_apps/list_member_linked_apps", arg);
}

std::unique_ptr<ListMembersAppsResult> TeamRoutes::linkedAppsListMembersLinkedApps(const ListMembersAppsArg& arg ){
    return m_end_point->rpcStyle<ListMembersAppsArg, std::unique_ptr<ListMembersAppsResult>, ListMembersAppsResult::factory, ListMembersAppsErrorException>("2/team/linked_apps/list_members_linked_apps", arg);
}

std::unique_ptr<ListTeamAppsResult> TeamRoutes::linkedAppsListTeamLinkedApps(const ListTeamAppsArg& arg ){
    return m_end_point->rpcStyle<ListTeamAppsArg, std::unique_ptr<ListTeamAppsResult>, ListTeamAppsResult::factory, ListTeamAppsErrorException>("2/team/linked_apps/list_team_linked_apps", arg);
}

void TeamRoutes::linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg& arg ){
    m_end_point->rpcStyle<RevokeLinkedApiAppArg, std::unique_ptr<VoidType>, VoidType, RevokeLinkedAppErrorException>("2/team/linked_apps/revoke_linked_app", arg);
}

std::unique_ptr<RevokeLinkedAppBatchResult> TeamRoutes::linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg& arg ){
    return m_end_point->rpcStyle<RevokeLinkedApiAppBatchArg, std::unique_ptr<RevokeLinkedAppBatchResult>, RevokeLinkedAppBatchResult::factory, RevokeLinkedAppBatchErrorException>("2/team/linked_apps/revoke_linked_app_batch", arg);
}

std::unique_ptr<MembersAddLaunch> TeamRoutes::membersAdd(const MembersAddArg& arg ){
    return m_end_point->rpcStyle<MembersAddArg, std::unique_ptr<MembersAddLaunch>, MembersAddLaunch::factory, NotAnException>("2/team/members/add", arg);
}

std::unique_ptr<MembersAddJobStatus> TeamRoutes::membersAddJobStatusGet(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<MembersAddJobStatus>, MembersAddJobStatus::factory, PollErrorException>("2/team/members/add/job_status/get", arg);
}

std::list <MembersGetInfoItem> TeamRoutes::membersGetInfo(const MembersGetInfoArgs& arg ){
    return m_end_point->rpcStyle<MembersGetInfoArgs, std::list <MembersGetInfoItem>, ListFromJsonLoader<std::list <MembersGetInfoItem>, MembersGetInfoItem>, MembersGetInfoErrorException>("2/team/members/get_info", arg);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersList(const MembersListArg& arg ){
    return m_end_point->rpcStyle<MembersListArg, std::unique_ptr<MembersListResult>, MembersListResult::factory, MembersListErrorException>("2/team/members/list", arg);
}

std::unique_ptr<MembersListResult> TeamRoutes::membersListContinue(const MembersListContinueArg& arg ){
    return m_end_point->rpcStyle<MembersListContinueArg, std::unique_ptr<MembersListResult>, MembersListResult::factory, MembersListContinueErrorException>("2/team/members/list/continue", arg);
}

void TeamRoutes::membersRecover(const MembersRecoverArg& arg ){
    m_end_point->rpcStyle<MembersRecoverArg, std::unique_ptr<VoidType>, VoidType, MembersRecoverErrorException>("2/team/members/recover", arg);
}

std::unique_ptr<async::LaunchEmptyResult> TeamRoutes::membersRemove(const MembersRemoveArg& arg ){
    return m_end_point->rpcStyle<MembersRemoveArg, std::unique_ptr<async::LaunchEmptyResult>, async::LaunchEmptyResult::factory, MembersRemoveErrorException>("2/team/members/remove", arg);
}

std::unique_ptr<async::PollEmptyResult> TeamRoutes::membersRemoveJobStatusGet(const async::PollArg& arg ){
    return m_end_point->rpcStyle<async::PollArg, std::unique_ptr<async::PollEmptyResult>, async::PollEmptyResult::factory, PollErrorException>("2/team/members/remove/job_status/get", arg);
}

void TeamRoutes::membersSendWelcomeEmail(const UserSelectorArg& arg ){
    m_end_point->rpcStyle<UserSelectorArg, std::unique_ptr<VoidType>, VoidType, MembersSendWelcomeErrorException>("2/team/members/send_welcome_email", arg);
}

std::unique_ptr<MembersSetPermissionsResult> TeamRoutes::membersSetAdminPermissions(const MembersSetPermissionsArg& arg ){
    return m_end_point->rpcStyle<MembersSetPermissionsArg, std::unique_ptr<MembersSetPermissionsResult>, MembersSetPermissionsResult::factory, MembersSetPermissionsErrorException>("2/team/members/set_admin_permissions", arg);
}

std::unique_ptr<TeamMemberInfo> TeamRoutes::membersSetProfile(const MembersSetProfileArg& arg ){
    return m_end_point->rpcStyle<MembersSetProfileArg, std::unique_ptr<TeamMemberInfo>, TeamMemberInfo::factory, MembersSetProfileErrorException>("2/team/members/set_profile", arg);
}

void TeamRoutes::membersSuspend(const MembersDeactivateArg& arg ){
    m_end_point->rpcStyle<MembersDeactivateArg, std::unique_ptr<VoidType>, VoidType, MembersSuspendErrorException>("2/team/members/suspend", arg);
}

void TeamRoutes::membersUnsuspend(const MembersUnsuspendArg& arg ){
    m_end_point->rpcStyle<MembersUnsuspendArg, std::unique_ptr<VoidType>, VoidType, MembersUnsuspendErrorException>("2/team/members/unsuspend", arg);
}

std::unique_ptr<AddPropertyTemplateResult> TeamRoutes::propertiesTemplateAdd(const AddPropertyTemplateArg& arg ){
    return m_end_point->rpcStyle<AddPropertyTemplateArg, std::unique_ptr<AddPropertyTemplateResult>, AddPropertyTemplateResult::factory, ModifyPropertyTemplateErrorException>("2/team/properties/template/add", arg);
}

std::unique_ptr<properties::GetPropertyTemplateResult> TeamRoutes::propertiesTemplateGet(const properties::GetPropertyTemplateArg& arg ){
    return m_end_point->rpcStyle<properties::GetPropertyTemplateArg, std::unique_ptr<properties::GetPropertyTemplateResult>, properties::GetPropertyTemplateResult::factory, PropertyTemplateErrorException>("2/team/properties/template/get", arg);
}

std::unique_ptr<properties::ListPropertyTemplateIds> TeamRoutes::propertiesTemplateList(void){
    return m_end_point->rpcStyle<VoidType, std::unique_ptr<properties::ListPropertyTemplateIds>, properties::ListPropertyTemplateIds::factory, PropertyTemplateErrorException >("2/team/properties/template/list", VoidType::instance());
}

std::unique_ptr<UpdatePropertyTemplateResult> TeamRoutes::propertiesTemplateUpdate(const UpdatePropertyTemplateArg& arg ){
    return m_end_point->rpcStyle<UpdatePropertyTemplateArg, std::unique_ptr<UpdatePropertyTemplateResult>, UpdatePropertyTemplateResult::factory, ModifyPropertyTemplateErrorException>("2/team/properties/template/update", arg);
}

std::unique_ptr<GetActivityReport> TeamRoutes::reportsGetActivity(const DateRange& arg ){
    return m_end_point->rpcStyle<DateRange, std::unique_ptr<GetActivityReport>, GetActivityReport::factory, DateRangeErrorException>("2/team/reports/get_activity", arg);
}

std::unique_ptr<GetDevicesReport> TeamRoutes::reportsGetDevices(const DateRange& arg ){
    return m_end_point->rpcStyle<DateRange, std::unique_ptr<GetDevicesReport>, GetDevicesReport::factory, DateRangeErrorException>("2/team/reports/get_devices", arg);
}

std::unique_ptr<GetMembershipReport> TeamRoutes::reportsGetMembership(const DateRange& arg ){
    return m_end_point->rpcStyle<DateRange, std::unique_ptr<GetMembershipReport>, GetMembershipReport::factory, DateRangeErrorException>("2/team/reports/get_membership", arg);
}

std::unique_ptr<GetStorageReport> TeamRoutes::reportsGetStorage(const DateRange& arg ){
    return m_end_point->rpcStyle<DateRange, std::unique_ptr<GetStorageReport>, GetStorageReport::factory, DateRangeErrorException>("2/team/reports/get_storage", arg);
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
}//team
}//dropboxQt
