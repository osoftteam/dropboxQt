/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkSettings.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkSettings

SharedLinkSettings::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedLinkSettings::toJson(QJsonObject& js)const{

    m_requested_visibility.toJson(js, "requested_visibility");
    if(!m_link_password.isEmpty())
        js["link_password"] = QString(m_link_password);
    if(m_expires.isValid())
        js["expires"] = m_expires.toString("yyyy-MM-ddThh:mm:ssZ");
}

void SharedLinkSettings::fromJson(const QJsonObject& js){

    m_requested_visibility.fromJson(js["requested_visibility"].toObject());
    m_link_password = js["link_password"].toString();
    m_expires = QDateTime::fromString(js["expires"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString SharedLinkSettings::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkSettings SharedLinkSettings::EXAMPLE(){
    SharedLinkSettings rv;
    rv.requested_visibility = sharing::RequestedVisibility::EXAMPLE();
    rv.link_password = "test2value";
    rv.expires = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
