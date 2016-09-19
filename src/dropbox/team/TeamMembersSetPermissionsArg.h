/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamAdminTier.h"
#include "dropbox/team/TeamAdminTier.h"

namespace dropboxQt{
namespace team{
    class MembersSetPermissionsArg{
        /**
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account.

            field: user: Identity of user whose role will be set.
            field: new_role: The new role of the member.
        */

    public:
        MembersSetPermissionsArg(){};

        MembersSetPermissionsArg(const UserSelectorArg& arg){ m_user = arg; };

    public:
        ///Identity of user whose role will be set.
        UserSelectorArg user()const{return m_user;};
        const MembersSetPermissionsArg& setUser(const UserSelectorArg& arg){m_user=arg; return *this;};

        ///The new role of the member.
        AdminTier newRole()const{return m_new_role;};
        const MembersSetPermissionsArg& setNewrole(const AdminTier& arg){m_new_role=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSetPermissionsArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Identity of user whose role will be set.
        UserSelectorArg m_user;

        ///The new role of the member.
        AdminTier m_new_role;

    };//MembersSetPermissionsArg

}//team
}//dropboxQt
