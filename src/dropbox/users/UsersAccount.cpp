/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersAccount.h"

namespace dropboxQt{

namespace users{
///Account

Account::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Account::toJson(QJsonObject& js)const{

    if(!m_account_id.isEmpty())
        js["account_id"] = m_account_id;
    js["name"] = (QJsonObject)m_name;
    if(!m_email.isEmpty())
        js["email"] = m_email;
    js["email_verified"] = m_email_verified;
    if(!m_profile_photo_url.isEmpty())
        js["profile_photo_url"] = m_profile_photo_url;
    js["disabled"] = m_disabled;
}

void Account::fromJson(const QJsonObject& js){

    m_account_id = js["account_id"].toString();
    m_name.fromJson(js);
    m_email = js["email"].toString();
    m_email_verified = js["email_verified"].toVariant().toBool();
    m_profile_photo_url = js["profile_photo_url"].toString();
    m_disabled = js["disabled"].toVariant().toBool();
}

QString Account::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Account Account::EXAMPLE(){
    Account rv;
    rv.account_id = "test1value";
    rv.name = users::Name::EXAMPLE();
    rv.email = "test3value";
    rv.profile_photo_url = "test5value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
