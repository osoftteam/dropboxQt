/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberAppsArg.h"

namespace dropboxQt{

namespace team{
///ListMemberAppsArg

ListMemberAppsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMemberAppsArg::toJson(QJsonObject& js)const{

    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = QString(m_team_member_id);
}

void ListMemberAppsArg::fromJson(const QJsonObject& js){

    m_team_member_id = js["team_member_id"].toString();
}

QString ListMemberAppsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberAppsArg ListMemberAppsArg::EXAMPLE(){
    ListMemberAppsArg rv;
    rv.team_member_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
