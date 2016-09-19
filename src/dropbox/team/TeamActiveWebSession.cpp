/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamActiveWebSession.h"

namespace dropboxQt{

namespace team{
///ActiveWebSession

ActiveWebSession::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ActiveWebSession::toJson(QJsonObject& js)const{

    DeviceSession::toJson(js);
    if(!m_user_agent.isEmpty())
        js["user_agent"] = m_user_agent;
    if(!m_os.isEmpty())
        js["os"] = m_os;
    if(!m_browser.isEmpty())
        js["browser"] = m_browser;
}

void ActiveWebSession::fromJson(const QJsonObject& js){

    DeviceSession::fromJson(js);
    m_user_agent = js["user_agent"].toString();
    m_os = js["os"].toString();
    m_browser = js["browser"].toString();
}

QString ActiveWebSession::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ActiveWebSession ActiveWebSession::EXAMPLE(){
    ActiveWebSession rv;
    rv.user_agent = "test1value";
    rv.os = "test2value";
    rv.browser = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
