/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetTemporaryLinkArg.h"

namespace dropboxQt{

namespace files{
///GetTemporaryLinkArg

GetTemporaryLinkArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetTemporaryLinkArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
}

void GetTemporaryLinkArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString GetTemporaryLinkArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetTemporaryLinkArg GetTemporaryLinkArg::EXAMPLE(){
    GetTemporaryLinkArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
