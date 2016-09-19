/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersFullAccount.h"

namespace dropboxQt{

namespace users{
///FullAccount

FullAccount::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FullAccount::toJson(QJsonObject& js)const{

    Account::toJson(js);
    if(!m_country.isEmpty())
        js["country"] = QString(m_country);
    if(!m_locale.isEmpty())
        js["locale"] = QString(m_locale);
    if(!m_referral_link.isEmpty())
        js["referral_link"] = QString(m_referral_link);
    js["team"] = (QJsonObject)m_team;
    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = QString(m_team_member_id);
    js["is_paired"] = m_is_paired;
    m_account_type.toJson(js, "account_type");
}

void FullAccount::fromJson(const QJsonObject& js){

    Account::fromJson(js);
    m_country = js["country"].toString();
    m_locale = js["locale"].toString();
    m_referral_link = js["referral_link"].toString();
    m_team.fromJson(js);
    m_team_member_id = js["team_member_id"].toString();
    m_is_paired = js["is_paired"].toVariant().toBool();
    m_account_type.fromJson(js["account_type"].toObject());
}

QString FullAccount::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FullAccount FullAccount::EXAMPLE(){
    FullAccount rv;
    rv.country = "test1value";
    rv.locale = "test2value";
    rv.referral_link = "test3value";
    rv.team = users::FullTeam::EXAMPLE();
    rv.team_member_id = "test5value";
    rv.account_type = users::AccountType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
