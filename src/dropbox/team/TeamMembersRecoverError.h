/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorError.h"

namespace dropboxQt{
namespace team{
    class MembersRecoverError{
        /**
            field: user_unrecoverable: The user is not recoverable.
            field: user_not_in_team: The user is not a member of the team.
        */
    public:
        enum Tag{

		/*No matching user found. The provided team_member_id, email, or external_id does not exist on this team.*/
		UserSelectorError_USER_NOT_FOUND,
		/*The user is not recoverable.*/
		MembersRecoverError_USER_UNRECOVERABLE,
		/*The user is not a member of the team.*/
		MembersRecoverError_USER_NOT_IN_TEAM,
		/*None*/
		MembersRecoverError_OTHER
        };

        MembersRecoverError(){}
        MembersRecoverError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersRecoverError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MembersRecoverError

}//team
}//dropboxQt
