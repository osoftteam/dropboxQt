/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersFullTeam.h"

namespace dropboxQt{

namespace users{
///FullTeam

FullTeam::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FullTeam::toJson(QJsonObject& js)const{

    Team::toJson(js);
    js["sharing_policies"] = (QJsonObject)m_sharing_policies;
}

void FullTeam::fromJson(const QJsonObject& js){

    Team::fromJson(js);
    m_sharing_policies.fromJson(js);
}

QString FullTeam::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FullTeam FullTeam::EXAMPLE(){
    FullTeam rv;
    rv.sharing_policies = team_policies::TeamSharingPolicies::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
