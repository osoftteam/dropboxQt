/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/team/TeamStorageBucket.h"
using namespace dropboxQt;

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


std::unique_ptr<StorageBucket>  StorageBucket::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<StorageBucket>  StorageBucket::factory::create(const QJsonObject& js)
{
    std::unique_ptr<StorageBucket> rv;
    rv = std::unique_ptr<StorageBucket>(new StorageBucket);
    rv->fromJson(js);
    return rv;
}

}//team
}//dropboxQt
