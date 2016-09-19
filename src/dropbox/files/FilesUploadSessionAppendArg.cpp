/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionAppendArg.h"

namespace dropboxQt{

namespace files{
///UploadSessionAppendArg

UploadSessionAppendArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionAppendArg::toJson(QJsonObject& js)const{

    js["cursor"] = (QJsonObject)m_cursor;
    js["close"] = m_close;
}

void UploadSessionAppendArg::fromJson(const QJsonObject& js){

    m_cursor.fromJson(js);
    m_close = js["close"].toVariant().toBool();
}

QString UploadSessionAppendArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionAppendArg UploadSessionAppendArg::EXAMPLE(){
    UploadSessionAppendArg rv;
    rv.cursor = files::UploadSessionCursor::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
