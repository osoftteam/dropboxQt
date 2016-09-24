/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class MembersUnsuspendArg{
        /**
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.

            field: user: Identity of user to unsuspend.
        */

    public:
        MembersUnsuspendArg(){};

        MembersUnsuspendArg(const UserSelectorArg& arg){ m_user = arg; };

    public:
        ///Identity of user to unsuspend.
        UserSelectorArg user()const{return m_user;};
        MembersUnsuspendArg& setUser(const UserSelectorArg& arg){m_user=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersUnsuspendArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Identity of user to unsuspend.
        UserSelectorArg m_user;

    };//MembersUnsuspendArg

}//team
}//dropboxQt
