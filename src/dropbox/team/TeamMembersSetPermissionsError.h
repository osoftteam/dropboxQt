/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorError.h"

namespace dropboxQt{
namespace team{
    class MembersSetPermissionsError{
        /**
            field: last_admin: Cannot remove the admin setting of the last
                admin.
            field: user_not_in_team: The user is not a member of the team.
            field: cannot_set_permissions: Cannot remove/grant permissions.
            field: team_license_limit: Team is full. The organization has no
                available licenses.
        */
    public:
        enum Tag{

		/*No matching user found. The provided team_member_id, email, or external_id does not exist on this team.*/
		UserSelectorError_USER_NOT_FOUND,
		/*Cannot remove the admin setting of the last admin.*/
		MembersSetPermissionsError_LAST_ADMIN,
		/*The user is not a member of the team.*/
		MembersSetPermissionsError_USER_NOT_IN_TEAM,
		/*Cannot remove/grant permissions.*/
		MembersSetPermissionsError_CANNOT_SET_PERMISSIONS,
		/*Team is full. The organization has no available licenses.*/
		MembersSetPermissionsError_TEAM_LICENSE_LIMIT,
		/*None*/
		MembersSetPermissionsError_OTHER
        };

        MembersSetPermissionsError(){}
        MembersSetPermissionsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSetPermissionsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MembersSetPermissionsError

}//team
}//dropboxQt
