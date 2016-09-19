/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionOffsetError.h"

namespace dropboxQt{

namespace files{
///UploadSessionOffsetError

UploadSessionOffsetError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionOffsetError::toJson(QJsonObject& js)const{

    js["correct_offset"] = m_correct_offset;
}

void UploadSessionOffsetError::fromJson(const QJsonObject& js){

    m_correct_offset = js["correct_offset"].toVariant().toInt();
}

QString UploadSessionOffsetError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionOffsetError UploadSessionOffsetError::EXAMPLE(){
    UploadSessionOffsetError rv;
    rv.correct_offset = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
