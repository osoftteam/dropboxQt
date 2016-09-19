/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadWriteFailed.h"

namespace dropboxQt{

namespace files{
///UploadWriteFailed

UploadWriteFailed::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadWriteFailed::toJson(QJsonObject& js)const{

    m_reason.toJson(js, "reason");
    if(!m_upload_session_id.isEmpty())
        js["upload_session_id"] = QString(m_upload_session_id);
}

void UploadWriteFailed::fromJson(const QJsonObject& js){

    m_reason.fromJson(js["reason"].toObject());
    m_upload_session_id = js["upload_session_id"].toString();
}

QString UploadWriteFailed::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadWriteFailed UploadWriteFailed::EXAMPLE(){
    UploadWriteFailed rv;
    rv.reason = files::WriteError::EXAMPLE();
    rv.upload_session_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
