/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRemovedStatus.h"

namespace dropboxQt{
namespace team{
    class TeamMemberStatus{
        /**
            The user's status as a member of a specific team.

            field: active: User has successfully joined the team.
            field: invited: User has been invited to a team, but has not joined
                the team yet.
            field: suspended: User is no longer a member of the team, but the
                account can be un-suspended, re-establishing the user as a team
                member.
            field: removed: User is no longer a member of the team. Removed
                users are only listed when include_removed is true in
                members/list.
        */
    public:
        enum Tag{

		/*User has successfully joined the team.*/
		TeamMemberStatus_ACTIVE,
		/*User has been invited to a team, but has not joined the team yet.*/
		TeamMemberStatus_INVITED,
		/*User is no longer a member of the team, but the account can be un-suspended, re-establishing the user as a team member.*/
		TeamMemberStatus_SUSPENDED,
		/*User is no longer a member of the team. Removed users are only listed when include_removed is true in members/list.*/
		TeamMemberStatus_REMOVED
        };

        TeamMemberStatus(){}
        TeamMemberStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///User is no longer a member of the team. Removed users are only listed when include_removed is true in members/list.
        RemovedStatus getRemoved()const{DBOX_CHECK_STATE((TeamMemberStatus_REMOVED == m_tag), "expected tag: TeamMemberStatus_REMOVED", m_tag);return m_removed;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<TeamMemberStatus>  create(const QByteArray& data);
            static std::unique_ptr<TeamMemberStatus>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMemberStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        RemovedStatus m_removed;
    };//TeamMemberStatus

}//team
}//dropboxQt
