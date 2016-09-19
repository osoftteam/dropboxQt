/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListTeamDevicesResult.h"

namespace dropboxQt{

namespace team{
///ListTeamDevicesResult

ListTeamDevicesResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListTeamDevicesResult::toJson(QJsonObject& js)const{

    js["devices"] = struct_list2jsonarray(m_devices);
    js["has_more"] = m_has_more;
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void ListTeamDevicesResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["devices"].toArray(), m_devices);
    m_has_more = js["has_more"].toVariant().toBool();
    m_cursor = js["cursor"].toString();
}

QString ListTeamDevicesResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListTeamDevicesResult ListTeamDevicesResult::EXAMPLE(){
    ListTeamDevicesResult rv;
    rv.cursor = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
