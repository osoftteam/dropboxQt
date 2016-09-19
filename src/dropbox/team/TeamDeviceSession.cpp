/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDeviceSession.h"

namespace dropboxQt{

namespace team{
///DeviceSession

DeviceSession::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DeviceSession::toJson(QJsonObject& js)const{

    if(!m_session_id.isEmpty())
        js["session_id"] = QString(m_session_id);
    if(!m_ip_address.isEmpty())
        js["ip_address"] = QString(m_ip_address);
    if(!m_country.isEmpty())
        js["country"] = QString(m_country);
    if(m_created.isValid())
        js["created"] = m_created.toString("yyyy-MM-ddThh:mm:ssZ");
    if(m_updated.isValid())
        js["updated"] = m_updated.toString("yyyy-MM-ddThh:mm:ssZ");
}

void DeviceSession::fromJson(const QJsonObject& js){

    m_session_id = js["session_id"].toString();
    m_ip_address = js["ip_address"].toString();
    m_country = js["country"].toString();
    m_created = QDateTime::fromString(js["created"].toString(), "yyyy-MM-ddThh:mm:ssZ");
    m_updated = QDateTime::fromString(js["updated"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString DeviceSession::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DeviceSession DeviceSession::EXAMPLE(){
    DeviceSession rv;
    rv.session_id = "test1value";
    rv.ip_address = "test2value";
    rv.country = "test3value";
    rv.created = QDateTime::currentDateTime();
    rv.updated = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
