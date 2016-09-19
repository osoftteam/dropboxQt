/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamApiApp.h"

namespace dropboxQt{
namespace team{
    class ListMemberAppsResult{
        /**
            field: linked_api_apps: List of third party applications linked by
                this team member
        */

    public:
        ListMemberAppsResult(){};

        ListMemberAppsResult(const std::list <ApiApp>&& arg){ m_linked_api_apps = arg; };

    public:
        ///List of third party applications linked by this team member
        const std::list <ApiApp>& linkedApiApps()const{return m_linked_api_apps;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberAppsResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of third party applications linked by this team member
        std::list <ApiApp> m_linked_api_apps;

    };//ListMemberAppsResult

}//team
}//dropboxQt
