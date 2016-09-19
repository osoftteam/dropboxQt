/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedApiAppBatchArg.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedApiAppBatchArg

RevokeLinkedApiAppBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeLinkedApiAppBatchArg::toJson(QJsonObject& js)const{

    js["revoke_linked_app"] = struct_list2jsonarray(m_revoke_linked_app);
}

void RevokeLinkedApiAppBatchArg::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["revoke_linked_app"].toArray(), m_revoke_linked_app);
}

QString RevokeLinkedApiAppBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedApiAppBatchArg RevokeLinkedApiAppBatchArg::EXAMPLE(){
    RevokeLinkedApiAppBatchArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
