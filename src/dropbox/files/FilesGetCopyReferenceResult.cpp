/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetCopyReferenceResult.h"

namespace dropboxQt{

namespace files{
///GetCopyReferenceResult

GetCopyReferenceResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetCopyReferenceResult::toJson(QJsonObject& js)const{

    js["metadata"] = (QJsonObject)m_metadata;
    if(!m_copy_reference.isEmpty())
        js["copy_reference"] = QString(m_copy_reference);
    if(m_expires.isValid())
        js["expires"] = m_expires.toString("yyyy-MM-ddThh:mm:ssZ");
}

void GetCopyReferenceResult::fromJson(const QJsonObject& js){

    m_metadata.fromJson(js);
    m_copy_reference = js["copy_reference"].toString();
    m_expires = QDateTime::fromString(js["expires"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString GetCopyReferenceResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetCopyReferenceResult GetCopyReferenceResult::EXAMPLE(){
    GetCopyReferenceResult rv;
    rv.metadata = files::Metadata::EXAMPLE();
    rv.copy_reference = "test2value";
    rv.expires = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
