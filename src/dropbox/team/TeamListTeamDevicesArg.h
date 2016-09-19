/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class ListTeamDevicesArg{
        /**
            field: cursor: At the first call to the
                :meth:`devices_list_team_devices` the cursor shouldn't be
                passed. Then, if the result of the call includes a cursor, the
                following requests should include the received cursors in order
                to receive the next sub list of team devices
            field: include_web_sessions: Whether to list web sessions of the
                team members
            field: include_desktop_clients: Whether to list desktop clients of
                the team members
            field: include_mobile_clients: Whether to list mobile clients of the
                team members
        */

    public:
        ListTeamDevicesArg():
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        {};

        ListTeamDevicesArg(const QString& arg):
        m_include_web_sessions(false)
        ,m_include_desktop_clients(false)
        ,m_include_mobile_clients(false)
        { m_cursor = arg; };

    public:
        ///At the first call to the :route:`devices/list_team_devices` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of team devices
        QString cursor()const{return m_cursor;};
        const ListTeamDevicesArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

        ///Whether to list web sessions of the team members
        bool includeWebSessions()const{return m_include_web_sessions;};
        const ListTeamDevicesArg& setIncludewebsessions(const bool& arg){m_include_web_sessions=arg; return *this;};

        ///Whether to list desktop clients of the team members
        bool includeDesktopClients()const{return m_include_desktop_clients;};
        const ListTeamDevicesArg& setIncludedesktopclients(const bool& arg){m_include_desktop_clients=arg; return *this;};

        ///Whether to list mobile clients of the team members
        bool includeMobileClients()const{return m_include_mobile_clients;};
        const ListTeamDevicesArg& setIncludemobileclients(const bool& arg){m_include_mobile_clients=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListTeamDevicesArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///At the first call to the :route:`devices/list_team_devices` the cursor shouldn't be passed. Then, if the result of the call includes a cursor, the following requests should include the received cursors in order to receive the next sub list of team devices
        QString m_cursor;

        ///Whether to list web sessions of the team members
        bool m_include_web_sessions;

        ///Whether to list desktop clients of the team members
        bool m_include_desktop_clients;

        ///Whether to list mobile clients of the team members
        bool m_include_mobile_clients;

    };//ListTeamDevicesArg

}//team
}//dropboxQt
