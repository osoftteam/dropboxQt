/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{

namespace files{
///Metadata

Metadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Metadata::toJson(QJsonObject& js)const{

    if(!m_name.isEmpty())
        js["name"] = QString(m_name);
    if(!m_path_lower.isEmpty())
        js["path_lower"] = QString(m_path_lower);
    if(!m_path_display.isEmpty())
        js["path_display"] = QString(m_path_display);
    if(!m_parent_shared_folder_id.isEmpty())
        js["parent_shared_folder_id"] = QString(m_parent_shared_folder_id);
}

void Metadata::fromJson(const QJsonObject& js){

    m_name = js["name"].toString();
    m_path_lower = js["path_lower"].toString();
    m_path_display = js["path_display"].toString();
    m_parent_shared_folder_id = js["parent_shared_folder_id"].toString();
}

QString Metadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Metadata Metadata::EXAMPLE(){
    Metadata rv;
    rv.name = "test1value";
    rv.path_lower = "test2value";
    rv.path_display = "test3value";
    rv.parent_shared_folder_id = "test4value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
