/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUpdateFolderPolicyArg.h"

namespace dropboxQt{

namespace sharing{
///UpdateFolderPolicyArg

UpdateFolderPolicyArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UpdateFolderPolicyArg::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
    m_member_policy.toJson(js, "member_policy");
    m_acl_update_policy.toJson(js, "acl_update_policy");
    m_shared_link_policy.toJson(js, "shared_link_policy");
}

void UpdateFolderPolicyArg::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    m_member_policy.fromJson(js["member_policy"].toObject());
    m_acl_update_policy.fromJson(js["acl_update_policy"].toObject());
    m_shared_link_policy.fromJson(js["shared_link_policy"].toObject());
}

QString UpdateFolderPolicyArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdateFolderPolicyArg UpdateFolderPolicyArg::EXAMPLE(){
    UpdateFolderPolicyArg rv;
    rv.shared_folder_id = "test1value";
    rv.member_policy = sharing::MemberPolicy::EXAMPLE();
    rv.acl_update_policy = sharing::AclUpdatePolicy::EXAMPLE();
    rv.shared_link_policy = sharing::SharedLinkPolicy::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
