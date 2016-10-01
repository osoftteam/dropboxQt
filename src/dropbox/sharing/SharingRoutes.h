/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/sharing/SharingAddFileMemberArgs.h"
#include "dropbox/sharing/SharingAddFileMemberError.h"
#include "dropbox/sharing/SharingAddFolderMemberArg.h"
#include "dropbox/sharing/SharingAddFolderMemberError.h"
#include "dropbox/sharing/SharingChangeFileMemberAccessArgs.h"
#include "dropbox/sharing/SharingCreateSharedLinkArg.h"
#include "dropbox/sharing/SharingCreateSharedLinkError.h"
#include "dropbox/sharing/SharingCreateSharedLinkWithSettingsArg.h"
#include "dropbox/sharing/SharingCreateSharedLinkWithSettingsError.h"
#include "dropbox/sharing/SharingFileMemberActionError.h"
#include "dropbox/sharing/SharingFileMemberActionIndividualResult.h"
#include "dropbox/sharing/SharingFileMemberActionResult.h"
#include "dropbox/sharing/SharingFileMemberRemoveActionResult.h"
#include "dropbox/sharing/SharingGetFileMetadataArg.h"
#include "dropbox/sharing/SharingGetFileMetadataBatchArg.h"
#include "dropbox/sharing/SharingGetFileMetadataBatchResult.h"
#include "dropbox/sharing/SharingGetFileMetadataError.h"
#include "dropbox/sharing/SharingGetMetadataArgs.h"
#include "dropbox/sharing/SharingGetSharedLinkFileError.h"
#include "dropbox/sharing/SharingGetSharedLinkMetadataArg.h"
#include "dropbox/sharing/SharingGetSharedLinksArg.h"
#include "dropbox/sharing/SharingGetSharedLinksError.h"
#include "dropbox/sharing/SharingGetSharedLinksResult.h"
#include "dropbox/sharing/SharingJobStatus.h"
#include "dropbox/async/AsyncLaunchEmptyResult.h"
#include "dropbox/async/AsyncLaunchResultBase.h"
#include "dropbox/sharing/SharingListFileMembersArg.h"
#include "dropbox/sharing/SharingListFileMembersBatchArg.h"
#include "dropbox/sharing/SharingListFileMembersBatchResult.h"
#include "dropbox/sharing/SharingListFileMembersContinueArg.h"
#include "dropbox/sharing/SharingListFileMembersContinueError.h"
#include "dropbox/sharing/SharingListFileMembersError.h"
#include "dropbox/sharing/SharingListFilesArg.h"
#include "dropbox/sharing/SharingListFilesContinueArg.h"
#include "dropbox/sharing/SharingListFilesContinueError.h"
#include "dropbox/sharing/SharingListFilesResult.h"
#include "dropbox/sharing/SharingListFolderMembersArgs.h"
#include "dropbox/sharing/SharingListFolderMembersContinueArg.h"
#include "dropbox/sharing/SharingListFolderMembersContinueError.h"
#include "dropbox/sharing/SharingListFoldersArgs.h"
#include "dropbox/sharing/SharingListFoldersContinueArg.h"
#include "dropbox/sharing/SharingListFoldersContinueError.h"
#include "dropbox/sharing/SharingListFoldersResult.h"
#include "dropbox/sharing/SharingListSharedLinksArg.h"
#include "dropbox/sharing/SharingListSharedLinksError.h"
#include "dropbox/sharing/SharingListSharedLinksResult.h"
#include "dropbox/sharing/SharingMemberAccessLevelResult.h"
#include "dropbox/sharing/SharingModifySharedLinkSettingsArgs.h"
#include "dropbox/sharing/SharingModifySharedLinkSettingsError.h"
#include "dropbox/sharing/SharingMountFolderArg.h"
#include "dropbox/sharing/SharingMountFolderError.h"
#include "dropbox/sharing/SharingPathLinkMetadata.h"
#include "dropbox/async/AsyncPollArg.h"
#include "dropbox/async/AsyncPollError.h"
#include "dropbox/sharing/SharingRelinquishFileMembershipArg.h"
#include "dropbox/sharing/SharingRelinquishFileMembershipError.h"
#include "dropbox/sharing/SharingRelinquishFolderMembershipArg.h"
#include "dropbox/sharing/SharingRelinquishFolderMembershipError.h"
#include "dropbox/sharing/SharingRemoveFileMemberArg.h"
#include "dropbox/sharing/SharingRemoveFileMemberError.h"
#include "dropbox/sharing/SharingRemoveFolderMemberArg.h"
#include "dropbox/sharing/SharingRemoveFolderMemberError.h"
#include "dropbox/sharing/SharingRemoveMemberJobStatus.h"
#include "dropbox/sharing/SharingRevokeSharedLinkArg.h"
#include "dropbox/sharing/SharingRevokeSharedLinkError.h"
#include "dropbox/sharing/SharingShareFolderArg.h"
#include "dropbox/sharing/SharingShareFolderError.h"
#include "dropbox/sharing/SharingShareFolderJobStatus.h"
#include "dropbox/sharing/SharingShareFolderLaunch.h"
#include "dropbox/sharing/SharingSharedFileMembers.h"
#include "dropbox/sharing/SharingSharedFileMetadata.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderMembers.h"
#include "dropbox/sharing/SharingSharedFolderMetadata.h"
#include "dropbox/sharing/SharingSharedLinkError.h"
#include "dropbox/sharing/SharingSharedLinkMetadata.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingTransferFolderArg.h"
#include "dropbox/sharing/SharingTransferFolderError.h"
#include "dropbox/sharing/SharingUnmountFolderArg.h"
#include "dropbox/sharing/SharingUnmountFolderError.h"
#include "dropbox/sharing/SharingUnshareFileArg.h"
#include "dropbox/sharing/SharingUnshareFileError.h"
#include "dropbox/sharing/SharingUnshareFolderArg.h"
#include "dropbox/sharing/SharingUnshareFolderError.h"
#include "dropbox/sharing/SharingUpdateFolderMemberArg.h"
#include "dropbox/sharing/SharingUpdateFolderMemberError.h"
#include "dropbox/sharing/SharingUpdateFolderPolicyArg.h"
#include "dropbox/sharing/SharingUpdateFolderPolicyError.h"

namespace dropboxQt{

class Endpoint;

namespace sharing{
    class SharingRoutes{
    public:
        SharingRoutes(Endpoint*);
            /**
            ApiRoute('add_file_member')


            Adds specified members to a file.

            on error:AddFileMemberError throws exception AddFileMemberErrorException
            */
        std::list <FileMemberActionResult> addFileMember(const AddFileMemberArgs& );

            /**
            ApiRoute('add_folder_member')


            Allows an owner or editor (if the ACL update policy allows) of a
            shared folder to add another member. For the new member to get
            access to all the functionality for this folder, you will need to
            call :meth:`mount_folder` on their behalf. Apps must have full
            Dropbox access to use this endpoint.

            on error:AddFolderMemberError throws exception AddFolderMemberErrorException
            */
        void addFolderMember(const AddFolderMemberArg& );

            /**
            ApiRoute('change_file_member_access')


            Changes a member's access on a shared file.

            on error:FileMemberActionError throws exception FileMemberActionErrorException
            */
        std::unique_ptr<FileMemberActionResult> changeFileMemberAccess(const ChangeFileMemberAccessArgs& );

            /**
            ApiRoute('check_job_status')


            Returns the status of an asynchronous job. Apps must have full
            Dropbox access to use this endpoint.

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<JobStatus> checkJobStatus(const async::PollArg& );

            /**
            ApiRoute('check_remove_member_job_status')


            Returns the status of an asynchronous job for sharing a folder. Apps
            must have full Dropbox access to use this endpoint.

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<RemoveMemberJobStatus> checkRemoveMemberJobStatus(const async::PollArg& );

            /**
            ApiRoute('check_share_job_status')


            Returns the status of an asynchronous job for sharing a folder. Apps
            must have full Dropbox access to use this endpoint.

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<ShareFolderJobStatus> checkShareJobStatus(const async::PollArg& );

            /**
            ApiRoute('create_shared_link')


            Create a shared link. If a shared link already exists for the given
            path, that link is returned. Note that in the returned
            :class:`PathLinkMetadata`, the ``PathLinkMetadata.url`` field is the
            shortened URL if ``CreateSharedLinkArg.short_url`` argument is set
            to ``True``. Previously, it was technically possible to break a
            shared link by moving or renaming the corresponding file or folder.
            In the future, this will no longer be the case, so your app
            shouldn't rely on this behavior. Instead, if your app needs to
            revoke a shared link, use :meth:`revoke_shared_link`.

            on error:CreateSharedLinkError throws exception CreateSharedLinkErrorException
            */
        std::unique_ptr<PathLinkMetadata> createSharedLink(const CreateSharedLinkArg& );

            /**
            ApiRoute('create_shared_link_with_settings')


            Create a shared link with custom settings. If no settings are given
            then the default visibility is ``RequestedVisibility.public`` (The
            resolved visibility, though, may depend on other aspects such as
            team and shared folder settings).

            on error:CreateSharedLinkWithSettingsError throws exception CreateSharedLinkWithSettingsErrorException
            */
        std::unique_ptr<SharedLinkMetadata> createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg& );

            /**
            ApiRoute('get_file_metadata')


            Returns shared file metadata.

            on error:GetFileMetadataError throws exception GetFileMetadataErrorException
            */
        std::unique_ptr<SharedFileMetadata> getFileMetadata(const GetFileMetadataArg& );

            /**
            ApiRoute('get_file_metadata/batch')


            Returns shared file metadata.

            on error:SharingUserError throws exception SharingUserErrorException
            */
        std::list <GetFileMetadataBatchResult> getFileMetadataBatch(const GetFileMetadataBatchArg& );

            /**
            ApiRoute('get_folder_metadata')


            Returns shared folder metadata by its folder ID. Apps must have full
            Dropbox access to use this endpoint.

            on error:SharedFolderAccessError throws exception SharedFolderAccessErrorException
            */
        std::unique_ptr<SharedFolderMetadata> getFolderMetadata(const GetMetadataArgs& );

            /**
            ApiRoute('get_shared_link_file')


            Download the shared link's file from a user's Dropbox.

            on error:GetSharedLinkFileError throws exception GetSharedLinkFileErrorException
            */
        std::unique_ptr<SharedLinkMetadata> getSharedLinkFile(const GetSharedLinkMetadataArg& , QIODevice* writeTo);

            /**
            ApiRoute('get_shared_link_metadata')


            Get the shared link's metadata.

            on error:SharedLinkError throws exception SharedLinkErrorException
            */
        std::unique_ptr<SharedLinkMetadata> getSharedLinkMetadata(const GetSharedLinkMetadataArg& );

            /**
            ApiRoute('get_shared_links')


            Returns a list of :class:`LinkMetadata` objects for this user,
            including collection links. If no path is given or the path is
            empty, returns a list of all shared links for the current user,
            including collection links. If a non-empty path is given, returns a
            list of all shared links that allow access to the given path.
            Collection links are never returned in this case. Note that the url
            field in the response is never the shortened URL.

            on error:GetSharedLinksError throws exception GetSharedLinksErrorException
            */
        std::unique_ptr<GetSharedLinksResult> getSharedLinks(const GetSharedLinksArg& );

            /**
            ApiRoute('list_file_members')


            Use to obtain the members who have been invited to a file, both
            inherited and uninherited members.

            on error:ListFileMembersError throws exception ListFileMembersErrorException
            */
        std::unique_ptr<SharedFileMembers> listFileMembers(const ListFileMembersArg& );

            /**
            ApiRoute('list_file_members/batch')


            Get members of multiple files at once. The arguments to this route
            are more limited, and the limit on query result size per file is
            more strict. To customize the results more, use the individual file
            endpoint. Inherited users are not included in the result, and
            permissions are not returned for this endpoint.

            on error:SharingUserError throws exception SharingUserErrorException
            */
        std::list <ListFileMembersBatchResult> listFileMembersBatch(const ListFileMembersBatchArg& );

            /**
            ApiRoute('list_file_members/continue')


            Once a cursor has been retrieved from :meth:`list_file_members` or
            :meth:`list_file_members_batch`, use this to paginate through all
            shared file members.

            on error:ListFileMembersContinueError throws exception ListFileMembersContinueErrorException
            */
        std::unique_ptr<SharedFileMembers> listFileMembersContinue(const ListFileMembersContinueArg& );

            /**
            ApiRoute('list_folder_members')


            Returns shared folder membership by its folder ID. Apps must have
            full Dropbox access to use this endpoint.

            on error:SharedFolderAccessError throws exception SharedFolderAccessErrorException
            */
        std::unique_ptr<SharedFolderMembers> listFolderMembers(const ListFolderMembersArgs& );

            /**
            ApiRoute('list_folder_members/continue')


            Once a cursor has been retrieved from :meth:`list_folder_members`,
            use this to paginate through all shared folder members. Apps must
            have full Dropbox access to use this endpoint.

            on error:ListFolderMembersContinueError throws exception ListFolderMembersContinueErrorException
            */
        std::unique_ptr<SharedFolderMembers> listFolderMembersContinue(const ListFolderMembersContinueArg& );

            /**
            ApiRoute('list_folders')


            Return the list of all shared folders the current user has access
            to. Apps must have full Dropbox access to use this endpoint.

            */
        std::unique_ptr<ListFoldersResult> listFolders(const ListFoldersArgs& );

            /**
            ApiRoute('list_folders/continue')


            Once a cursor has been retrieved from :meth:`list_folders`, use this
            to paginate through all shared folders. The cursor must come from a
            previous call to :meth:`list_folders` or
            :meth:`list_folders_continue`. Apps must have full Dropbox access to
            use this endpoint.

            on error:ListFoldersContinueError throws exception ListFoldersContinueErrorException
            */
        std::unique_ptr<ListFoldersResult> listFoldersContinue(const ListFoldersContinueArg& );

            /**
            ApiRoute('list_mountable_folders')


            Return the list of all shared folders the current user can mount or
            unmount. Apps must have full Dropbox access to use this endpoint.

            */
        std::unique_ptr<ListFoldersResult> listMountableFolders(const ListFoldersArgs& );

            /**
            ApiRoute('list_mountable_folders/continue')


            Once a cursor has been retrieved from
            :meth:`list_mountable_folders`, use this to paginate through all
            mountable shared folders. The cursor must come from a previous call
            to :meth:`list_mountable_folders` or
            :meth:`list_mountable_folders_continue`. Apps must have full Dropbox
            access to use this endpoint.

            on error:ListFoldersContinueError throws exception ListFoldersContinueErrorException
            */
        std::unique_ptr<ListFoldersResult> listMountableFoldersContinue(const ListFoldersContinueArg& );

            /**
            ApiRoute('list_received_files')


            Returns a list of all files shared with current user.  Does not
            include files the user has received via shared folders, and does
            not include unclaimed invitations.

            on error:SharingUserError throws exception SharingUserErrorException
            */
        std::unique_ptr<ListFilesResult> listReceivedFiles(const ListFilesArg& );

            /**
            ApiRoute('list_received_files/continue')


            Get more results with a cursor from :meth:`list_received_files`.

            on error:ListFilesContinueError throws exception ListFilesContinueErrorException
            */
        std::unique_ptr<ListFilesResult> listReceivedFilesContinue(const ListFilesContinueArg& );

            /**
            ApiRoute('list_shared_links')


            List shared links of this user. If no path is given or the path is
            empty, returns a list of all shared links for the current user. If a
            non-empty path is given, returns a list of all shared links that
            allow access to the given path - direct links to the given path and
            links to parent folders of the given path. Links to parent folders
            can be suppressed by setting direct_only to true.

            on error:ListSharedLinksError throws exception ListSharedLinksErrorException
            */
        std::unique_ptr<ListSharedLinksResult> listSharedLinks(const ListSharedLinksArg& );

            /**
            ApiRoute('modify_shared_link_settings')


            Modify the shared link's settings. If the requested visibility
            conflict with the shared links policy of the team or the shared
            folder (in case the linked file is part of a shared folder) then the
            ``LinkPermissions.resolved_visibility`` of the returned
            :class:`SharedLinkMetadata` will reflect the actual visibility of
            the shared link and the ``LinkPermissions.requested_visibility``
            will reflect the requested visibility.

            on error:ModifySharedLinkSettingsError throws exception ModifySharedLinkSettingsErrorException
            */
        std::unique_ptr<SharedLinkMetadata> modifySharedLinkSettings(const ModifySharedLinkSettingsArgs& );

            /**
            ApiRoute('mount_folder')


            The current user mounts the designated folder. Mount a shared folder
            for a user after they have been added as a member. Once mounted, the
            shared folder will appear in their Dropbox. Apps must have full
            Dropbox access to use this endpoint.

            on error:MountFolderError throws exception MountFolderErrorException
            */
        std::unique_ptr<SharedFolderMetadata> mountFolder(const MountFolderArg& );

            /**
            ApiRoute('relinquish_file_membership')


            The current user relinquishes their membership in the designated
            file. Note that the current user may still have inherited access to
            this file through the parent folder. Apps must have full Dropbox
            access to use this endpoint.

            on error:RelinquishFileMembershipError throws exception RelinquishFileMembershipErrorException
            */
        void relinquishFileMembership(const RelinquishFileMembershipArg& );

            /**
            ApiRoute('relinquish_folder_membership')


            The current user relinquishes their membership in the designated
            shared folder and will no longer have access to the folder.  A
            folder owner cannot relinquish membership in their own folder. This
            will run synchronously if leave_a_copy is false, and asynchronously
            if leave_a_copy is true. Apps must have full Dropbox access to use
            this endpoint.

            on error:RelinquishFolderMembershipError throws exception RelinquishFolderMembershipErrorException
            */
        std::unique_ptr<async::LaunchEmptyResult> relinquishFolderMembership(const RelinquishFolderMembershipArg& );

            /**
            ApiRoute('remove_file_member')


            Identical to remove_file_member_2 but with less information
            returned.

            on error:RemoveFileMemberError throws exception RemoveFileMemberErrorException
            */
        std::unique_ptr<FileMemberActionIndividualResult> removeFileMember(const RemoveFileMemberArg& );

            /**
            ApiRoute('remove_file_member_2')


            Removes a specified member from the file.

            on error:RemoveFileMemberError throws exception RemoveFileMemberErrorException
            */
        std::unique_ptr<FileMemberRemoveActionResult> removeFileMember2(const RemoveFileMemberArg& );

            /**
            ApiRoute('remove_folder_member')


            Allows an owner or editor (if the ACL update policy allows) of a
            shared folder to remove another member. Apps must have full Dropbox
            access to use this endpoint.

            on error:RemoveFolderMemberError throws exception RemoveFolderMemberErrorException
            */
        std::unique_ptr<async::LaunchResultBase> removeFolderMember(const RemoveFolderMemberArg& );

            /**
            ApiRoute('revoke_shared_link')


            Revoke a shared link. Note that even after revoking a shared link to
            a file, the file may be accessible if there are shared links leading
            to any of the file parent folders. To list all shared links that
            enable access to a specific file, you can use the
            :meth:`list_shared_links` with the file as the
            ``ListSharedLinksArg.path`` argument.

            on error:RevokeSharedLinkError throws exception RevokeSharedLinkErrorException
            */
        void revokeSharedLink(const RevokeSharedLinkArg& );

            /**
            ApiRoute('share_folder')


            Share a folder with collaborators. Most sharing will be completed
            synchronously. Large folders will be completed asynchronously. To
            make testing the async case repeatable, set
            `ShareFolderArg.force_async`. If a
            ``ShareFolderLaunch.async_job_id`` is returned, you'll need to call
            :meth:`check_share_job_status` until the action completes to get the
            metadata for the folder. Apps must have full Dropbox access to use
            this endpoint.

            on error:ShareFolderError throws exception ShareFolderErrorException
            */
        std::unique_ptr<ShareFolderLaunch> shareFolder(const ShareFolderArg& );

            /**
            ApiRoute('transfer_folder')


            Transfer ownership of a shared folder to a member of the shared
            folder. User must have ``AccessLevel.owner`` access to the shared
            folder to perform a transfer. Apps must have full Dropbox access to
            use this endpoint.

            on error:TransferFolderError throws exception TransferFolderErrorException
            */
        void transferFolder(const TransferFolderArg& );

            /**
            ApiRoute('unmount_folder')


            The current user unmounts the designated folder. They can re-mount
            the folder at a later time using :meth:`mount_folder`. Apps must
            have full Dropbox access to use this endpoint.

            on error:UnmountFolderError throws exception UnmountFolderErrorException
            */
        void unmountFolder(const UnmountFolderArg& );

            /**
            ApiRoute('unshare_file')


            Remove all members from this file. Does not remove inherited
            members.

            on error:UnshareFileError throws exception UnshareFileErrorException
            */
        void unshareFile(const UnshareFileArg& );

            /**
            ApiRoute('unshare_folder')


            Allows a shared folder owner to unshare the folder. You'll need to
            call :meth:`check_job_status` to determine if the action has
            completed successfully. Apps must have full Dropbox access to use
            this endpoint.

            on error:UnshareFolderError throws exception UnshareFolderErrorException
            */
        std::unique_ptr<async::LaunchEmptyResult> unshareFolder(const UnshareFolderArg& );

            /**
            ApiRoute('update_folder_member')


            Allows an owner or editor of a shared folder to update another
            member's permissions. Apps must have full Dropbox access to use this
            endpoint.

            on error:UpdateFolderMemberError throws exception UpdateFolderMemberErrorException
            */
        std::unique_ptr<MemberAccessLevelResult> updateFolderMember(const UpdateFolderMemberArg& );

            /**
            ApiRoute('update_folder_policy')


            Update the sharing policies for a shared folder. User must have
            ``AccessLevel.owner`` access to the shared folder to update its
            policies. Apps must have full Dropbox access to use this endpoint.

            on error:UpdateFolderPolicyError throws exception UpdateFolderPolicyErrorException
            */
        std::unique_ptr<SharedFolderMetadata> updateFolderPolicy(const UpdateFolderPolicyArg& );

    protected:
        Endpoint* m_end_point;
    };//SharingRoutes

    ///exception AddFileMemberError for add_file_member
    DECLARE_API_ERR_EXCEPTION(AddFileMemberErrorException, sharing::AddFileMemberError);

    ///exception AddFolderMemberError for add_folder_member
    DECLARE_API_ERR_EXCEPTION(AddFolderMemberErrorException, sharing::AddFolderMemberError);

    ///exception FileMemberActionError for change_file_member_access
    DECLARE_API_ERR_EXCEPTION(FileMemberActionErrorException, sharing::FileMemberActionError);

    ///exception PollError for check_job_status
    DECLARE_API_ERR_EXCEPTION(PollErrorException, async::PollError);

    ///exception CreateSharedLinkError for create_shared_link
    DECLARE_API_ERR_EXCEPTION(CreateSharedLinkErrorException, sharing::CreateSharedLinkError);

    ///exception CreateSharedLinkWithSettingsError for create_shared_link_with_settings
    DECLARE_API_ERR_EXCEPTION(CreateSharedLinkWithSettingsErrorException, sharing::CreateSharedLinkWithSettingsError);

    ///exception GetFileMetadataError for get_file_metadata
    DECLARE_API_ERR_EXCEPTION(GetFileMetadataErrorException, sharing::GetFileMetadataError);

    ///exception SharingUserError for get_file_metadata/batch
    DECLARE_API_ERR_EXCEPTION(SharingUserErrorException, sharing::SharingUserError);

    ///exception SharedFolderAccessError for get_folder_metadata
    DECLARE_API_ERR_EXCEPTION(SharedFolderAccessErrorException, sharing::SharedFolderAccessError);

    ///exception GetSharedLinkFileError for get_shared_link_file
    DECLARE_API_ERR_EXCEPTION(GetSharedLinkFileErrorException, sharing::GetSharedLinkFileError);

    ///exception SharedLinkError for get_shared_link_metadata
    DECLARE_API_ERR_EXCEPTION(SharedLinkErrorException, sharing::SharedLinkError);

    ///exception GetSharedLinksError for get_shared_links
    DECLARE_API_ERR_EXCEPTION(GetSharedLinksErrorException, sharing::GetSharedLinksError);

    ///exception ListFileMembersError for list_file_members
    DECLARE_API_ERR_EXCEPTION(ListFileMembersErrorException, sharing::ListFileMembersError);

    ///exception ListFileMembersContinueError for list_file_members/continue
    DECLARE_API_ERR_EXCEPTION(ListFileMembersContinueErrorException, sharing::ListFileMembersContinueError);

    ///exception ListFolderMembersContinueError for list_folder_members/continue
    DECLARE_API_ERR_EXCEPTION(ListFolderMembersContinueErrorException, sharing::ListFolderMembersContinueError);

    ///exception ListFoldersContinueError for list_folders/continue
    DECLARE_API_ERR_EXCEPTION(ListFoldersContinueErrorException, sharing::ListFoldersContinueError);

    ///exception ListFilesContinueError for list_received_files/continue
    DECLARE_API_ERR_EXCEPTION(ListFilesContinueErrorException, sharing::ListFilesContinueError);

    ///exception ListSharedLinksError for list_shared_links
    DECLARE_API_ERR_EXCEPTION(ListSharedLinksErrorException, sharing::ListSharedLinksError);

    ///exception ModifySharedLinkSettingsError for modify_shared_link_settings
    DECLARE_API_ERR_EXCEPTION(ModifySharedLinkSettingsErrorException, sharing::ModifySharedLinkSettingsError);

    ///exception MountFolderError for mount_folder
    DECLARE_API_ERR_EXCEPTION(MountFolderErrorException, sharing::MountFolderError);

    ///exception RelinquishFileMembershipError for relinquish_file_membership
    DECLARE_API_ERR_EXCEPTION(RelinquishFileMembershipErrorException, sharing::RelinquishFileMembershipError);

    ///exception RelinquishFolderMembershipError for relinquish_folder_membership
    DECLARE_API_ERR_EXCEPTION(RelinquishFolderMembershipErrorException, sharing::RelinquishFolderMembershipError);

    ///exception RemoveFileMemberError for remove_file_member
    DECLARE_API_ERR_EXCEPTION(RemoveFileMemberErrorException, sharing::RemoveFileMemberError);

    ///exception RemoveFolderMemberError for remove_folder_member
    DECLARE_API_ERR_EXCEPTION(RemoveFolderMemberErrorException, sharing::RemoveFolderMemberError);

    ///exception RevokeSharedLinkError for revoke_shared_link
    DECLARE_API_ERR_EXCEPTION(RevokeSharedLinkErrorException, sharing::RevokeSharedLinkError);

    ///exception ShareFolderError for share_folder
    DECLARE_API_ERR_EXCEPTION(ShareFolderErrorException, sharing::ShareFolderError);

    ///exception TransferFolderError for transfer_folder
    DECLARE_API_ERR_EXCEPTION(TransferFolderErrorException, sharing::TransferFolderError);

    ///exception UnmountFolderError for unmount_folder
    DECLARE_API_ERR_EXCEPTION(UnmountFolderErrorException, sharing::UnmountFolderError);

    ///exception UnshareFileError for unshare_file
    DECLARE_API_ERR_EXCEPTION(UnshareFileErrorException, sharing::UnshareFileError);

    ///exception UnshareFolderError for unshare_folder
    DECLARE_API_ERR_EXCEPTION(UnshareFolderErrorException, sharing::UnshareFolderError);

    ///exception UpdateFolderMemberError for update_folder_member
    DECLARE_API_ERR_EXCEPTION(UpdateFolderMemberErrorException, sharing::UpdateFolderMemberError);

    ///exception UpdateFolderPolicyError for update_folder_policy
    DECLARE_API_ERR_EXCEPTION(UpdateFolderPolicyErrorException, sharing::UpdateFolderPolicyError);


}//sharing
}//dropboxQt
