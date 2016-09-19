/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"

namespace dropboxQt{
namespace sharing{
    class RelinquishFolderMembershipError{
        /**
            field: folder_owner: The current user is the owner of the shared
                folder. Owners cannot relinquish membership to their own
                folders. Try unsharing or transferring ownership first.
            field: mounted: The shared folder is currently mounted.  Unmount the
                shared folder before relinquishing membership.
            field: group_access: The current user has access to the shared
                folder via a group.  You can't relinquish membership to folders
                shared via groups.
            field: team_folder: This action cannot be performed on a team shared
                folder.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*None*/
		RelinquishFolderMembershipError_ACCESS_ERROR,
		/*The current user is the owner of the shared folder. Owners cannot relinquish membership to their own folders. Try unsharing or transferring ownership first.*/
		RelinquishFolderMembershipError_FOLDER_OWNER,
		/*The shared folder is currently mounted.  Unmount the shared folder before relinquishing membership.*/
		RelinquishFolderMembershipError_MOUNTED,
		/*The current user has access to the shared folder via a group.  You can't relinquish membership to folders shared via groups.*/
		RelinquishFolderMembershipError_GROUP_ACCESS,
		/*This action cannot be performed on a team shared folder.*/
		RelinquishFolderMembershipError_TEAM_FOLDER,
		/*The current user does not have permission to perform this action.*/
		RelinquishFolderMembershipError_NO_PERMISSION,
		/*None*/
		RelinquishFolderMembershipError_OTHER
        };

        RelinquishFolderMembershipError(){}
        RelinquishFolderMembershipError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((RelinquishFolderMembershipError_ACCESS_ERROR == m_tag), "expected tag: RelinquishFolderMembershipError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelinquishFolderMembershipError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
    };//RelinquishFolderMembershipError

}//sharing
}//dropboxQt
