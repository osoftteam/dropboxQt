/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesFolderMetadata.h"

namespace dropboxQt{

namespace files{
///FolderMetadata

FolderMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FolderMetadata::toJson(QJsonObject& js)const{

    Metadata::toJson(js);
    if(!m_id.isEmpty())
        js["id"] = m_id;
    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
    js["sharing_info"] = (QJsonObject)m_sharing_info;
    js["property_groups"] = struct_list2jsonarray(m_property_groups);
}

void FolderMetadata::fromJson(const QJsonObject& js){

    Metadata::fromJson(js);
    m_id = js["id"].toString();
    m_shared_folder_id = js["shared_folder_id"].toString();
    m_sharing_info.fromJson(js);
    jsonarray2struct_list(js["property_groups"].toArray(), m_property_groups);
}

QString FolderMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FolderMetadata FolderMetadata::EXAMPLE(){
    FolderMetadata rv;
    rv.id = "test1value";
    rv.shared_folder_id = "test2value";
    rv.sharing_info = files::FolderSharingInfo::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
