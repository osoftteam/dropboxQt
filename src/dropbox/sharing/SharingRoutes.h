/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

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
class DropboxRequestConfig;
class DropboxAuthInfo;

namespace sharing{
    class SharingRoutes{
    public:
        SharingRoutes(Endpoint*);
            /**
            ApiRoute('add_file_member')

            Adds specified members to a file.
            on error:AddFileMemberError
            */
        std::list <FileMemberActionResult> addFileMember(const AddFileMemberArgs&);

            /**
            ApiRoute('add_folder_member')

            Allows an owner or editor (if the ACL update policy allows) of a
            shared folder to add another member. For the new member to get
            access to all the functionality for this folder, you will need to
            call :meth:`mount_folder` on their behalf. Apps must have full
            Dropbox access to use this endpoint.
            on error:AddFolderMemberError
            */
        void addFolderMember(const AddFolderMemberArg&);

            /**
            ApiRoute('change_file_member_access')

            Changes a member's access on a shared file.
            on error:FileMemberActionError
            */
        FileMemberActionResult changeFileMemberAccess(const ChangeFileMemberAccessArgs&);

            /**
            ApiRoute('check_job_status')

            Returns the status of an asynchronous job. Apps must have full
            Dropbox access to use this endpoint.
            on error:PollError
            */
        JobStatus checkJobStatus(const async::PollArg&);

            /**
            ApiRoute('check_remove_member_job_status')

            Returns the status of an asynchronous job for sharing a folder. Apps
            must have full Dropbox access to use this endpoint.
            on error:PollError
            */
        RemoveMemberJobStatus checkRemoveMemberJobStatus(const async::PollArg&);

            /**
            ApiRoute('check_share_job_status')

            Returns the status of an asynchronous job for sharing a folder. Apps
            must have full Dropbox access to use this endpoint.
            on error:PollError
            */
        ShareFolderJobStatus checkShareJobStatus(const async::PollArg&);

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
            on error:CreateSharedLinkError
            */
        PathLinkMetadata createSharedLink(const CreateSharedLinkArg&);

            /**
            ApiRoute('create_shared_link_with_settings')

            Create a shared link with custom settings. If no settings are given
            then the default visibility is ``RequestedVisibility.public`` (The
            resolved visibility, though, may depend on other aspects such as
            team and shared folder settings).
            on error:CreateSharedLinkWithSettingsError
            */
        SharedLinkMetadata createSharedLinkWithSettings(const CreateSharedLinkWithSettingsArg&);

            /**
            ApiRoute('get_file_metadata')

            Returns shared file metadata.
            on error:GetFileMetadataError
            */
        SharedFileMetadata getFileMetadata(const GetFileMetadataArg&);

            /**
            ApiRoute('get_file_metadata/batch')

            Returns shared file metadata.
            on error:SharingUserError
            */
        std::list <GetFileMetadataBatchResult> getFileMetadataBatch(const GetFileMetadataBatchArg&);

            /**
            ApiRoute('get_folder_metadata')

            Returns shared folder metadata by its folder ID. Apps must have full
            Dropbox access to use this endpoint.
            on error:SharedFolderAccessError
            */
        SharedFolderMetadata getFolderMetadata(const GetMetadataArgs&);

            /**
            ApiRoute('get_shared_link_file')

            Download the shared link's file from a user's Dropbox.
            on error:GetSharedLinkFileError
            */
        SharedLinkMetadata getSharedLinkFile(const GetSharedLinkMetadataArg&, QIODevice* writeTo);

            /**
            ApiRoute('get_shared_link_metadata')

            Get the shared link's metadata.
            on error:SharedLinkError
            */
        SharedLinkMetadata getSharedLinkMetadata(const GetSharedLinkMetadataArg&);

            /**
            ApiRoute('get_shared_links')

            Returns a list of :class:`LinkMetadata` objects for this user,
            including collection links. If no path is given or the path is
            empty, returns a list of all shared links for the current user,
            including collection links. If a non-empty path is given, returns a
            list of all shared links that allow access to the given path.
            Collection links are never returned in this case. Note that the url
            field in the response is never the shortened URL.
            on error:GetSharedLinksError
            */
        GetSharedLinksResult getSharedLinks(const GetSharedLinksArg&);

            /**
            ApiRoute('list_file_members')

            Use to obtain the members who have been invited to a file, both
            inherited and uninherited members.
            on error:ListFileMembersError
            */
        SharedFileMembers listFileMembers(const ListFileMembersArg&);

            /**
            ApiRoute('list_file_members/batch')

            Get members of multiple files at once. The arguments to this route
            are more limited, and the limit on query result size per file is
            more strict. To customize the results more, use the individual file
            endpoint. Inherited users are not included in the result, and
            permissions are not returned for this endpoint.
            on error:SharingUserError
            */
        std::list <ListFileMembersBatchResult> listFileMembersBatch(const ListFileMembersBatchArg&);

            /**
            ApiRoute('list_file_members/continue')

            Once a cursor has been retrieved from :meth:`list_file_members` or
            :meth:`list_file_members_batch`, use this to paginate through all
            shared file members.
            on error:ListFileMembersContinueError
            */
        SharedFileMembers listFileMembersContinue(const ListFileMembersContinueArg&);

            /**
            ApiRoute('list_folder_members')

            Returns shared folder membership by its folder ID. Apps must have
            full Dropbox access to use this endpoint.
            on error:SharedFolderAccessError
            */
        SharedFolderMembers listFolderMembers(const ListFolderMembersArgs&);

            /**
            ApiRoute('list_folder_members/continue')

            Once a cursor has been retrieved from :meth:`list_folder_members`,
            use this to paginate through all shared folder members. Apps must
            have full Dropbox access to use this endpoint.
            on error:ListFolderMembersContinueError
            */
        SharedFolderMembers listFolderMembersContinue(const ListFolderMembersContinueArg&);

            /**
            ApiRoute('list_folders')

            Return the list of all shared folders the current user has access
            to. Apps must have full Dropbox access to use this endpoint.
            on error:Void
            */
        ListFoldersResult listFolders(const ListFoldersArgs&);

            /**
            ApiRoute('list_folders/continue')

            Once a cursor has been retrieved from :meth:`list_folders`, use this
            to paginate through all shared folders. The cursor must come from a
            previous call to :meth:`list_folders` or
            :meth:`list_folders_continue`. Apps must have full Dropbox access to
            use this endpoint.
            on error:ListFoldersContinueError
            */
        ListFoldersResult listFoldersContinue(const ListFoldersContinueArg&);

            /**
            ApiRoute('list_mountable_folders')

            Return the list of all shared folders the current user can mount or
            unmount. Apps must have full Dropbox access to use this endpoint.
            on error:Void
            */
        ListFoldersResult listMountableFolders(const ListFoldersArgs&);

            /**
            ApiRoute('list_mountable_folders/continue')

            Once a cursor has been retrieved from
            :meth:`list_mountable_folders`, use this to paginate through all
            mountable shared folders. The cursor must come from a previous call
            to :meth:`list_mountable_folders` or
            :meth:`list_mountable_folders_continue`. Apps must have full Dropbox
            access to use this endpoint.
            on error:ListFoldersContinueError
            */
        ListFoldersResult listMountableFoldersContinue(const ListFoldersContinueArg&);

            /**
            ApiRoute('list_received_files')

            Returns a list of all files shared with current user.  Does not
            include files the user has received via shared folders, and does
            not include unclaimed invitations.
            on error:SharingUserError
            */
        ListFilesResult listReceivedFiles(const ListFilesArg&);

            /**
            ApiRoute('list_received_files/continue')

            Get more results with a cursor from :meth:`list_received_files`.
            on error:ListFilesContinueError
            */
        ListFilesResult listReceivedFilesContinue(const ListFilesContinueArg&);

            /**
            ApiRoute('list_shared_links')

            List shared links of this user. If no path is given or the path is
            empty, returns a list of all shared links for the current user. If a
            non-empty path is given, returns a list of all shared links that
            allow access to the given path - direct links to the given path and
            links to parent folders of the given path. Links to parent folders
            can be suppressed by setting direct_only to true.
            on error:ListSharedLinksError
            */
        ListSharedLinksResult listSharedLinks(const ListSharedLinksArg&);

            /**
            ApiRoute('modify_shared_link_settings')

            Modify the shared link's settings. If the requested visibility
            conflict with the shared links policy of the team or the shared
            folder (in case the linked file is part of a shared folder) then the
            ``LinkPermissions.resolved_visibility`` of the returned
            :class:`SharedLinkMetadata` will reflect the actual visibility of
            the shared link and the ``LinkPermissions.requested_visibility``
            will reflect the requested visibility.
            on error:ModifySharedLinkSettingsError
            */
        SharedLinkMetadata modifySharedLinkSettings(const ModifySharedLinkSettingsArgs&);

            /**
            ApiRoute('mount_folder')

            The current user mounts the designated folder. Mount a shared folder
            for a user after they have been added as a member. Once mounted, the
            shared folder will appear in their Dropbox. Apps must have full
            Dropbox access to use this endpoint.
            on error:MountFolderError
            */
        SharedFolderMetadata mountFolder(const MountFolderArg&);

            /**
            ApiRoute('relinquish_file_membership')

            The current user relinquishes their membership in the designated
            file. Note that the current user may still have inherited access to
            this file through the parent folder. Apps must have full Dropbox
            access to use this endpoint.
            on error:RelinquishFileMembershipError
            */
        void relinquishFileMembership(const RelinquishFileMembershipArg&);

            /**
            ApiRoute('relinquish_folder_membership')

            The current user relinquishes their membership in the designated
            shared folder and will no longer have access to the folder.  A
            folder owner cannot relinquish membership in their own folder. This
            will run synchronously if leave_a_copy is false, and asynchronously
            if leave_a_copy is true. Apps must have full Dropbox access to use
            this endpoint.
            on error:RelinquishFolderMembershipError
            */
        async::LaunchEmptyResult relinquishFolderMembership(const RelinquishFolderMembershipArg&);

            /**
            ApiRoute('remove_file_member')

            Identical to remove_file_member_2 but with less information
            returned.
            on error:RemoveFileMemberError
            */
        FileMemberActionIndividualResult removeFileMember(const RemoveFileMemberArg&);

            /**
            ApiRoute('remove_file_member_2')

            Removes a specified member from the file.
            on error:RemoveFileMemberError
            */
        FileMemberRemoveActionResult removeFileMember2(const RemoveFileMemberArg&);

            /**
            ApiRoute('remove_folder_member')

            Allows an owner or editor (if the ACL update policy allows) of a
            shared folder to remove another member. Apps must have full Dropbox
            access to use this endpoint.
            on error:RemoveFolderMemberError
            */
        async::LaunchResultBase removeFolderMember(const RemoveFolderMemberArg&);

            /**
            ApiRoute('revoke_shared_link')

            Revoke a shared link. Note that even after revoking a shared link to
            a file, the file may be accessible if there are shared links leading
            to any of the file parent folders. To list all shared links that
            enable access to a specific file, you can use the
            :meth:`list_shared_links` with the file as the
            ``ListSharedLinksArg.path`` argument.
            on error:RevokeSharedLinkError
            */
        void revokeSharedLink(const RevokeSharedLinkArg&);

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
            on error:ShareFolderError
            */
        ShareFolderLaunch shareFolder(const ShareFolderArg&);

            /**
            ApiRoute('transfer_folder')

            Transfer ownership of a shared folder to a member of the shared
            folder. User must have ``AccessLevel.owner`` access to the shared
            folder to perform a transfer. Apps must have full Dropbox access to
            use this endpoint.
            on error:TransferFolderError
            */
        void transferFolder(const TransferFolderArg&);

            /**
            ApiRoute('unmount_folder')

            The current user unmounts the designated folder. They can re-mount
            the folder at a later time using :meth:`mount_folder`. Apps must
            have full Dropbox access to use this endpoint.
            on error:UnmountFolderError
            */
        void unmountFolder(const UnmountFolderArg&);

            /**
            ApiRoute('unshare_file')

            Remove all members from this file. Does not remove inherited
            members.
            on error:UnshareFileError
            */
        void unshareFile(const UnshareFileArg&);

            /**
            ApiRoute('unshare_folder')

            Allows a shared folder owner to unshare the folder. You'll need to
            call :meth:`check_job_status` to determine if the action has
            completed successfully. Apps must have full Dropbox access to use
            this endpoint.
            on error:UnshareFolderError
            */
        async::LaunchEmptyResult unshareFolder(const UnshareFolderArg&);

            /**
            ApiRoute('update_folder_member')

            Allows an owner or editor of a shared folder to update another
            member's permissions. Apps must have full Dropbox access to use this
            endpoint.
            on error:UpdateFolderMemberError
            */
        MemberAccessLevelResult updateFolderMember(const UpdateFolderMemberArg&);

            /**
            ApiRoute('update_folder_policy')

            Update the sharing policies for a shared folder. User must have
            ``AccessLevel.owner`` access to the shared folder to update its
            policies. Apps must have full Dropbox access to use this endpoint.
            on error:UpdateFolderPolicyError
            */
        SharedFolderMetadata updateFolderPolicy(const UpdateFolderPolicyArg&);

    protected:
        Endpoint* m_end_point;
    };//SharingRoutes

    ///exception AddFileMemberError for add_file_member
    class AddFileMemberErrorException: public ReplyException{
    public:
        const sharing::AddFileMemberError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        AddFileMemberErrorException(const sharing::AddFileMemberError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::AddFileMemberError m_err;
    };

    ///exception AddFolderMemberError for add_folder_member
    class AddFolderMemberErrorException: public ReplyException{
    public:
        const sharing::AddFolderMemberError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        AddFolderMemberErrorException(const sharing::AddFolderMemberError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::AddFolderMemberError m_err;
    };

    ///exception FileMemberActionError for change_file_member_access
    class FileMemberActionErrorException: public ReplyException{
    public:
        const sharing::FileMemberActionError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        FileMemberActionErrorException(const sharing::FileMemberActionError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::FileMemberActionError m_err;
    };

    ///exception PollError for check_job_status
    class PollErrorException: public ReplyException{
    public:
        const async::PollError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        PollErrorException(const async::PollError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        async::PollError m_err;
    };

    ///exception CreateSharedLinkError for create_shared_link
    class CreateSharedLinkErrorException: public ReplyException{
    public:
        const sharing::CreateSharedLinkError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        CreateSharedLinkErrorException(const sharing::CreateSharedLinkError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::CreateSharedLinkError m_err;
    };

    ///exception CreateSharedLinkWithSettingsError for create_shared_link_with_settings
    class CreateSharedLinkWithSettingsErrorException: public ReplyException{
    public:
        const sharing::CreateSharedLinkWithSettingsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        CreateSharedLinkWithSettingsErrorException(const sharing::CreateSharedLinkWithSettingsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::CreateSharedLinkWithSettingsError m_err;
    };

    ///exception GetFileMetadataError for get_file_metadata
    class GetFileMetadataErrorException: public ReplyException{
    public:
        const sharing::GetFileMetadataError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetFileMetadataErrorException(const sharing::GetFileMetadataError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::GetFileMetadataError m_err;
    };

    ///exception SharingUserError for get_file_metadata/batch
    class SharingUserErrorException: public ReplyException{
    public:
        const sharing::SharingUserError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SharingUserErrorException(const sharing::SharingUserError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::SharingUserError m_err;
    };

    ///exception SharedFolderAccessError for get_folder_metadata
    class SharedFolderAccessErrorException: public ReplyException{
    public:
        const sharing::SharedFolderAccessError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SharedFolderAccessErrorException(const sharing::SharedFolderAccessError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::SharedFolderAccessError m_err;
    };

    ///exception GetSharedLinkFileError for get_shared_link_file
    class GetSharedLinkFileErrorException: public ReplyException{
    public:
        const sharing::GetSharedLinkFileError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetSharedLinkFileErrorException(const sharing::GetSharedLinkFileError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::GetSharedLinkFileError m_err;
    };

    ///exception SharedLinkError for get_shared_link_metadata
    class SharedLinkErrorException: public ReplyException{
    public:
        const sharing::SharedLinkError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        SharedLinkErrorException(const sharing::SharedLinkError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::SharedLinkError m_err;
    };

    ///exception GetSharedLinksError for get_shared_links
    class GetSharedLinksErrorException: public ReplyException{
    public:
        const sharing::GetSharedLinksError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetSharedLinksErrorException(const sharing::GetSharedLinksError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::GetSharedLinksError m_err;
    };

    ///exception ListFileMembersError for list_file_members
    class ListFileMembersErrorException: public ReplyException{
    public:
        const sharing::ListFileMembersError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFileMembersErrorException(const sharing::ListFileMembersError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListFileMembersError m_err;
    };

    ///exception ListFileMembersContinueError for list_file_members/continue
    class ListFileMembersContinueErrorException: public ReplyException{
    public:
        const sharing::ListFileMembersContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFileMembersContinueErrorException(const sharing::ListFileMembersContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListFileMembersContinueError m_err;
    };

    ///exception ListFolderMembersContinueError for list_folder_members/continue
    class ListFolderMembersContinueErrorException: public ReplyException{
    public:
        const sharing::ListFolderMembersContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFolderMembersContinueErrorException(const sharing::ListFolderMembersContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListFolderMembersContinueError m_err;
    };

    ///exception ListFoldersContinueError for list_folders/continue
    class ListFoldersContinueErrorException: public ReplyException{
    public:
        const sharing::ListFoldersContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFoldersContinueErrorException(const sharing::ListFoldersContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListFoldersContinueError m_err;
    };

    ///exception ListFilesContinueError for list_received_files/continue
    class ListFilesContinueErrorException: public ReplyException{
    public:
        const sharing::ListFilesContinueError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListFilesContinueErrorException(const sharing::ListFilesContinueError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListFilesContinueError m_err;
    };

    ///exception ListSharedLinksError for list_shared_links
    class ListSharedLinksErrorException: public ReplyException{
    public:
        const sharing::ListSharedLinksError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ListSharedLinksErrorException(const sharing::ListSharedLinksError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ListSharedLinksError m_err;
    };

    ///exception ModifySharedLinkSettingsError for modify_shared_link_settings
    class ModifySharedLinkSettingsErrorException: public ReplyException{
    public:
        const sharing::ModifySharedLinkSettingsError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ModifySharedLinkSettingsErrorException(const sharing::ModifySharedLinkSettingsError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ModifySharedLinkSettingsError m_err;
    };

    ///exception MountFolderError for mount_folder
    class MountFolderErrorException: public ReplyException{
    public:
        const sharing::MountFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        MountFolderErrorException(const sharing::MountFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::MountFolderError m_err;
    };

    ///exception RelinquishFileMembershipError for relinquish_file_membership
    class RelinquishFileMembershipErrorException: public ReplyException{
    public:
        const sharing::RelinquishFileMembershipError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RelinquishFileMembershipErrorException(const sharing::RelinquishFileMembershipError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::RelinquishFileMembershipError m_err;
    };

    ///exception RelinquishFolderMembershipError for relinquish_folder_membership
    class RelinquishFolderMembershipErrorException: public ReplyException{
    public:
        const sharing::RelinquishFolderMembershipError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RelinquishFolderMembershipErrorException(const sharing::RelinquishFolderMembershipError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::RelinquishFolderMembershipError m_err;
    };

    ///exception RemoveFileMemberError for remove_file_member
    class RemoveFileMemberErrorException: public ReplyException{
    public:
        const sharing::RemoveFileMemberError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RemoveFileMemberErrorException(const sharing::RemoveFileMemberError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::RemoveFileMemberError m_err;
    };

    ///exception RemoveFolderMemberError for remove_folder_member
    class RemoveFolderMemberErrorException: public ReplyException{
    public:
        const sharing::RemoveFolderMemberError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RemoveFolderMemberErrorException(const sharing::RemoveFolderMemberError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::RemoveFolderMemberError m_err;
    };

    ///exception RevokeSharedLinkError for revoke_shared_link
    class RevokeSharedLinkErrorException: public ReplyException{
    public:
        const sharing::RevokeSharedLinkError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        RevokeSharedLinkErrorException(const sharing::RevokeSharedLinkError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::RevokeSharedLinkError m_err;
    };

    ///exception ShareFolderError for share_folder
    class ShareFolderErrorException: public ReplyException{
    public:
        const sharing::ShareFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        ShareFolderErrorException(const sharing::ShareFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::ShareFolderError m_err;
    };

    ///exception TransferFolderError for transfer_folder
    class TransferFolderErrorException: public ReplyException{
    public:
        const sharing::TransferFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        TransferFolderErrorException(const sharing::TransferFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::TransferFolderError m_err;
    };

    ///exception UnmountFolderError for unmount_folder
    class UnmountFolderErrorException: public ReplyException{
    public:
        const sharing::UnmountFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UnmountFolderErrorException(const sharing::UnmountFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::UnmountFolderError m_err;
    };

    ///exception UnshareFileError for unshare_file
    class UnshareFileErrorException: public ReplyException{
    public:
        const sharing::UnshareFileError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UnshareFileErrorException(const sharing::UnshareFileError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::UnshareFileError m_err;
    };

    ///exception UnshareFolderError for unshare_folder
    class UnshareFolderErrorException: public ReplyException{
    public:
        const sharing::UnshareFolderError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UnshareFolderErrorException(const sharing::UnshareFolderError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::UnshareFolderError m_err;
    };

    ///exception UpdateFolderMemberError for update_folder_member
    class UpdateFolderMemberErrorException: public ReplyException{
    public:
        const sharing::UpdateFolderMemberError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UpdateFolderMemberErrorException(const sharing::UpdateFolderMemberError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::UpdateFolderMemberError m_err;
    };

    ///exception UpdateFolderPolicyError for update_folder_policy
    class UpdateFolderPolicyErrorException: public ReplyException{
    public:
        const sharing::UpdateFolderPolicyError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        UpdateFolderPolicyErrorException(const sharing::UpdateFolderPolicyError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        sharing::UpdateFolderPolicyError m_err;
    };


}//sharing
}//dropboxQt
