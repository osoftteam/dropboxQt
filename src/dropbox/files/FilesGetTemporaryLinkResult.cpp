/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetTemporaryLinkResult.h"

namespace dropboxQt{

namespace files{
///GetTemporaryLinkResult

GetTemporaryLinkResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetTemporaryLinkResult::toJson(QJsonObject& js)const{

    js["metadata"] = (QJsonObject)m_metadata;
    if(!m_link.isEmpty())
        js["link"] = m_link;
}

void GetTemporaryLinkResult::fromJson(const QJsonObject& js){

    m_metadata.fromJson(js);
    m_link = js["link"].toString();
}

QString GetTemporaryLinkResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetTemporaryLinkResult GetTemporaryLinkResult::EXAMPLE(){
    GetTemporaryLinkResult rv;
    rv.metadata = files::FileMetadata::EXAMPLE();
    rv.link = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
