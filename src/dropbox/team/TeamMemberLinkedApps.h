/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamApiApp.h"

namespace dropboxQt{
namespace team{
    class MemberLinkedApps{
        /**
            Information on linked applications of a team member.

            field: team_member_id: The member unique Id
            field: linked_api_apps: List of third party applications linked by
                this team member
        */

    public:
        MemberLinkedApps(){};

        MemberLinkedApps(const QString& arg){ m_team_member_id = arg; };

    public:
        ///The member unique Id
        QString teamMemberId()const{return m_team_member_id;};
        MemberLinkedApps& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

        ///List of third party applications linked by this team member
        const std::list <ApiApp>& linkedApiApps()const{return m_linked_api_apps;};
        MemberLinkedApps& setLinkedapiapps(const std::list <ApiApp>&& arg){m_linked_api_apps=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberLinkedApps EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The member unique Id
        QString m_team_member_id;

        ///List of third party applications linked by this team member
        std::list <ApiApp> m_linked_api_apps;

    };//MemberLinkedApps

}//team
}//dropboxQt
