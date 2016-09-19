/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderMemberError.h"
#include "dropbox/sharing/SharingSharedFolderMemberError.h"
#include "dropbox/sharing/SharingAddFolderMemberError.h"
#include "dropbox/sharing/SharingAddFolderMemberError.h"

namespace dropboxQt{
namespace sharing{
    class UpdateFolderMemberError{
        /**
            field: no_explicit_access: If updating the access type required the
                member to be added to the shared folder and there was an error
                when adding the member.
            field: insufficient_plan: The current user's account doesn't support
                this action. An example of this is when downgrading a member
                from editor to viewer. This action can only be performed by
                users that have upgraded to a Pro or Business plan.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*None*/
		UpdateFolderMemberError_ACCESS_ERROR,
		/*None*/
		UpdateFolderMemberError_MEMBER_ERROR,
		/*If updating the access type required the member to be added to the shared folder and there was an error when adding the member.*/
		UpdateFolderMemberError_NO_EXPLICIT_ACCESS,
		/*The current user's account doesn't support this action. An example of this is when downgrading a member from editor to viewer. This action can only be performed by users that have upgraded to a Pro or Business plan.*/
		UpdateFolderMemberError_INSUFFICIENT_PLAN,
		/*The current user does not have permission to perform this action.*/
		UpdateFolderMemberError_NO_PERMISSION,
		/*None*/
		UpdateFolderMemberError_OTHER
        };

        UpdateFolderMemberError(){}
        UpdateFolderMemberError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((UpdateFolderMemberError_ACCESS_ERROR == m_tag), "expected tag: UpdateFolderMemberError_ACCESS_ERROR", m_tag);return m_access_error;};

        ///None
        SharedFolderMemberError getMemberError()const{DBOX_CHECK_STATE((UpdateFolderMemberError_MEMBER_ERROR == m_tag), "expected tag: UpdateFolderMemberError_MEMBER_ERROR", m_tag);return m_member_error;};

        ///If updating the access type required the member to be added to the shared folder and there was an error when adding the member.
        AddFolderMemberError getNoExplicitAccess()const{DBOX_CHECK_STATE((UpdateFolderMemberError_NO_EXPLICIT_ACCESS == m_tag), "expected tag: UpdateFolderMemberError_NO_EXPLICIT_ACCESS", m_tag);return m_no_explicit_access;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UpdateFolderMemberError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
        SharedFolderMemberError m_member_error;
        AddFolderMemberError m_no_explicit_access;
    };//UpdateFolderMemberError

}//sharing
}//dropboxQt
