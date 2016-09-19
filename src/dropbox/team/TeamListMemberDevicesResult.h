/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamActiveWebSession.h"
#include "dropbox/team/TeamDesktopClientSession.h"
#include "dropbox/team/TeamMobileClientSession.h"

namespace dropboxQt{
namespace team{
    class ListMemberDevicesResult{
        /**
            field: active_web_sessions: List of web sessions made by this team
                member
            field: desktop_client_sessions: List of desktop clients used by this
                team member
            field: mobile_client_sessions: List of mobile client used by this
                team member
        */

    public:
        ListMemberDevicesResult(){};

        ListMemberDevicesResult(const std::list <ActiveWebSession>&& arg){ m_active_web_sessions = arg; };

    public:
        ///List of web sessions made by this team member
        const std::list <ActiveWebSession>& activeWebSessions()const{return m_active_web_sessions;};

        ///List of desktop clients used by this team member
        const std::list <DesktopClientSession>& desktopClientSessions()const{return m_desktop_client_sessions;};

        ///List of mobile client used by this team member
        const std::list <MobileClientSession>& mobileClientSessions()const{return m_mobile_client_sessions;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMemberDevicesResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of web sessions made by this team member
        std::list <ActiveWebSession> m_active_web_sessions;

        ///List of desktop clients used by this team member
        std::list <DesktopClientSession> m_desktop_client_sessions;

        ///List of mobile client used by this team member
        std::list <MobileClientSession> m_mobile_client_sessions;

    };//ListMemberDevicesResult

}//team
}//dropboxQt
