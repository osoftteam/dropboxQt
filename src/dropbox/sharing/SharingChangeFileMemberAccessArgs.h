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
    class ChangeFileMemberAccessArgs{
        /**
            Arguments for :meth:`change_file_member_access`.

            field: file: File for which we are changing a member's access.
            field: member: The member whose access we are changing.
            field: access_level: The new access level for the member.
        */

    public:
        ChangeFileMemberAccessArgs(){};

        ChangeFileMemberAccessArgs(const QString& arg){ m_file = arg; };

    public:
        ///File for which we are changing a member's access.
        QString file()const{return m_file;};
        ChangeFileMemberAccessArgs& setFile(const QString& arg){m_file=arg; return *this;};

        ///The member whose access we are changing.
        MemberSelector member()const{return m_member;};
        ChangeFileMemberAccessArgs& setMember(const MemberSelector& arg){m_member=arg; return *this;};

        ///The new access level for the member.
        AccessLevel accessLevel()const{return m_access_level;};
        ChangeFileMemberAccessArgs& setAccesslevel(const AccessLevel& arg){m_access_level=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ChangeFileMemberAccessArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///File for which we are changing a member's access.
        QString m_file;

        ///The member whose access we are changing.
        MemberSelector m_member;

        ///The new access level for the member.
        AccessLevel m_access_level;

    };//ChangeFileMemberAccessArgs

}//sharing
}//dropboxQt
