/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingLinkMetadata.h"

namespace dropboxQt{

namespace sharing{
///LinkMetadata

LinkMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void LinkMetadata::toJson(QJsonObject& js)const{

    if(!m_url.isEmpty())
        js["url"] = QString(m_url);
    m_visibility.toJson(js, "visibility");
    if(m_expires.isValid())
        js["expires"] = m_expires.toString("yyyy-MM-ddThh:mm:ssZ");
}

void LinkMetadata::fromJson(const QJsonObject& js){

    m_url = js["url"].toString();
    m_visibility.fromJson(js["visibility"].toObject());
    m_expires = QDateTime::fromString(js["expires"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString LinkMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LinkMetadata LinkMetadata::EXAMPLE(){
    LinkMetadata rv;
    rv.url = "test1value";
    rv.visibility = sharing::Visibility::EXAMPLE();
    rv.expires = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
