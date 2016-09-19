/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedAppBatchResult.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedAppBatchResult

RevokeLinkedAppBatchResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeLinkedAppBatchResult::toJson(QJsonObject& js)const{

    js["revoke_linked_app_status"] = struct_list2jsonarray(m_revoke_linked_app_status);
}

void RevokeLinkedAppBatchResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["revoke_linked_app_status"].toArray(), m_revoke_linked_app_status);
}

QString RevokeLinkedAppBatchResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedAppBatchResult RevokeLinkedAppBatchResult::EXAMPLE(){
    RevokeLinkedAppBatchResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
