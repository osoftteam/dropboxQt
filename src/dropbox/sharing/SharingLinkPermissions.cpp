/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingLinkPermissions.h"

namespace dropboxQt{

namespace sharing{
///LinkPermissions

LinkPermissions::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void LinkPermissions::toJson(QJsonObject& js)const{

    m_resolved_visibility.toJson(js, "resolved_visibility");
    m_requested_visibility.toJson(js, "requested_visibility");
    js["can_revoke"] = m_can_revoke;
    m_revoke_failure_reason.toJson(js, "revoke_failure_reason");
}

void LinkPermissions::fromJson(const QJsonObject& js){

    m_resolved_visibility.fromJson(js["resolved_visibility"].toObject());
    m_requested_visibility.fromJson(js["requested_visibility"].toObject());
    m_can_revoke = js["can_revoke"].toVariant().toBool();
    m_revoke_failure_reason.fromJson(js["revoke_failure_reason"].toObject());
}

QString LinkPermissions::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LinkPermissions LinkPermissions::EXAMPLE(){
    LinkPermissions rv;
    rv.resolved_visibility = sharing::ResolvedVisibility::EXAMPLE();
    rv.requested_visibility = sharing::RequestedVisibility::EXAMPLE();
    rv.revoke_failure_reason = sharing::SharedLinkAccessFailureReason::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
