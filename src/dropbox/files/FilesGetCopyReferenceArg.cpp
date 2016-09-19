/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetCopyReferenceArg.h"

namespace dropboxQt{

namespace files{
///GetCopyReferenceArg

GetCopyReferenceArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetCopyReferenceArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
}

void GetCopyReferenceArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString GetCopyReferenceArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetCopyReferenceArg GetCopyReferenceArg::EXAMPLE(){
    GetCopyReferenceArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
