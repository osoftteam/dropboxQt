/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedApiAppArg.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedApiAppArg

RevokeLinkedApiAppArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeLinkedApiAppArg::toJson(QJsonObject& js)const{

    if(!m_app_id.isEmpty())
        js["app_id"] = QString(m_app_id);
    if(!m_team_member_id.isEmpty())
        js["team_member_id"] = QString(m_team_member_id);
    js["keep_app_folder"] = m_keep_app_folder;
}

void RevokeLinkedApiAppArg::fromJson(const QJsonObject& js){

    m_app_id = js["app_id"].toString();
    m_team_member_id = js["team_member_id"].toString();
    m_keep_app_folder = js["keep_app_folder"].toVariant().toBool();
}

QString RevokeLinkedApiAppArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedApiAppArg RevokeLinkedApiAppArg::EXAMPLE(){
    RevokeLinkedApiAppArg rv;
    rv.app_id = "test1value";
    rv.team_member_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
