/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersSetProfileArg.h"

namespace dropboxQt{

namespace team{
///MembersSetProfileArg

MembersSetProfileArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersSetProfileArg::toJson(QJsonObject& js)const{

    m_user.toJson(js, "user");
    if(!m_new_email.isEmpty())
        js["new_email"] = QString(m_new_email);
    if(!m_new_external_id.isEmpty())
        js["new_external_id"] = QString(m_new_external_id);
    if(!m_new_given_name.isEmpty())
        js["new_given_name"] = QString(m_new_given_name);
    if(!m_new_surname.isEmpty())
        js["new_surname"] = QString(m_new_surname);
}

void MembersSetProfileArg::fromJson(const QJsonObject& js){

    m_user.fromJson(js["user"].toObject());
    m_new_email = js["new_email"].toString();
    m_new_external_id = js["new_external_id"].toString();
    m_new_given_name = js["new_given_name"].toString();
    m_new_surname = js["new_surname"].toString();
}

QString MembersSetProfileArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersSetProfileArg MembersSetProfileArg::EXAMPLE(){
    MembersSetProfileArg rv;
    rv.user = team::UserSelectorArg::EXAMPLE();
    rv.new_email = "test2value";
    rv.new_external_id = "test3value";
    rv.new_given_name = "test4value";
    rv.new_surname = "test5value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
