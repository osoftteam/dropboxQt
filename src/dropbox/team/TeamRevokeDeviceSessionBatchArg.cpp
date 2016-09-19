/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionBatchArg.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionBatchArg

RevokeDeviceSessionBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeDeviceSessionBatchArg::toJson(QJsonObject& js)const{

    js["revoke_devices"] = struct_list2jsonarray(m_revoke_devices);
}

void RevokeDeviceSessionBatchArg::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["revoke_devices"].toArray(), m_revoke_devices);
}

QString RevokeDeviceSessionBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionBatchArg RevokeDeviceSessionBatchArg::EXAMPLE(){
    RevokeDeviceSessionBatchArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
