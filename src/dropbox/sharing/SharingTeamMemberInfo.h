/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/users/UsersTeam.h"

namespace dropboxQt{
namespace sharing{
    class TeamMemberInfo{
        /**
            Information about a team member.

            field: team_info: Information about the member's team
            field: display_name: The display name of the user.
            field: member_id: ID of user as a member of a team. This field will
                only be present if the member is in the same team as current
                user.
        */

    public:
        TeamMemberInfo(){};

        TeamMemberInfo(const users::Team& arg){ m_team_info = arg; };

    public:
        ///Information about the member's team
        users::Team teamInfo()const{return m_team_info;};
        const TeamMemberInfo& setTeaminfo(const users::Team& arg){m_team_info=arg; return *this;};

        ///The display name of the user.
        QString displayName()const{return m_display_name;};
        const TeamMemberInfo& setDisplayname(const QString& arg){m_display_name=arg; return *this;};

        ///ID of user as a member of a team. This field will only be present if the member is in the same team as current user.
        QString memberId()const{return m_member_id;};
        const TeamMemberInfo& setMemberid(const QString& arg){m_member_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMemberInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Information about the member's team
        users::Team m_team_info;

        ///The display name of the user.
        QString m_display_name;

        ///ID of user as a member of a team. This field will only be present if the member is in the same team as current user.
        QString m_member_id;

    };//TeamMemberInfo

}//sharing
}//dropboxQt
