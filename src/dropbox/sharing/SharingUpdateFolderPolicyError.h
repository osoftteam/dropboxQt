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
    class UpdateFolderPolicyError{
        /**
            field: not_on_team: ``UpdateFolderPolicyArg.member_policy`` was set
                even though user is not on a team.
            field: team_policy_disallows_member_policy: Team policy is more
                restrictive than ``ShareFolderArg.member_policy``.
            field: disallowed_shared_link_policy: The current account is not
                allowed to select the specified
                ``ShareFolderArg.shared_link_policy``.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*None*/
		UpdateFolderPolicyError_ACCESS_ERROR,
		/*:field:`UpdateFolderPolicyArg.member_policy` was set even though user is not on a team.*/
		UpdateFolderPolicyError_NOT_ON_TEAM,
		/*Team policy is more restrictive than :field:`ShareFolderArg.member_policy`.*/
		UpdateFolderPolicyError_TEAM_POLICY_DISALLOWS_MEMBER_POLICY,
		/*The current account is not allowed to select the specified :field:`ShareFolderArg.shared_link_policy`.*/
		UpdateFolderPolicyError_DISALLOWED_SHARED_LINK_POLICY,
		/*The current user does not have permission to perform this action.*/
		UpdateFolderPolicyError_NO_PERMISSION,
		/*None*/
		UpdateFolderPolicyError_OTHER
        };

        UpdateFolderPolicyError(){}
        UpdateFolderPolicyError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((UpdateFolderPolicyError_ACCESS_ERROR == m_tag), "expected tag: UpdateFolderPolicyError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UpdateFolderPolicyError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
    };//UpdateFolderPolicyError

}//sharing
}//dropboxQt
