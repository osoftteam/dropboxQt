/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_policies/TeamPoliciesTeamMemberPolicies.h"

namespace dropboxQt{
namespace team{
    class TeamGetInfoResult{
        /**
            field: name: The name of the team.
            field: team_id: The ID of the team.
            field: num_licensed_users: The number of licenses available to the
                team.
            field: num_provisioned_users: The number of accounts that have been
                invited or are already active members of the team.
        */

    public:
        TeamGetInfoResult(){};

        TeamGetInfoResult(const QString& arg){ m_name = arg; };

    public:
        ///The name of the team.
        QString name()const{return m_name;};

        ///The ID of the team.
        QString teamId()const{return m_team_id;};

        ///The number of licenses available to the team.
        int numLicensedUsers()const{return m_num_licensed_users;};

        ///The number of accounts that have been invited or are already active members of the team.
        int numProvisionedUsers()const{return m_num_provisioned_users;};

        ///None
        team_policies::TeamMemberPolicies policies()const{return m_policies;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamGetInfoResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The name of the team.
        QString m_name;

        ///The ID of the team.
        QString m_team_id;

        ///The number of licenses available to the team.
        int m_num_licensed_users;

        ///The number of accounts that have been invited or are already active members of the team.
        int m_num_provisioned_users;

        ///None
        team_policies::TeamMemberPolicies m_policies;

    };//TeamGetInfoResult

}//team
}//dropboxQt
