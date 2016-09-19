/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetFileMetadataArg.h"

namespace dropboxQt{

namespace sharing{
///GetFileMetadataArg

GetFileMetadataArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetFileMetadataArg::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = m_file;
    js["actions"] = struct_list2jsonarray(m_actions);
}

void GetFileMetadataArg::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString GetFileMetadataArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetFileMetadataArg GetFileMetadataArg::EXAMPLE(){
    GetFileMetadataArg rv;
    rv.file = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
