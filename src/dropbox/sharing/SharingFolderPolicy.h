/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingMemberPolicy.h"
#include "dropbox/sharing/SharingAclUpdatePolicy.h"
#include "dropbox/sharing/SharingAclUpdatePolicy.h"
#include "dropbox/sharing/SharingSharedLinkPolicy.h"
#include "dropbox/sharing/SharingSharedLinkPolicy.h"

namespace dropboxQt{
namespace sharing{
    class FolderPolicy{
        /**
            A set of policies governing membership and privileges for a shared
            folder.

            field: member_policy: Who can be a member of this shared folder, as
                set on the folder itself. The effective policy may differ from
                this value if the team-wide policy is more restrictive. Present
                only if the folder is owned by a team.
            field: resolved_member_policy: Who can be a member of this shared
                folder, taking into account both the folder and the team-wide
                policy. This value may differ from that of member_policy if the
                team-wide policy is more restrictive than the folder policy.
                Present only if the folder is owned by a team.
            field: acl_update_policy: Who can add and remove members from this
                shared folder.
            field: shared_link_policy: Who links can be shared with.
        */

    public:
        FolderPolicy(){};

        FolderPolicy(const MemberPolicy& arg){ m_member_policy = arg; };

    public:
        ///Who can be a member of this shared folder, as set on the folder itself. The effective policy may differ from this value if the team-wide policy is more restrictive. Present only if the folder is owned by a team.
        MemberPolicy memberPolicy()const{return m_member_policy;};
        const FolderPolicy& setMemberpolicy(const MemberPolicy& arg){m_member_policy=arg; return *this;};

        ///Who can be a member of this shared folder, taking into account both the folder and the team-wide policy. This value may differ from that of member_policy if the team-wide policy is more restrictive than the folder policy. Present only if the folder is owned by a team.
        MemberPolicy resolvedMemberPolicy()const{return m_resolved_member_policy;};
        const FolderPolicy& setResolvedmemberpolicy(const MemberPolicy& arg){m_resolved_member_policy=arg; return *this;};

        ///Who can add and remove members from this shared folder.
        AclUpdatePolicy aclUpdatePolicy()const{return m_acl_update_policy;};
        const FolderPolicy& setAclupdatepolicy(const AclUpdatePolicy& arg){m_acl_update_policy=arg; return *this;};

        ///Who links can be shared with.
        SharedLinkPolicy sharedLinkPolicy()const{return m_shared_link_policy;};
        const FolderPolicy& setSharedlinkpolicy(const SharedLinkPolicy& arg){m_shared_link_policy=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FolderPolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Who can be a member of this shared folder, as set on the folder itself. The effective policy may differ from this value if the team-wide policy is more restrictive. Present only if the folder is owned by a team.
        MemberPolicy m_member_policy;

        ///Who can be a member of this shared folder, taking into account both the folder and the team-wide policy. This value may differ from that of member_policy if the team-wide policy is more restrictive than the folder policy. Present only if the folder is owned by a team.
        MemberPolicy m_resolved_member_policy;

        ///Who can add and remove members from this shared folder.
        AclUpdatePolicy m_acl_update_policy;

        ///Who links can be shared with.
        SharedLinkPolicy m_shared_link_policy;

    };//FolderPolicy

}//sharing
}//dropboxQt
