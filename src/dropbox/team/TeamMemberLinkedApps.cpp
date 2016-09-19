/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberLinkedApps.h"

namespace dropboxQt{

namespace team{
///MemberLinkedApps

MemberLinkedApps::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MemberLinkedApps::toJson(QJsonObject& js)const{

    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = m_team_member_id;
    js["linked_api_apps"] = struct_list2jsonarray(m_linked_api_apps);
}

void MemberLinkedApps::fromJson(const QJsonObject& js){

    m_team_member_id = js["team_member_id"].toString();
    jsonarray2struct_list(js["linked_api_apps"].toArray(), m_linked_api_apps);
}

QString MemberLinkedApps::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberLinkedApps MemberLinkedApps::EXAMPLE(){
    MemberLinkedApps rv;
    rv.team_member_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
