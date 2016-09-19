/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetMetadataArg.h"

namespace dropboxQt{

namespace files{
///GetMetadataArg

GetMetadataArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetMetadataArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    js["include_media_info"] = m_include_media_info;
    js["include_deleted"] = m_include_deleted;
    js["include_has_explicit_shared_members"] = m_include_has_explicit_shared_members;
}

void GetMetadataArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_include_media_info = js["include_media_info"].toVariant().toBool();
    m_include_deleted = js["include_deleted"].toVariant().toBool();
    m_include_has_explicit_shared_members = js["include_has_explicit_shared_members"].toVariant().toBool();
}

QString GetMetadataArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetMetadataArg GetMetadataArg::EXAMPLE(){
    GetMetadataArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
