/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDeviceSessionArg.h"

namespace dropboxQt{

namespace team{
///DeviceSessionArg

DeviceSessionArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DeviceSessionArg::toJson(QJsonObject& js)const{

    if(!m_session_id.isEmpty())
        js["session_id"] = m_session_id;
    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = m_team_member_id;
}

void DeviceSessionArg::fromJson(const QJsonObject& js){

    m_session_id = js["session_id"].toString();
    m_team_member_id = js["team_member_id"].toString();
}

QString DeviceSessionArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DeviceSessionArg DeviceSessionArg::EXAMPLE(){
    DeviceSessionArg rv;
    rv.session_id = "test1value";
    rv.team_member_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
