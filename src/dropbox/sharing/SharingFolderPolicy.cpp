/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFolderPolicy.h"

namespace dropboxQt{

namespace sharing{
///FolderPolicy

FolderPolicy::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FolderPolicy::toJson(QJsonObject& js)const{

    m_member_policy.toJson(js, "member_policy");
    m_resolved_member_policy.toJson(js, "resolved_member_policy");
    m_acl_update_policy.toJson(js, "acl_update_policy");
    m_shared_link_policy.toJson(js, "shared_link_policy");
}

void FolderPolicy::fromJson(const QJsonObject& js){

    m_member_policy.fromJson(js["member_policy"].toObject());
    m_resolved_member_policy.fromJson(js["resolved_member_policy"].toObject());
    m_acl_update_policy.fromJson(js["acl_update_policy"].toObject());
    m_shared_link_policy.fromJson(js["shared_link_policy"].toObject());
}

QString FolderPolicy::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FolderPolicy FolderPolicy::EXAMPLE(){
    FolderPolicy rv;
    rv.member_policy = sharing::MemberPolicy::EXAMPLE();
    rv.resolved_member_policy = sharing::MemberPolicy::EXAMPLE();
    rv.acl_update_policy = sharing::AclUpdatePolicy::EXAMPLE();
    rv.shared_link_policy = sharing::SharedLinkPolicy::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
