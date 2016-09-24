/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/users/UsersTeam.h"
#include "dropbox/team_policies/TeamPoliciesTeamSharingPolicies.h"

namespace dropboxQt{
namespace users{
    class FullTeam : public Team{
        /**
            Detailed information about a team.

            field: sharing_policies: Team policies governing sharing.
        */

    public:
        FullTeam(){};

        FullTeam(const team_policies::TeamSharingPolicies& arg){ m_sharing_policies = arg; };

    public:
        ///Team policies governing sharing.
        team_policies::TeamSharingPolicies sharingPolicies()const{return m_sharing_policies;};
        FullTeam& setSharingpolicies(const team_policies::TeamSharingPolicies& arg){m_sharing_policies=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FullTeam EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Team policies governing sharing.
        team_policies::TeamSharingPolicies m_sharing_policies;

    };//FullTeam

}//users
}//dropboxQt
