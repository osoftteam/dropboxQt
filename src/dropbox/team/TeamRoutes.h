/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/team/TeamAddPropertyTemplateArg.h"
#include "dropbox/team/TeamAddPropertyTemplateResult.h"
#include "dropbox/team/TeamDateRange.h"
#include "dropbox/team/TeamDateRangeError.h"
#include "dropbox/team/TeamGetActivityReport.h"
#include "dropbox/team/TeamGetDevicesReport.h"
#include "dropbox/team/TeamGetMembershipReport.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateArg.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateResult.h"
#include "dropbox/team/TeamGetStorageReport.h"
#include "dropbox/team/TeamGroupCreateArg.h"
#include "dropbox/team/TeamGroupCreateError.h"
#include "dropbox/team/TeamGroupDeleteError.h"
#include "dropbox/team/TeamGroupFullInfo.h"
#include "dropbox/team/TeamGroupMemberSetAccessTypeError.h"
#include "dropbox/team/TeamGroupMembersAddArg.h"
#include "dropbox/team/TeamGroupMembersAddError.h"
#include "dropbox/team/TeamGroupMembersChangeResult.h"
#include "dropbox/team/TeamGroupMembersRemoveArg.h"
#include "dropbox/team/TeamGroupMembersRemoveError.h"
#include "dropbox/team/TeamGroupMembersSetAccessTypeArg.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelectorError.h"
#include "dropbox/team/TeamGroupUpdateArgs.h"
#include "dropbox/team/TeamGroupUpdateError.h"
#include "dropbox/team/TeamGroupsGetInfoError.h"
#include "dropbox/team/TeamGroupsGetInfoItem.h"
#include "dropbox/team/TeamGroupsListArg.h"
#include "dropbox/team/TeamGroupsListContinueArg.h"
#include "dropbox/team/TeamGroupsListContinueError.h"
#include "dropbox/team/TeamGroupsListResult.h"
#include "dropbox/team/TeamGroupsMembersListArg.h"
#include "dropbox/team/TeamGroupsMembersListContinueArg.h"
#include "dropbox/team/TeamGroupsMembersListContinueError.h"
#include "dropbox/team/TeamGroupsMembersListResult.h"
#include "dropbox/team/TeamGroupsPollError.h"
#include "dropbox/team/TeamGroupsSelector.h"
#include "dropbox/async/AsyncLaunchEmptyResult.h"
#include "dropbox/team/TeamListMemberAppsArg.h"
#include "dropbox/team/TeamListMemberAppsError.h"
#include "dropbox/team/TeamListMemberAppsResult.h"
#include "dropbox/team/TeamListMemberDevicesArg.h"
#include "dropbox/team/TeamListMemberDevicesError.h"
#include "dropbox/team/TeamListMemberDevicesResult.h"
#include "dropbox/team/TeamListMembersAppsArg.h"
#include "dropbox/team/TeamListMembersAppsError.h"
#include "dropbox/team/TeamListMembersAppsResult.h"
#include "dropbox/team/TeamListMembersDevicesArg.h"
#include "dropbox/team/TeamListMembersDevicesError.h"
#include "dropbox/team/TeamListMembersDevicesResult.h"
#include "dropbox/properties/PropertiesListPropertyTemplateIds.h"
#include "dropbox/team/TeamListTeamAppsArg.h"
#include "dropbox/team/TeamListTeamAppsError.h"
#include "dropbox/team/TeamListTeamAppsResult.h"
#include "dropbox/team/TeamListTeamDevicesArg.h"
#include "dropbox/team/TeamListTeamDevicesError.h"
#include "dropbox/team/TeamListTeamDevicesResult.h"
#include "dropbox/team/TeamMembersAddArg.h"
#include "dropbox/team/TeamMembersAddJobStatus.h"
#include "dropbox/team/TeamMembersAddLaunch.h"
#include "dropbox/team/TeamMembersDeactivateArg.h"
#include "dropbox/team/TeamMembersGetInfoArgs.h"
#include "dropbox/team/TeamMembersGetInfoError.h"
#include "dropbox/team/TeamMembersGetInfoItem.h"
#include "dropbox/team/TeamMembersListArg.h"
#include "dropbox/team/TeamMembersListContinueArg.h"
#include "dropbox/team/TeamMembersListContinueError.h"
#include "dropbox/team/TeamMembersListError.h"
#include "dropbox/team/TeamMembersListResult.h"
#include "dropbox/team/TeamMembersRecoverArg.h"
#include "dropbox/team/TeamMembersRecoverError.h"
#include "dropbox/team/TeamMembersRemoveArg.h"
#include "dropbox/team/TeamMembersRemoveError.h"
#include "dropbox/team/TeamMembersSendWelcomeError.h"
#include "dropbox/team/TeamMembersSetPermissionsArg.h"
#include "dropbox/team/TeamMembersSetPermissionsError.h"
#include "dropbox/team/TeamMembersSetPermissionsResult.h"
#include "dropbox/team/TeamMembersSetProfileArg.h"
#include "dropbox/team/TeamMembersSetProfileError.h"
#include "dropbox/team/TeamMembersSuspendError.h"
#include "dropbox/team/TeamMembersUnsuspendArg.h"
#include "dropbox/team/TeamMembersUnsuspendError.h"
#include "dropbox/properties/PropertiesModifyPropertyTemplateError.h"
#include "dropbox/async/AsyncPollArg.h"
#include "dropbox/async/AsyncPollEmptyResult.h"
#include "dropbox/async/AsyncPollError.h"
#include "dropbox/properties/PropertiesPropertyTemplateError.h"
#include "dropbox/team/TeamRevokeDeviceSessionArg.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchArg.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchError.h"
#include "dropbox/team/TeamRevokeDeviceSessionBatchResult.h"
#include "dropbox/team/TeamRevokeDeviceSessionError.h"
#include "dropbox/team/TeamRevokeLinkedApiAppArg.h"
#include "dropbox/team/TeamRevokeLinkedApiAppBatchArg.h"
#include "dropbox/team/TeamRevokeLinkedAppBatchError.h"
#include "dropbox/team/TeamRevokeLinkedAppBatchResult.h"
#include "dropbox/team/TeamRevokeLinkedAppError.h"
#include "dropbox/team/TeamTeamGetInfoResult.h"
#include "dropbox/team/TeamTeamMemberInfo.h"
#include "dropbox/team/TeamUpdatePropertyTemplateArg.h"
#include "dropbox/team/TeamUpdatePropertyTemplateResult.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{

class Endpoint;
class DropboxRequestConfig;
class DropboxAuthInfo;

namespace team{
    class TeamRoutes{
    public:
        TeamRoutes(Endpoint*);
            /**
            ApiRoute('alpha/groups/create')

            Creates a new, empty group, with a requested name. Permission : Team
            member management
            on error:GroupCreateError
            */
        GroupFullInfo alphaGroupsCreate(const GroupCreateArg&);

            /**
            ApiRoute('alpha/groups/get_info')

            Retrieves information about one or more groups. Permission : Team
            Information
            on error:GroupsGetInfoError
            */
        std::list <GroupsGetInfoItem> alphaGroupsGetInfo(const GroupsSelector&);

            /**
            ApiRoute('alpha/groups/list')

            Lists groups on a team. Permission : Team Information
            on error:Void
            */
        GroupsListResult alphaGroupsList(const GroupsListArg&);

            /**
            ApiRoute('alpha/groups/list/continue')

            Once a cursor has been retrieved from :meth:`alpha_groups_list`, use
            this to paginate through all groups. Permission : Team information
            on error:GroupsListContinueError
            */
        GroupsListResult alphaGroupsListContinue(const GroupsListContinueArg&);

            /**
            ApiRoute('alpha/groups/update')

            Updates a group's name, external ID or management type. Permission :
            Team member management
            on error:GroupUpdateError
            */
        GroupFullInfo alphaGroupsUpdate(const GroupUpdateArgs&);

            /**
            ApiRoute('devices/list_member_devices')

            List all device sessions of a team's member.
            on error:ListMemberDevicesError
            */
        ListMemberDevicesResult devicesListMemberDevices(const ListMemberDevicesArg&);

            /**
            ApiRoute('devices/list_members_devices')

            List all device sessions of a team.
            on error:ListMembersDevicesError
            */
        ListMembersDevicesResult devicesListMembersDevices(const ListMembersDevicesArg&);

            /**
            ApiRoute('devices/list_team_devices')

            List all device sessions of a team.
            on error:ListTeamDevicesError
            */
        ListTeamDevicesResult devicesListTeamDevices(const ListTeamDevicesArg&);

            /**
            ApiRoute('devices/revoke_device_session')

            Revoke a device session of a team's member
            on error:RevokeDeviceSessionError
            */
        void devicesRevokeDeviceSession(const RevokeDeviceSessionArg&);

            /**
            ApiRoute('devices/revoke_device_session_batch')

            Revoke a list of device sessions of team members
            on error:RevokeDeviceSessionBatchError
            */
        RevokeDeviceSessionBatchResult devicesRevokeDeviceSessionBatch(const RevokeDeviceSessionBatchArg&);

            /**
            ApiRoute('get_info')

            Retrieves information about a team.
            on error:Void
            */
        TeamGetInfoResult getInfo(void);

            /**
            ApiRoute('groups/create')

            Creates a new, empty group, with a requested name. Permission : Team
            member management
            on error:GroupCreateError
            */
        GroupFullInfo groupsCreate(const GroupCreateArg&);

            /**
            ApiRoute('groups/delete')

            Deletes a group. The group is deleted immediately. However the
            revoking of group-owned resources may take additional time. Use the
            :meth:`groups_job_status_get` to determine whether this process has
            completed. Permission : Team member management
            on error:GroupDeleteError
            */
        async::LaunchEmptyResult groupsDelete(const GroupSelector&);

            /**
            ApiRoute('groups/get_info')

            Retrieves information about one or more groups. Permission : Team
            Information
            on error:GroupsGetInfoError
            */
        std::list <GroupsGetInfoItem> groupsGetInfo(const GroupsSelector&);

            /**
            ApiRoute('groups/job_status/get')

            Once an async_job_id is returned from :meth:`groups_delete`,
            :meth:`groups_members_add` , or :meth:`groups_members_remove` use
            this method to poll the status of granting/revoking group members'
            access to group-owned resources. Permission : Team member management
            on error:GroupsPollError
            */
        async::PollEmptyResult groupsJobStatusGet(const async::PollArg&);

            /**
            ApiRoute('groups/list')

            Lists groups on a team. Permission : Team Information
            on error:Void
            */
        GroupsListResult groupsList(const GroupsListArg&);

            /**
            ApiRoute('groups/list/continue')

            Once a cursor has been retrieved from :meth:`groups_list`, use this
            to paginate through all groups. Permission : Team information
            on error:GroupsListContinueError
            */
        GroupsListResult groupsListContinue(const GroupsListContinueArg&);

            /**
            ApiRoute('groups/members/add')

            Adds members to a group. The members are added immediately. However
            the granting of group-owned resources may take additional time. Use
            the :meth:`groups_job_status_get` to determine whether this process
            has completed. Permission : Team member management
            on error:GroupMembersAddError
            */
        GroupMembersChangeResult groupsMembersAdd(const GroupMembersAddArg&);

            /**
            ApiRoute('groups/members/list')

            Lists members of a group. Permission : Team Information
            on error:GroupSelectorError
            */
        GroupsMembersListResult groupsMembersList(const GroupsMembersListArg&);

            /**
            ApiRoute('groups/members/list/continue')

            Once a cursor has been retrieved from :meth:`groups_members_list`,
            use this to paginate through all members of the group. Permission :
            Team information
            on error:GroupsMembersListContinueError
            */
        GroupsMembersListResult groupsMembersListContinue(const GroupsMembersListContinueArg&);

            /**
            ApiRoute('groups/members/remove')

            Removes members from a group. The members are removed immediately.
            However the revoking of group-owned resources may take additional
            time. Use the :meth:`groups_job_status_get` to determine whether
            this process has completed. This method permits removing the only
            owner of a group, even in cases where this is not possible via the
            web client. Permission : Team member management
            on error:GroupMembersRemoveError
            */
        GroupMembersChangeResult groupsMembersRemove(const GroupMembersRemoveArg&);

            /**
            ApiRoute('groups/members/set_access_type')

            Sets a member's access type in a group. Permission : Team member
            management
            on error:GroupMemberSetAccessTypeError
            */
        std::list <GroupsGetInfoItem> groupsMembersSetAccessType(const GroupMembersSetAccessTypeArg&);

            /**
            ApiRoute('groups/update')

            Updates a group's name and/or external ID. Permission : Team member
            management
            on error:GroupUpdateError
            */
        GroupFullInfo groupsUpdate(const GroupUpdateArgs&);

            /**
            ApiRoute('linked_apps/list_member_linked_apps')

            List all linked applications of the team member. Note, this endpoint
            does not list any team-linked applications.
            on error:ListMemberAppsError
            */
        ListMemberAppsResult linkedAppsListMemberLinkedApps(const ListMemberAppsArg&);

            /**
            ApiRoute('linked_apps/list_members_linked_apps')

            List all applications linked to the team members' accounts. Note,
            this endpoint does not list any team-linked applications.
            on error:ListMembersAppsError
            */
        ListMembersAppsResult linkedAppsListMembersLinkedApps(const ListMembersAppsArg&);

            /**
            ApiRoute('linked_apps/list_team_linked_apps')

            List all applications linked to the team members' accounts. Note,
            this endpoint doesn't list any team-linked applications.
            on error:ListTeamAppsError
            */
        ListTeamAppsResult linkedAppsListTeamLinkedApps(const ListTeamAppsArg&);

            /**
            ApiRoute('linked_apps/revoke_linked_app')

            Revoke a linked application of the team member
            on error:RevokeLinkedAppError
            */
        void linkedAppsRevokeLinkedApp(const RevokeLinkedApiAppArg&);

            /**
            ApiRoute('linked_apps/revoke_linked_app_batch')

            Revoke a list of linked applications of the team members
            on error:RevokeLinkedAppBatchError
            */
        RevokeLinkedAppBatchResult linkedAppsRevokeLinkedAppBatch(const RevokeLinkedApiAppBatchArg&);

            /**
            ApiRoute('members/add')

            Adds members to a team. Permission : Team member management A
            maximum of 20 members can be specified in a single call. If no
            Dropbox account exists with the email address specified, a new
            Dropbox account will be created with the given email address, and
            that account will be invited to the team. If a personal Dropbox
            account exists with the email address specified in the call, this
            call will create a placeholder Dropbox account for the user on the
            team and send an email inviting the user to migrate their existing
            personal account onto the team. Team member management apps are
            required to set an initial given_name and surname for a user to use
            in the team invitation and for 'Perform as team member' actions
            taken on the user before they become 'active'.
            on error:Void
            */
        MembersAddLaunch membersAdd(const MembersAddArg&);

            /**
            ApiRoute('members/add/job_status/get')

            Once an async_job_id is returned from :meth:`members_add` , use this
            to poll the status of the asynchronous request. Permission : Team
            member management
            on error:PollError
            */
        MembersAddJobStatus membersAddJobStatusGet(const async::PollArg&);

            /**
            ApiRoute('members/get_info')

            Returns information about multiple team members. Permission : Team
            information This endpoint will return
            ``MembersGetInfoItem.id_not_found``, for IDs (or emails) that cannot
            be matched to a valid team member.
            on error:MembersGetInfoError
            */
        std::list <MembersGetInfoItem> membersGetInfo(const MembersGetInfoArgs&);

            /**
            ApiRoute('members/list')

            Lists members of a team. Permission : Team information
            on error:MembersListError
            */
        MembersListResult membersList(const MembersListArg&);

            /**
            ApiRoute('members/list/continue')

            Once a cursor has been retrieved from :meth:`members_list`, use this
            to paginate through all team members. Permission : Team information
            on error:MembersListContinueError
            */
        MembersListResult membersListContinue(const MembersListContinueArg&);

            /**
            ApiRoute('members/recover')

            Recover a deleted member. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.
            on error:MembersRecoverError
            */
        void membersRecover(const MembersRecoverArg&);

            /**
            ApiRoute('members/remove')

            Removes a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account. This is not a deactivation
            where the account can be re-activated again. Calling
            :meth:`members_add` with the removed user's email address will
            create a new account with a new team_member_id that will not have
            access to any content that was shared with the initial account. This
            endpoint may initiate an asynchronous job. To obtain the final
            result of the job, the client should periodically poll
            :meth:`members_remove_job_status_get`.
            on error:MembersRemoveError
            */
        async::LaunchEmptyResult membersRemove(const MembersRemoveArg&);

            /**
            ApiRoute('members/remove/job_status/get')

            Once an async_job_id is returned from :meth:`members_remove` , use
            this to poll the status of the asynchronous request. Permission :
            Team member management
            on error:PollError
            */
        async::PollEmptyResult membersRemoveJobStatusGet(const async::PollArg&);

            /**
            ApiRoute('members/send_welcome_email')

            Sends welcome email to pending team member. Permission : Team member
            management Exactly one of team_member_id, email, or external_id must
            be provided to identify the user account. No-op if team member is
            not pending.
            on error:MembersSendWelcomeError
            */
        void membersSendWelcomeEmail(const UserSelectorArg&);

            /**
            ApiRoute('members/set_admin_permissions')

            Updates a team member's permissions. Permission : Team member
            management
            on error:MembersSetPermissionsError
            */
        MembersSetPermissionsResult membersSetAdminPermissions(const MembersSetPermissionsArg&);

            /**
            ApiRoute('members/set_profile')

            Updates a team member's profile. Permission : Team member management
            on error:MembersSetProfileError
            */
        TeamMemberInfo membersSetProfile(const MembersSetProfileArg&);

            /**
            ApiRoute('members/suspend')

            Suspend a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.
            on error:MembersSuspendError
            */
        void membersSuspend(const MembersDeactivateArg&);

            /**
            ApiRoute('members/unsuspend')

            Unsuspend a member from a team. Permission : Team member management
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.
            on error:MembersUnsuspendError
            */
        void membersUnsuspend(const MembersUnsuspendArg&);

            /**
            ApiRoute('properties/template/add')

            Add a property template. See route files/properties/add to add
            properties to a file.
            on error:ModifyPropertyTemplateError
            */
        AddPropertyTemplateResult propertiesTemplateAdd(const AddPropertyTemplateArg&);

            /**
            ApiRoute('properties/template/get')

            Get the schema for a specified template.
            on error:PropertyTemplateError
            */
        properties::GetPropertyTemplateResult propertiesTemplateGet(const properties::GetPropertyTemplateArg&);

            /**
            ApiRoute('properties/template/list')

            Get the property template identifiers for a team. To get the schema
            of each template use :meth:`properties_template_get`.
            on error:PropertyTemplateError
            */
        properties::ListPropertyTemplateIds propertiesTemplateList(void);

            /**
            ApiRoute('properties/template/update')

            Update a property template. This route can update the template name,
            the template description and add optional properties to templates.
            on error:ModifyPropertyTemplateError
            */
        UpdatePropertyTemplateResult propertiesTemplateUpdate(const UpdatePropertyTemplateArg&);

            /**
            ApiRoute('reports/get_activity')

            Retrieves reporting data about a team's user activity.
            on error:DateRangeError
            */
        GetActivityReport reportsGetActivity(const DateRange&);

            /**
            ApiRoute('reports/get_devices')

            Retrieves reporting data about a team's linked devices.
            on error:DateRangeError
            */
        GetDevicesReport reportsGetDevices(const DateRange&);

            /**
            ApiRoute('reports/get_membership')

            Retrieves reporting data about a team's membership.
            on error:DateRangeError
            */
        GetMembershipReport reportsGetMembership(const DateRange&);

            /**
            ApiRoute('reports/get_storage')

            Retrieves reporting data about a team's storage usage.
            on error:DateRangeError
            */
        GetStorageReport reportsGetStorage(const DateRange&);

    protected:
        Endpoint* m_end_point;
    };//TeamRoutes

    ///exception GroupCreateError for alpha/groups/create
    class GroupCreateErrorException: public ReplyException{
    public:
        const team::GroupCreateError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupCreateErrorException(const team::GroupCreateError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupCreateError m_err;
    };

    ///exception GroupsGetInfoError for alpha/groups/get_info
    class GroupsGetInfoErrorException: public ReplyException{
    public:
        const team::GroupsGetInfoError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupsGetInfoErrorException(const team::GroupsGetInfoError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupsGetInfoError m_err;
    };

    ///exception GroupsListContinueError for alpha/groups/list/continue
    class GroupsListContinueErrorException: public ReplyException{
    public:
        const team::GroupsListContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupsListContinueErrorException(const team::GroupsListContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupsListContinueError m_err;
    };

    ///exception GroupUpdateError for alpha/groups/update
    class GroupUpdateErrorException: public ReplyException{
    public:
        const team::GroupUpdateError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupUpdateErrorException(const team::GroupUpdateError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupUpdateError m_err;
    };

    ///exception ListMemberDevicesError for devices/list_member_devices
    class ListMemberDevicesErrorException: public ReplyException{
    public:
        const team::ListMemberDevicesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListMemberDevicesErrorException(const team::ListMemberDevicesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListMemberDevicesError m_err;
    };

    ///exception ListMembersDevicesError for devices/list_members_devices
    class ListMembersDevicesErrorException: public ReplyException{
    public:
        const team::ListMembersDevicesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListMembersDevicesErrorException(const team::ListMembersDevicesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListMembersDevicesError m_err;
    };

    ///exception ListTeamDevicesError for devices/list_team_devices
    class ListTeamDevicesErrorException: public ReplyException{
    public:
        const team::ListTeamDevicesError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListTeamDevicesErrorException(const team::ListTeamDevicesError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListTeamDevicesError m_err;
    };

    ///exception RevokeDeviceSessionError for devices/revoke_device_session
    class RevokeDeviceSessionErrorException: public ReplyException{
    public:
        const team::RevokeDeviceSessionError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RevokeDeviceSessionErrorException(const team::RevokeDeviceSessionError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::RevokeDeviceSessionError m_err;
    };

    ///exception RevokeDeviceSessionBatchError for devices/revoke_device_session_batch
    class RevokeDeviceSessionBatchErrorException: public ReplyException{
    public:
        const team::RevokeDeviceSessionBatchError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RevokeDeviceSessionBatchErrorException(const team::RevokeDeviceSessionBatchError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::RevokeDeviceSessionBatchError m_err;
    };

    ///exception GroupDeleteError for groups/delete
    class GroupDeleteErrorException: public ReplyException{
    public:
        const team::GroupDeleteError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupDeleteErrorException(const team::GroupDeleteError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupDeleteError m_err;
    };

    ///exception GroupsPollError for groups/job_status/get
    class GroupsPollErrorException: public ReplyException{
    public:
        const team::GroupsPollError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupsPollErrorException(const team::GroupsPollError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupsPollError m_err;
    };

    ///exception GroupMembersAddError for groups/members/add
    class GroupMembersAddErrorException: public ReplyException{
    public:
        const team::GroupMembersAddError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupMembersAddErrorException(const team::GroupMembersAddError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupMembersAddError m_err;
    };

    ///exception GroupSelectorError for groups/members/list
    class GroupSelectorErrorException: public ReplyException{
    public:
        const team::GroupSelectorError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupSelectorErrorException(const team::GroupSelectorError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupSelectorError m_err;
    };

    ///exception GroupsMembersListContinueError for groups/members/list/continue
    class GroupsMembersListContinueErrorException: public ReplyException{
    public:
        const team::GroupsMembersListContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupsMembersListContinueErrorException(const team::GroupsMembersListContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupsMembersListContinueError m_err;
    };

    ///exception GroupMembersRemoveError for groups/members/remove
    class GroupMembersRemoveErrorException: public ReplyException{
    public:
        const team::GroupMembersRemoveError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupMembersRemoveErrorException(const team::GroupMembersRemoveError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupMembersRemoveError m_err;
    };

    ///exception GroupMemberSetAccessTypeError for groups/members/set_access_type
    class GroupMemberSetAccessTypeErrorException: public ReplyException{
    public:
        const team::GroupMemberSetAccessTypeError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GroupMemberSetAccessTypeErrorException(const team::GroupMemberSetAccessTypeError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::GroupMemberSetAccessTypeError m_err;
    };

    ///exception ListMemberAppsError for linked_apps/list_member_linked_apps
    class ListMemberAppsErrorException: public ReplyException{
    public:
        const team::ListMemberAppsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListMemberAppsErrorException(const team::ListMemberAppsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListMemberAppsError m_err;
    };

    ///exception ListMembersAppsError for linked_apps/list_members_linked_apps
    class ListMembersAppsErrorException: public ReplyException{
    public:
        const team::ListMembersAppsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListMembersAppsErrorException(const team::ListMembersAppsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListMembersAppsError m_err;
    };

    ///exception ListTeamAppsError for linked_apps/list_team_linked_apps
    class ListTeamAppsErrorException: public ReplyException{
    public:
        const team::ListTeamAppsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListTeamAppsErrorException(const team::ListTeamAppsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::ListTeamAppsError m_err;
    };

    ///exception RevokeLinkedAppError for linked_apps/revoke_linked_app
    class RevokeLinkedAppErrorException: public ReplyException{
    public:
        const team::RevokeLinkedAppError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RevokeLinkedAppErrorException(const team::RevokeLinkedAppError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::RevokeLinkedAppError m_err;
    };

    ///exception RevokeLinkedAppBatchError for linked_apps/revoke_linked_app_batch
    class RevokeLinkedAppBatchErrorException: public ReplyException{
    public:
        const team::RevokeLinkedAppBatchError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RevokeLinkedAppBatchErrorException(const team::RevokeLinkedAppBatchError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::RevokeLinkedAppBatchError m_err;
    };

    ///exception PollError for members/add/job_status/get
    class PollErrorException: public ReplyException{
    public:
        const async::PollError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PollErrorException(const async::PollError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        async::PollError m_err;
    };

    ///exception MembersGetInfoError for members/get_info
    class MembersGetInfoErrorException: public ReplyException{
    public:
        const team::MembersGetInfoError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersGetInfoErrorException(const team::MembersGetInfoError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersGetInfoError m_err;
    };

    ///exception MembersListError for members/list
    class MembersListErrorException: public ReplyException{
    public:
        const team::MembersListError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersListErrorException(const team::MembersListError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersListError m_err;
    };

    ///exception MembersListContinueError for members/list/continue
    class MembersListContinueErrorException: public ReplyException{
    public:
        const team::MembersListContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersListContinueErrorException(const team::MembersListContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersListContinueError m_err;
    };

    ///exception MembersRecoverError for members/recover
    class MembersRecoverErrorException: public ReplyException{
    public:
        const team::MembersRecoverError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersRecoverErrorException(const team::MembersRecoverError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersRecoverError m_err;
    };

    ///exception MembersRemoveError for members/remove
    class MembersRemoveErrorException: public ReplyException{
    public:
        const team::MembersRemoveError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersRemoveErrorException(const team::MembersRemoveError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersRemoveError m_err;
    };

    ///exception MembersSendWelcomeError for members/send_welcome_email
    class MembersSendWelcomeErrorException: public ReplyException{
    public:
        const team::MembersSendWelcomeError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersSendWelcomeErrorException(const team::MembersSendWelcomeError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersSendWelcomeError m_err;
    };

    ///exception MembersSetPermissionsError for members/set_admin_permissions
    class MembersSetPermissionsErrorException: public ReplyException{
    public:
        const team::MembersSetPermissionsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersSetPermissionsErrorException(const team::MembersSetPermissionsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersSetPermissionsError m_err;
    };

    ///exception MembersSetProfileError for members/set_profile
    class MembersSetProfileErrorException: public ReplyException{
    public:
        const team::MembersSetProfileError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersSetProfileErrorException(const team::MembersSetProfileError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersSetProfileError m_err;
    };

    ///exception MembersSuspendError for members/suspend
    class MembersSuspendErrorException: public ReplyException{
    public:
        const team::MembersSuspendError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersSuspendErrorException(const team::MembersSuspendError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersSuspendError m_err;
    };

    ///exception MembersUnsuspendError for members/unsuspend
    class MembersUnsuspendErrorException: public ReplyException{
    public:
        const team::MembersUnsuspendError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MembersUnsuspendErrorException(const team::MembersUnsuspendError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::MembersUnsuspendError m_err;
    };

    ///exception ModifyPropertyTemplateError for properties/template/add
    class ModifyPropertyTemplateErrorException: public ReplyException{
    public:
        const properties::ModifyPropertyTemplateError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ModifyPropertyTemplateErrorException(const properties::ModifyPropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        properties::ModifyPropertyTemplateError m_err;
    };

    ///exception PropertyTemplateError for properties/template/get
    class PropertyTemplateErrorException: public ReplyException{
    public:
        const properties::PropertyTemplateError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PropertyTemplateErrorException(const properties::PropertyTemplateError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        properties::PropertyTemplateError m_err;
    };

    ///exception DateRangeError for reports/get_activity
    class DateRangeErrorException: public ReplyException{
    public:
        const team::DateRangeError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        DateRangeErrorException(const team::DateRangeError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        team::DateRangeError m_err;
    };


}//team
}//dropboxQt
