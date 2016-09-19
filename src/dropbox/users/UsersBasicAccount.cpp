/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersBasicAccount.h"

namespace dropboxQt{

namespace users{
///BasicAccount

BasicAccount::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void BasicAccount::toJson(QJsonObject& js)const{

    Account::toJson(js);
    js["is_teammate"] = m_is_teammate;
    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = m_team_member_id;
}

void BasicAccount::fromJson(const QJsonObject& js){

    Account::fromJson(js);
    m_is_teammate = js["is_teammate"].toVariant().toBool();
    m_team_member_id = js["team_member_id"].toString();
}

QString BasicAccount::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
BasicAccount BasicAccount::EXAMPLE(){
    BasicAccount rv;
    rv.team_member_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
