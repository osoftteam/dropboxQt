/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMembersAppsArg.h"

namespace dropboxQt{

namespace team{
///ListMembersAppsArg

ListMembersAppsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMembersAppsArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void ListMembersAppsArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
}

QString ListMembersAppsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMembersAppsArg ListMembersAppsArg::EXAMPLE(){
    ListMembersAppsArg rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
