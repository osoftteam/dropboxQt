/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberProfile.h"

namespace dropboxQt{
namespace team{
    class TeamMemberProfile : public MemberProfile{
        /**
            Profile of a user as a member of a team.

            field: groups: List of group IDs of groups that the user belongs to.
        */

    public:
        TeamMemberProfile(){};

        TeamMemberProfile(const std::list <QString>&& arg){ m_groups = arg; };

    public:
        ///List of group IDs of groups that the user belongs to.
        const std::list <QString>& groups()const{return m_groups;};
        const TeamMemberProfile& setGroups(const std::list <QString>&& arg){m_groups=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMemberProfile EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of group IDs of groups that the user belongs to.
        std::list <QString> m_groups;

    };//TeamMemberProfile

}//team
}//dropboxQt
