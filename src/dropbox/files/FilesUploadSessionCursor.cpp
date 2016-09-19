/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionCursor.h"

namespace dropboxQt{

namespace files{
///UploadSessionCursor

UploadSessionCursor::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionCursor::toJson(QJsonObject& js)const{

    if(!m_session_id.isEmpty())
        js["session_id"] = QString(m_session_id);
    js["offset"] = m_offset;
}

void UploadSessionCursor::fromJson(const QJsonObject& js){

    m_session_id = js["session_id"].toString();
    m_offset = js["offset"].toVariant().toInt();
}

QString UploadSessionCursor::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionCursor UploadSessionCursor::EXAMPLE(){
    UploadSessionCursor rv;
    rv.session_id = "test1value";
    rv.offset = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
