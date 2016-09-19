/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingParentFolderAccessInfo.h"

namespace dropboxQt{

namespace sharing{
///ParentFolderAccessInfo

ParentFolderAccessInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ParentFolderAccessInfo::toJson(QJsonObject& js)const{

    if(!m_folder_name.isEmpty())
        js["folder_name"] = m_folder_name;
    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
    js["permissions"] = struct_list2jsonarray(m_permissions);
}

void ParentFolderAccessInfo::fromJson(const QJsonObject& js){

    m_folder_name = js["folder_name"].toString();
    m_shared_folder_id = js["shared_folder_id"].toString();
    jsonarray2struct_list(js["permissions"].toArray(), m_permissions);
}

QString ParentFolderAccessInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ParentFolderAccessInfo ParentFolderAccessInfo::EXAMPLE(){
    ParentFolderAccessInfo rv;
    rv.folder_name = "test1value";
    rv.shared_folder_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
