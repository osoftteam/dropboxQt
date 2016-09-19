/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class AdminTier{
        /**
            Describes which team-related admin permissions a user has.

            field: team_admin: User is an administrator of the team - has all
                permissions.
            field: user_management_admin: User can do most user provisioning,
                de-provisioning and management.
            field: support_admin: User can do a limited set of common support
                tasks for existing users.
            field: member_only: User is not an admin of the team.
        */
    public:
        enum Tag{

		/*User is an administrator of the team - has all permissions.*/
		AdminTier_TEAM_ADMIN,
		/*User can do most user provisioning, de-provisioning and management.*/
		AdminTier_USER_MANAGEMENT_ADMIN,
		/*User can do a limited set of common support tasks for existing users.*/
		AdminTier_SUPPORT_ADMIN,
		/*User is not an admin of the team.*/
		AdminTier_MEMBER_ONLY
        };

        AdminTier(){}
        AdminTier(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AdminTier EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//AdminTier

}//team
}//dropboxQt
