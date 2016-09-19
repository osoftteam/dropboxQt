/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingTeamMemberInfo.h"

namespace dropboxQt{

namespace sharing{
///TeamMemberInfo

TeamMemberInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamMemberInfo::toJson(QJsonObject& js)const{

    js["team_info"] = (QJsonObject)m_team_info;
    if(!m_display_name.isEmpty())
        js["display_name"] = QString(m_display_name);
    if(!m_member_id.isEmpty())
        js["member_id"] = QString(m_member_id);
}

void TeamMemberInfo::fromJson(const QJsonObject& js){

    m_team_info.fromJson(js);
    m_display_name = js["display_name"].toString();
    m_member_id = js["member_id"].toString();
}

QString TeamMemberInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamMemberInfo TeamMemberInfo::EXAMPLE(){
    TeamMemberInfo rv;
    rv.team_info = users::Team::EXAMPLE();
    rv.display_name = "test2value";
    rv.member_id = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
