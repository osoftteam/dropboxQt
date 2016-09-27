/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingShareFolderArg.h"

namespace dropboxQt{

namespace sharing{
///ShareFolderArg

ShareFolderArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ShareFolderArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    m_member_policy.toJson(js, "member_policy");
    m_acl_update_policy.toJson(js, "acl_update_policy");
    m_shared_link_policy.toJson(js, "shared_link_policy");
    js["force_async"] = m_force_async;
}

void ShareFolderArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_member_policy.fromJson(js["member_policy"].toObject());
    m_acl_update_policy.fromJson(js["acl_update_policy"].toObject());
    m_shared_link_policy.fromJson(js["shared_link_policy"].toObject());
    m_force_async = js["force_async"].toVariant().toBool();
}

QString ShareFolderArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ShareFolderArg>  ShareFolderArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ShareFolderArg>  ShareFolderArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ShareFolderArg> rv;
    rv = std::unique_ptr<ShareFolderArg>(new ShareFolderArg);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
ShareFolderArg ShareFolderArg::EXAMPLE(){
    ShareFolderArg rv;
    rv.path = "test1value";
    rv.member_policy = sharing::MemberPolicy::EXAMPLE();
    rv.acl_update_policy = sharing::AclUpdatePolicy::EXAMPLE();
    rv.shared_link_policy = sharing::SharedLinkPolicy::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
