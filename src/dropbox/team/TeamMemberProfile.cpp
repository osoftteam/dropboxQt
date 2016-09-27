/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberProfile.h"

namespace dropboxQt{

namespace team{
///MemberProfile

MemberProfile::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MemberProfile::toJson(QJsonObject& js)const{

    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = QString(m_team_member_id);
    if(!m_external_id.isEmpty())
        js["external_id"] = QString(m_external_id);
    if(!m_account_id.isEmpty())
        js["account_id"] = QString(m_account_id);
    if(!m_email.isEmpty())
        js["email"] = QString(m_email);
    js["email_verified"] = m_email_verified;
    m_status.toJson(js, "status");
    js["name"] = (QJsonObject)m_name;
    m_membership_type.toJson(js, "membership_type");
}

void MemberProfile::fromJson(const QJsonObject& js){

    m_team_member_id = js["team_member_id"].toString();
    m_external_id = js["external_id"].toString();
    m_account_id = js["account_id"].toString();
    m_email = js["email"].toString();
    m_email_verified = js["email_verified"].toVariant().toBool();
    m_status.fromJson(js["status"].toObject());
    m_name.fromJson(js);
    m_membership_type.fromJson(js["membership_type"].toObject());
}

QString MemberProfile::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<MemberProfile>  MemberProfile::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<MemberProfile>  MemberProfile::factory::create(const QJsonObject& js)
{
    std::unique_ptr<MemberProfile> rv;
    rv = std::unique_ptr<MemberProfile>(new MemberProfile);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberProfile MemberProfile::EXAMPLE(){
    MemberProfile rv;
    rv.team_member_id = "test1value";
    rv.external_id = "test2value";
    rv.account_id = "test3value";
    rv.email = "test4value";
    rv.status = team::TeamMemberStatus::EXAMPLE();
    rv.name = users::Name::EXAMPLE();
    rv.membership_type = team::TeamMembershipType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
