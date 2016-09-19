/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingMemberPermission.h"

namespace dropboxQt{
namespace sharing{
    class MembershipInfo{
        /**
            The information about a member of the shared content.

            field: access_type: The access type for this member.
            field: permissions: The permissions that requesting user has on this
                member. The set of permissions corresponds to the MemberActions
                in the request.
            field: initials: Suggested name initials for a member.
            field: is_inherited: True if the member has access from a parent
                folder.
        */

    public:
        MembershipInfo():
        m_is_inherited(false)
        {};

        MembershipInfo(const AccessLevel& arg):
        m_is_inherited(false)
        { m_access_type = arg; };

    public:
        ///The access type for this member.
        AccessLevel accessType()const{return m_access_type;};
        const MembershipInfo& setAccesstype(const AccessLevel& arg){m_access_type=arg; return *this;};

        ///The permissions that requesting user has on this member. The set of permissions corresponds to the MemberActions in the request.
        const std::list <MemberPermission>& permissions()const{return m_permissions;};
        const MembershipInfo& setPermissions(const std::list <MemberPermission>&& arg){m_permissions=arg; return *this;};

        ///Suggested name initials for a member.
        QString initials()const{return m_initials;};
        const MembershipInfo& setInitials(const QString& arg){m_initials=arg; return *this;};

        ///True if the member has access from a parent folder.
        bool isInherited()const{return m_is_inherited;};
        const MembershipInfo& setIsinherited(const bool& arg){m_is_inherited=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembershipInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The access type for this member.
        AccessLevel m_access_type;

        ///The permissions that requesting user has on this member. The set of permissions corresponds to the MemberActions in the request.
        std::list <MemberPermission> m_permissions;

        ///Suggested name initials for a member.
        QString m_initials;

        ///True if the member has access from a parent folder.
        bool m_is_inherited;

    };//MembershipInfo

}//sharing
}//dropboxQt
