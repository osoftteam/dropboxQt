/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamTeamMemberInfo.h"

namespace dropboxQt{

namespace team{
///TeamMemberInfo

TeamMemberInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamMemberInfo::toJson(QJsonObject& js)const{

    js["profile"] = (QJsonObject)m_profile;
    m_role.toJson(js, "role");
}

void TeamMemberInfo::fromJson(const QJsonObject& js){

    m_profile.fromJson(js);
    m_role.fromJson(js["role"].toObject());
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
    rv.profile = team::TeamMemberProfile::EXAMPLE();
    rv.role = team::AdminTier::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
