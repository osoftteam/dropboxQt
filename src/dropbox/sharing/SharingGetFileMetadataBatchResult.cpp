/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetFileMetadataBatchResult.h"

namespace dropboxQt{

namespace sharing{
///GetFileMetadataBatchResult

GetFileMetadataBatchResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetFileMetadataBatchResult::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = m_file;
    m_result.toJson(js, "result");
}

void GetFileMetadataBatchResult::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
    m_result.fromJson(js["result"].toObject());
}

QString GetFileMetadataBatchResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetFileMetadataBatchResult GetFileMetadataBatchResult::EXAMPLE(){
    GetFileMetadataBatchResult rv;
    rv.file = "test1value";
    rv.result = sharing::GetFileMetadataIndividualResult::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
