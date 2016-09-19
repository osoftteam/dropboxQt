/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersSetPermissionsResult.h"

namespace dropboxQt{

namespace team{
///MembersSetPermissionsResult

MembersSetPermissionsResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersSetPermissionsResult::toJson(QJsonObject& js)const{

    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = QString(m_team_member_id);
    m_role.toJson(js, "role");
}

void MembersSetPermissionsResult::fromJson(const QJsonObject& js){

    m_team_member_id = js["team_member_id"].toString();
    m_role.fromJson(js["role"].toObject());
}

QString MembersSetPermissionsResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersSetPermissionsResult MembersSetPermissionsResult::EXAMPLE(){
    MembersSetPermissionsResult rv;
    rv.team_member_id = "test1value";
    rv.role = team::AdminTier::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
