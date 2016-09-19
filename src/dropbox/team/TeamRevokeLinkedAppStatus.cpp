/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedAppStatus.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedAppStatus

RevokeLinkedAppStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeLinkedAppStatus::toJson(QJsonObject& js)const{

    js["success"] = m_success;
    m_error_type.toJson(js, "error_type");
}

void RevokeLinkedAppStatus::fromJson(const QJsonObject& js){

    m_success = js["success"].toVariant().toBool();
    m_error_type.fromJson(js["error_type"].toObject());
}

QString RevokeLinkedAppStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedAppStatus RevokeLinkedAppStatus::EXAMPLE(){
    RevokeLinkedAppStatus rv;
    rv.error_type = team::RevokeLinkedAppError::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
