/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionArg.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionArg

RevokeDeviceSessionArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeDeviceSessionArg::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RevokeDeviceSessionArg_WEB_SESSION:{
            if(!name.isEmpty())
                js[name] = "web_session";
            js["web_session"] = (QJsonObject)m_web_session;
        }break;
        case RevokeDeviceSessionArg_DESKTOP_CLIENT:{
            if(!name.isEmpty())
                js[name] = "desktop_client";
            js["desktop_client"] = (QJsonObject)m_desktop_client;
        }break;
        case RevokeDeviceSessionArg_MOBILE_CLIENT:{
            if(!name.isEmpty())
                js[name] = "mobile_client";
            js["mobile_client"] = (QJsonObject)m_mobile_client;
        }break;
    }//switch
}

void RevokeDeviceSessionArg::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("web_session") == 0){
        m_tag = RevokeDeviceSessionArg_WEB_SESSION;
    }
    if(s.compare("desktop_client") == 0){
        m_tag = RevokeDeviceSessionArg_DESKTOP_CLIENT;
    }
    if(s.compare("mobile_client") == 0){
        m_tag = RevokeDeviceSessionArg_MOBILE_CLIENT;
    }
}

QString RevokeDeviceSessionArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeDeviceSessionArg");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionArg RevokeDeviceSessionArg::EXAMPLE(){
    RevokeDeviceSessionArg rv;
    rv.web_session = team::DeviceSessionArg::EXAMPLE();
    rv.desktop_client = team::RevokeDesktopClientArg::EXAMPLE();
    rv.mobile_client = team::DeviceSessionArg::EXAMPLE();
    rv.m_tag = RevokeDeviceSessionArg_WEB_SESSION;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
