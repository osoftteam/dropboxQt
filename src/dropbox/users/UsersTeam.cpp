/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersTeam.h"

namespace dropboxQt{

namespace users{
///Team

Team::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Team::toJson(QJsonObject& js)const{

    if(!m_id.isEmpty())
        js["id"] = m_id;
    if(!m_name.isEmpty())
        js["name"] = m_name;
}

void Team::fromJson(const QJsonObject& js){

    m_id = js["id"].toString();
    m_name = js["name"].toString();
}

QString Team::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Team Team::EXAMPLE(){
    Team rv;
    rv.id = "test1value";
    rv.name = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
