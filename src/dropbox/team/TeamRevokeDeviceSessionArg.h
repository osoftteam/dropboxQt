/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamDeviceSessionArg.h"
#include "dropbox/team/TeamRevokeDesktopClientArg.h"
#include "dropbox/team/TeamDeviceSessionArg.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionArg{
        /**
            field: web_session: End an active session
            field: desktop_client: Unlink a linked desktop device
            field: mobile_client: Unlink a linked mobile device
        */
    public:
        enum Tag{

		/*End an active session*/
		RevokeDeviceSessionArg_WEB_SESSION,
		/*Unlink a linked desktop device*/
		RevokeDeviceSessionArg_DESKTOP_CLIENT,
		/*Unlink a linked mobile device*/
		RevokeDeviceSessionArg_MOBILE_CLIENT
        };

        RevokeDeviceSessionArg(){}
        RevokeDeviceSessionArg(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///End an active session
        DeviceSessionArg getWebSession()const{DBOX_CHECK_STATE((RevokeDeviceSessionArg_WEB_SESSION == m_tag), "expected tag: RevokeDeviceSessionArg_WEB_SESSION", m_tag);return m_web_session;};

        ///Unlink a linked desktop device
        RevokeDesktopClientArg getDesktopClient()const{DBOX_CHECK_STATE((RevokeDeviceSessionArg_DESKTOP_CLIENT == m_tag), "expected tag: RevokeDeviceSessionArg_DESKTOP_CLIENT", m_tag);return m_desktop_client;};

        ///Unlink a linked mobile device
        DeviceSessionArg getMobileClient()const{DBOX_CHECK_STATE((RevokeDeviceSessionArg_MOBILE_CLIENT == m_tag), "expected tag: RevokeDeviceSessionArg_MOBILE_CLIENT", m_tag);return m_mobile_client;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        DeviceSessionArg m_web_session;
        RevokeDesktopClientArg m_desktop_client;
        DeviceSessionArg m_mobile_client;
    };//RevokeDeviceSessionArg

}//team
}//dropboxQt
