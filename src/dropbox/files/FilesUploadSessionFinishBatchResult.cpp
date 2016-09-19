/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionFinishBatchResult.h"

namespace dropboxQt{

namespace files{
///UploadSessionFinishBatchResult

UploadSessionFinishBatchResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionFinishBatchResult::toJson(QJsonObject& js)const{

    js["entries"] = struct_list2jsonarray(m_entries);
}

void UploadSessionFinishBatchResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["entries"].toArray(), m_entries);
}

QString UploadSessionFinishBatchResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionFinishBatchResult UploadSessionFinishBatchResult::EXAMPLE(){
    UploadSessionFinishBatchResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
