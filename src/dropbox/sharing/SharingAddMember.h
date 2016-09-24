/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingAccessLevel.h"

namespace dropboxQt{
namespace sharing{
    class AddMember{
        /**
            The member and type of access the member should have when added to a
            shared folder.

            field: member: The member to add to the shared folder.
            field: access_level: The access level to grant ``member`` to the
                shared folder.  ``AccessLevel.owner`` is disallowed.
        */

    public:
        AddMember():
        m_access_level(AccessLevel::AccessLevel_VIEWER)
        {};

        AddMember(const MemberSelector& arg):
        m_access_level(AccessLevel::AccessLevel_VIEWER)
        { m_member = arg; };

    public:
        ///The member to add to the shared folder.
        MemberSelector member()const{return m_member;};
        AddMember& setMember(const MemberSelector& arg){m_member=arg; return *this;};

        ///The access level to grant :field:`member` to the shared folder.  :field:`AccessLevel.owner` is disallowed.
        AccessLevel accessLevel()const{return m_access_level;};
        AddMember& setAccesslevel(const AccessLevel& arg){m_access_level=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddMember EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The member to add to the shared folder.
        MemberSelector m_member;

        ///The access level to grant :field:`member` to the shared folder.  :field:`AccessLevel.owner` is disallowed.
        AccessLevel m_access_level;

    };//AddMember

}//sharing
}//dropboxQt
