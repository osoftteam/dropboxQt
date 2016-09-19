/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesFileSharingInfo.h"

namespace dropboxQt{

namespace files{
///FileSharingInfo

FileSharingInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FileSharingInfo::toJson(QJsonObject& js)const{

    SharingInfo::toJson(js);
    if(!m_parent_shared_folder_id.isEmpty())
        js["parent_shared_folder_id"] = m_parent_shared_folder_id;
    if(!m_modified_by.isEmpty())
        js["modified_by"] = m_modified_by;
}

void FileSharingInfo::fromJson(const QJsonObject& js){

    SharingInfo::fromJson(js);
    m_parent_shared_folder_id = js["parent_shared_folder_id"].toString();
    m_modified_by = js["modified_by"].toString();
}

QString FileSharingInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileSharingInfo FileSharingInfo::EXAMPLE(){
    FileSharingInfo rv;
    rv.parent_shared_folder_id = "test1value";
    rv.modified_by = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
