/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class TeamMembershipType{
        /**
            field: full: User uses a license and has full access to team
                resources like the shared quota.
            field: limited: User does not have access to the shared quota and
                team admins have restricted administrative control.
        */
    public:
        enum Tag{

		/*User uses a license and has full access to team resources like the shared quota.*/
		TeamMembershipType_FULL,
		/*User does not have access to the shared quota and team admins have restricted administrative control.*/
		TeamMembershipType_LIMITED
        };

        TeamMembershipType(){}
        TeamMembershipType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMembershipType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//TeamMembershipType

}//team
}//dropboxQt
