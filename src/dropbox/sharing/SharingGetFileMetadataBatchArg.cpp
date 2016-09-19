/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetFileMetadataBatchArg.h"

namespace dropboxQt{

namespace sharing{
///GetFileMetadataBatchArg

GetFileMetadataBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetFileMetadataBatchArg::toJson(QJsonObject& js)const{

    js["files"] = ingrl_list2jsonarray(m_files);
    js["actions"] = struct_list2jsonarray(m_actions);
}

void GetFileMetadataBatchArg::fromJson(const QJsonObject& js){

    jsonarray2ingrl_list(js["files"].toArray(), m_files);
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString GetFileMetadataBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetFileMetadataBatchArg GetFileMetadataBatchArg::EXAMPLE(){
    GetFileMetadataBatchArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
