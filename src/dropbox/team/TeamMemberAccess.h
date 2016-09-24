/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamGroupAccessType.h"
#include "dropbox/team/TeamGroupAccessType.h"

namespace dropboxQt{
namespace team{
    class MemberAccess{
        /**
            Specify access type a member should have when joined to a group.

            field: user: Identity of a user.
            field: access_type: Access type.
        */

    public:
        MemberAccess(){};

        MemberAccess(const UserSelectorArg& arg){ m_user = arg; };

    public:
        ///Identity of a user.
        UserSelectorArg user()const{return m_user;};
        MemberAccess& setUser(const UserSelectorArg& arg){m_user=arg; return *this;};

        ///Access type.
        GroupAccessType accessType()const{return m_access_type;};
        MemberAccess& setAccesstype(const GroupAccessType& arg){m_access_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberAccess EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Identity of a user.
        UserSelectorArg m_user;

        ///Access type.
        GroupAccessType m_access_type;

    };//MemberAccess

}//team
}//dropboxQt
