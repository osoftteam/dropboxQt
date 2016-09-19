/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionStartArg.h"

namespace dropboxQt{

namespace files{
///UploadSessionStartArg

UploadSessionStartArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionStartArg::toJson(QJsonObject& js)const{

    js["close"] = m_close;
}

void UploadSessionStartArg::fromJson(const QJsonObject& js){

    m_close = js["close"].toVariant().toBool();
}

QString UploadSessionStartArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionStartArg UploadSessionStartArg::EXAMPLE(){
    UploadSessionStartArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
