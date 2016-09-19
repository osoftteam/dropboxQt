/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedFolderMetadataBase.h"

namespace dropboxQt{

namespace sharing{
///SharedFolderMetadataBase

SharedFolderMetadataBase::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedFolderMetadataBase::toJson(QJsonObject& js)const{

    m_access_type.toJson(js, "access_type");
    js["is_team_folder"] = m_is_team_folder;
    js["policy"] = (QJsonObject)m_policy;
    js["owner_team"] = (QJsonObject)m_owner_team;
    if(!m_parent_shared_folder_id.isEmpty())
        js["parent_shared_folder_id"] = m_parent_shared_folder_id;
}

void SharedFolderMetadataBase::fromJson(const QJsonObject& js){

    m_access_type.fromJson(js["access_type"].toObject());
    m_is_team_folder = js["is_team_folder"].toVariant().toBool();
    m_policy.fromJson(js);
    m_owner_team.fromJson(js);
    m_parent_shared_folder_id = js["parent_shared_folder_id"].toString();
}

QString SharedFolderMetadataBase::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFolderMetadataBase SharedFolderMetadataBase::EXAMPLE(){
    SharedFolderMetadataBase rv;
    rv.access_type = sharing::AccessLevel::EXAMPLE();
    rv.policy = sharing::FolderPolicy::EXAMPLE();
    rv.owner_team = users::Team::EXAMPLE();
    rv.parent_shared_folder_id = "test5value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
