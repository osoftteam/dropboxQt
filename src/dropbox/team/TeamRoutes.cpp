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

GroupCreateErrorException::GroupCreateErrorException(const team::GroupCreateError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupCreateErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupCreateError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupCreateErrorException(err, summary, status_code, message);
}

GroupsGetInfoErrorException::GroupsGetInfoErrorException(const team::GroupsGetInfoError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupsGetInfoErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupsGetInfoError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupsGetInfoErrorException(err, summary, status_code, message);
}


GroupsListContinueErrorException::GroupsListContinueErrorException(const team::GroupsListContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupsListContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupsListContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupsListContinueErrorException(err, summary, status_code, message);
}

GroupUpdateErrorException::GroupUpdateErrorException(const team::GroupUpdateError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupUpdateErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupUpdateError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupUpdateErrorException(err, summary, status_code, message);
}

ListMemberDevicesErrorException::ListMemberDevicesErrorException(const team::ListMemberDevicesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListMemberDevicesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListMemberDevicesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListMemberDevicesErrorException(err, summary, status_code, message);
}

ListMembersDevicesErrorException::ListMembersDevicesErrorException(const team::ListMembersDevicesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListMembersDevicesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListMembersDevicesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListMembersDevicesErrorException(err, summary, status_code, message);
}

ListTeamDevicesErrorException::ListTeamDevicesErrorException(const team::ListTeamDevicesError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListTeamDevicesErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListTeamDevicesError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListTeamDevicesErrorException(err, summary, status_code, message);
}

RevokeDeviceSessionErrorException::RevokeDeviceSessionErrorException(const team::RevokeDeviceSessionError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RevokeDeviceSessionErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::RevokeDeviceSessionError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RevokeDeviceSessionErrorException(err, summary, status_code, message);
}

RevokeDeviceSessionBatchErrorException::RevokeDeviceSessionBatchErrorException(const team::RevokeDeviceSessionBatchError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RevokeDeviceSessionBatchErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::RevokeDeviceSessionBatchError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RevokeDeviceSessionBatchErrorException(err, summary, status_code, message);
}



GroupDeleteErrorException::GroupDeleteErrorException(const team::GroupDeleteError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupDeleteErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupDeleteError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupDeleteErrorException(err, summary, status_code, message);
}


GroupsPollErrorException::GroupsPollErrorException(const team::GroupsPollError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupsPollErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupsPollError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupsPollErrorException(err, summary, status_code, message);
}



GroupMembersAddErrorException::GroupMembersAddErrorException(const team::GroupMembersAddError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupMembersAddErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupMembersAddError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupMembersAddErrorException(err, summary, status_code, message);
}

GroupSelectorErrorException::GroupSelectorErrorException(const team::GroupSelectorError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupSelectorErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupSelectorError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupSelectorErrorException(err, summary, status_code, message);
}

GroupsMembersListContinueErrorException::GroupsMembersListContinueErrorException(const team::GroupsMembersListContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupsMembersListContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupsMembersListContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupsMembersListContinueErrorException(err, summary, status_code, message);
}

GroupMembersRemoveErrorException::GroupMembersRemoveErrorException(const team::GroupMembersRemoveError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupMembersRemoveErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupMembersRemoveError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupMembersRemoveErrorException(err, summary, status_code, message);
}

GroupMemberSetAccessTypeErrorException::GroupMemberSetAccessTypeErrorException(const team::GroupMemberSetAccessTypeError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GroupMemberSetAccessTypeErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::GroupMemberSetAccessTypeError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GroupMemberSetAccessTypeErrorException(err, summary, status_code, message);
}


ListMemberAppsErrorException::ListMemberAppsErrorException(const team::ListMemberAppsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListMemberAppsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListMemberAppsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListMemberAppsErrorException(err, summary, status_code, message);
}

ListMembersAppsErrorException::ListMembersAppsErrorException(const team::ListMembersAppsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListMembersAppsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListMembersAppsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListMembersAppsErrorException(err, summary, status_code, message);
}

ListTeamAppsErrorException::ListTeamAppsErrorException(const team::ListTeamAppsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ListTeamAppsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::ListTeamAppsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ListTeamAppsErrorException(err, summary, status_code, message);
}

RevokeLinkedAppErrorException::RevokeLinkedAppErrorException(const team::RevokeLinkedAppError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RevokeLinkedAppErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::RevokeLinkedAppError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RevokeLinkedAppErrorException(err, summary, status_code, message);
}

RevokeLinkedAppBatchErrorException::RevokeLinkedAppBatchErrorException(const team::RevokeLinkedAppBatchError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void RevokeLinkedAppBatchErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::RevokeLinkedAppBatchError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw RevokeLinkedAppBatchErrorException(err, summary, status_code, message);
}


PollErrorException::PollErrorException(const async::PollError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void PollErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    async::PollError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw PollErrorException(err, summary, status_code, message);
}

MembersGetInfoErrorException::MembersGetInfoErrorException(const team::MembersGetInfoError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersGetInfoErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersGetInfoError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersGetInfoErrorException(err, summary, status_code, message);
}

MembersListErrorException::MembersListErrorException(const team::MembersListError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersListErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersListError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersListErrorException(err, summary, status_code, message);
}

MembersListContinueErrorException::MembersListContinueErrorException(const team::MembersListContinueError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersListContinueErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersListContinueError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersListContinueErrorException(err, summary, status_code, message);
}

MembersRecoverErrorException::MembersRecoverErrorException(const team::MembersRecoverError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersRecoverErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersRecoverError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersRecoverErrorException(err, summary, status_code, message);
}

MembersRemoveErrorException::MembersRemoveErrorException(const team::MembersRemoveError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersRemoveErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersRemoveError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersRemoveErrorException(err, summary, status_code, message);
}


MembersSendWelcomeErrorException::MembersSendWelcomeErrorException(const team::MembersSendWelcomeError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersSendWelcomeErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersSendWelcomeError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersSendWelcomeErrorException(err, summary, status_code, message);
}

MembersSetPermissionsErrorException::MembersSetPermissionsErrorException(const team::MembersSetPermissionsError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersSetPermissionsErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersSetPermissionsError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersSetPermissionsErrorException(err, summary, status_code, message);
}

MembersSetProfileErrorException::MembersSetProfileErrorException(const team::MembersSetProfileError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersSetProfileErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersSetProfileError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersSetProfileErrorException(err, summary, status_code, message);
}

MembersSuspendErrorException::MembersSuspendErrorException(const team::MembersSuspendError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersSuspendErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersSuspendError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersSuspendErrorException(err, summary, status_code, message);
}

MembersUnsuspendErrorException::MembersUnsuspendErrorException(const team::MembersUnsuspendError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void MembersUnsuspendErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::MembersUnsuspendError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw MembersUnsuspendErrorException(err, summary, status_code, message);
}

ModifyPropertyTemplateErrorException::ModifyPropertyTemplateErrorException(const properties::ModifyPropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void ModifyPropertyTemplateErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    properties::ModifyPropertyTemplateError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw ModifyPropertyTemplateErrorException(err, summary, status_code, message);
}

PropertyTemplateErrorException::PropertyTemplateErrorException(const properties::PropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void PropertyTemplateErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    properties::PropertyTemplateError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw PropertyTemplateErrorException(err, summary, status_code, message);
}



DateRangeErrorException::DateRangeErrorException(const team::DateRangeError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void DateRangeErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    team::DateRangeError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw DateRangeErrorException(err, summary, status_code, message);
}




}//team
}//dropboxQt
