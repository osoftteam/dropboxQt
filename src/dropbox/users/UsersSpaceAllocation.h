/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/users/UsersIndividualSpaceAllocation.h"
#include "dropbox/users/UsersTeamSpaceAllocation.h"

namespace dropboxQt{
namespace users{
    class SpaceAllocation{
        /**
            Space is allocated differently based on the type of account.

            field: individual: The user's space allocation applies only to their
                individual account.
            field: team: The user shares space with other members of their team.
        */
    public:
        enum Tag{

		/*The user's space allocation applies only to their individual account.*/
		SpaceAllocation_INDIVIDUAL,
		/*The user shares space with other members of their team.*/
		SpaceAllocation_TEAM,
		/*None*/
		SpaceAllocation_OTHER
        };

        SpaceAllocation(){}
        SpaceAllocation(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The user's space allocation applies only to their individual account.
        IndividualSpaceAllocation getIndividual()const{DBOX_CHECK_STATE((SpaceAllocation_INDIVIDUAL == m_tag), "expected tag: SpaceAllocation_INDIVIDUAL", m_tag);return m_individual;};

        ///The user shares space with other members of their team.
        TeamSpaceAllocation getTeam()const{DBOX_CHECK_STATE((SpaceAllocation_TEAM == m_tag), "expected tag: SpaceAllocation_TEAM", m_tag);return m_team;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SpaceAllocation EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        IndividualSpaceAllocation m_individual;
        TeamSpaceAllocation m_team;
    };//SpaceAllocation

}//users
}//dropboxQt
