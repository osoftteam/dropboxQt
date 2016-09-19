/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListMembersDevicesArg.h"

namespace dropboxQt{

namespace team{
///ListMembersDevicesArg

ListMembersDevicesArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListMembersDevicesArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
    js["include_web_sessions"] = m_include_web_sessions;
    js["include_desktop_clients"] = m_include_desktop_clients;
    js["include_mobile_clients"] = m_include_mobile_clients;
}

void ListMembersDevicesArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
    m_include_web_sessions = js["include_web_sessions"].toVariant().toBool();
    m_include_desktop_clients = js["include_desktop_clients"].toVariant().toBool();
    m_include_mobile_clients = js["include_mobile_clients"].toVariant().toBool();
}

QString ListMembersDevicesArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListMembersDevicesArg ListMembersDevicesArg::EXAMPLE(){
    ListMembersDevicesArg rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
