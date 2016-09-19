/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamStorageBucket.h"

namespace dropboxQt{

namespace team{
///StorageBucket

StorageBucket::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void StorageBucket::toJson(QJsonObject& js)const{

    if(!m_bucket.isEmpty())
        js["bucket"] = QString(m_bucket);
    js["users"] = m_users;
}

void StorageBucket::fromJson(const QJsonObject& js){

    m_bucket = js["bucket"].toString();
    m_users = js["users"].toVariant().toInt();
}

QString StorageBucket::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
StorageBucket StorageBucket::EXAMPLE(){
    StorageBucket rv;
    rv.bucket = "test1value";
    rv.users = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
