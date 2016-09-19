/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMembersDeactivateError.h"

namespace dropboxQt{
namespace team{
    class MembersSuspendError{
        /**
            field: suspend_inactive_user: The user is not active, so it cannot
                be suspended.
            field: suspend_last_admin: The user is the last admin of the team,
                so it cannot be suspended.
            field: team_license_limit: Team is full. The organization has no
                available licenses.
        */
    public:
        enum Tag{

		/*No matching user found. The provided team_member_id, email, or external_id does not exist on this team.*/
		UserSelectorError_USER_NOT_FOUND,
		/*The user is not a member of the team.*/
		MembersDeactivateError_USER_NOT_IN_TEAM,
		/*None*/
		MembersDeactivateError_OTHER,
		/*The user is not active, so it cannot be suspended.*/
		MembersSuspendError_SUSPEND_INACTIVE_USER,
		/*The user is the last admin of the team, so it cannot be suspended.*/
		MembersSuspendError_SUSPEND_LAST_ADMIN,
		/*Team is full. The organization has no available licenses.*/
		MembersSuspendError_TEAM_LICENSE_LIMIT
        };

        MembersSuspendError(){}
        MembersSuspendError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSuspendError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MembersSuspendError

}//team
}//dropboxQt
