/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionFinishBatchArg.h"

namespace dropboxQt{

namespace files{
///UploadSessionFinishBatchArg

UploadSessionFinishBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionFinishBatchArg::toJson(QJsonObject& js)const{

    js["entries"] = struct_list2jsonarray(m_entries);
}

void UploadSessionFinishBatchArg::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["entries"].toArray(), m_entries);
}

QString UploadSessionFinishBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionFinishBatchArg UploadSessionFinishBatchArg::EXAMPLE(){
    UploadSessionFinishBatchArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
