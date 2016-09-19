/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedFileMetadata.h"

namespace dropboxQt{

namespace sharing{
///SharedFileMetadata

SharedFileMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedFileMetadata::toJson(QJsonObject& js)const{

    js["policy"] = (QJsonObject)m_policy;
    js["permissions"] = struct_list2jsonarray(m_permissions);
    js["owner_team"] = (QJsonObject)m_owner_team;
    if(!m_parent_shared_folder_id.isEmpty())
        js["parent_shared_folder_id"] = QString(m_parent_shared_folder_id);
    if(!m_preview_url.isEmpty())
        js["preview_url"] = QString(m_preview_url);
    if(!m_path_lower.isEmpty())
        js["path_lower"] = QString(m_path_lower);
    if(!m_path_display.isEmpty())
        js["path_display"] = QString(m_path_display);
    if(!m_name.isEmpty())
        js["name"] = QString(m_name);
    if(!m_id.isEmpty())
        js["id"] = QString(m_id);
    if(m_time_invited.isValid())
        js["time_invited"] = m_time_invited.toString("yyyy-MM-ddThh:mm:ssZ");
}

void SharedFileMetadata::fromJson(const QJsonObject& js){

    m_policy.fromJson(js);
    jsonarray2struct_list(js["permissions"].toArray(), m_permissions);
    m_owner_team.fromJson(js);
    m_parent_shared_folder_id = js["parent_shared_folder_id"].toString();
    m_preview_url = js["preview_url"].toString();
    m_path_lower = js["path_lower"].toString();
    m_path_display = js["path_display"].toString();
    m_name = js["name"].toString();
    m_id = js["id"].toString();
    m_time_invited = QDateTime::fromString(js["time_invited"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString SharedFileMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFileMetadata SharedFileMetadata::EXAMPLE(){
    SharedFileMetadata rv;
    rv.policy = sharing::FolderPolicy::EXAMPLE();
    rv.owner_team = users::Team::EXAMPLE();
    rv.parent_shared_folder_id = "test4value";
    rv.preview_url = "test5value";
    rv.path_lower = "test6value";
    rv.path_display = "test7value";
    rv.name = "test8value";
    rv.id = "test9value";
    rv.time_invited = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
