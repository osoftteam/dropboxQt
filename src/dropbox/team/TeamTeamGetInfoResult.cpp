/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamTeamGetInfoResult.h"

namespace dropboxQt{

namespace team{
///TeamGetInfoResult

TeamGetInfoResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamGetInfoResult::toJson(QJsonObject& js)const{

    if(!m_name.isEmpty())
        js["name"] = QString(m_name);
    if(!m_team_id.isEmpty())
        js["team_id"] = QString(m_team_id);
    js["num_licensed_users"] = m_num_licensed_users;
    js["num_provisioned_users"] = m_num_provisioned_users;
    js["policies"] = (QJsonObject)m_policies;
}

void TeamGetInfoResult::fromJson(const QJsonObject& js){

    m_name = js["name"].toString();
    m_team_id = js["team_id"].toString();
    m_num_licensed_users = js["num_licensed_users"].toVariant().toInt();
    m_num_provisioned_users = js["num_provisioned_users"].toVariant().toInt();
    m_policies.fromJson(js);
}

QString TeamGetInfoResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamGetInfoResult TeamGetInfoResult::EXAMPLE(){
    TeamGetInfoResult rv;
    rv.name = "test1value";
    rv.team_id = "test2value";
    rv.num_licensed_users = 3;
    rv.num_provisioned_users = 4;
    rv.policies = team_policies::TeamMemberPolicies::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
