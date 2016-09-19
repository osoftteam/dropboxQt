/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMemberAppsResult.h"

namespace dropboxQt{

namespace team{
///ListMemberAppsResult

ListMemberAppsResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMemberAppsResult::toJson(QJsonObject& js)const{

    js["linked_api_apps"] = struct_list2jsonarray(m_linked_api_apps);
}

void ListMemberAppsResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["linked_api_apps"].toArray(), m_linked_api_apps);
}

QString ListMemberAppsResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMemberAppsResult ListMemberAppsResult::EXAMPLE(){
    ListMemberAppsResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
