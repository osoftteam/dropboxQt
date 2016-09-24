/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingAclUpdatePolicy.h"
#include "dropbox/sharing/SharingAclUpdatePolicy.h"
#include "dropbox/sharing/SharingSharedLinkPolicy.h"
#include "dropbox/sharing/SharingSharedLinkPolicy.h"

namespace dropboxQt{
namespace sharing{
    class UpdateFolderPolicyArg{
        /**
            If any of the policy's are unset, then they retain their current
            setting.

            field: shared_folder_id: The ID for the shared folder.
            field: member_policy: Who can be a member of this shared folder.
                Only applicable if the current user is on a team.
            field: acl_update_policy: Who can add and remove members of this
                shared folder.
            field: shared_link_policy: The policy to apply to shared links
                created for content inside this shared folder. The current user
                must be on a team to set this policy to
                ``SharedLinkPolicy.members``.
        */

    public:
        UpdateFolderPolicyArg(){};

        UpdateFolderPolicyArg(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        UpdateFolderPolicyArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///Who can be a member of this shared folder. Only applicable if the current user is on a team.
        MemberPolicy memberPolicy()const{return m_member_policy;};
        UpdateFolderPolicyArg& setMemberpolicy(const MemberPolicy& arg){m_member_policy=arg; return *this;};

        ///Who can add and remove members of this shared folder.
        AclUpdatePolicy aclUpdatePolicy()const{return m_acl_update_policy;};
        UpdateFolderPolicyArg& setAclupdatepolicy(const AclUpdatePolicy& arg){m_acl_update_policy=arg; return *this;};

        ///The policy to apply to shared links created for content inside this shared folder. The current user must be on a team to set this policy to :field:`SharedLinkPolicy.members`.
        SharedLinkPolicy sharedLinkPolicy()const{return m_shared_link_policy;};
        UpdateFolderPolicyArg& setSharedlinkpolicy(const SharedLinkPolicy& arg){m_shared_link_policy=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UpdateFolderPolicyArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///Who can be a member of this shared folder. Only applicable if the current user is on a team.
        MemberPolicy m_member_policy;

        ///Who can add and remove members of this shared folder.
        AclUpdatePolicy m_acl_update_policy;

        ///The policy to apply to shared links created for content inside this shared folder. The current user must be on a team to set this policy to :field:`SharedLinkPolicy.members`.
        SharedLinkPolicy m_shared_link_policy;

    };//UpdateFolderPolicyArg

}//sharing
}//dropboxQt
