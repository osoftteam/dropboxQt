/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDeleteArg.h"

namespace dropboxQt{

namespace files{
///DeleteArg

DeleteArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DeleteArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
}

void DeleteArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString DeleteArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DeleteArg DeleteArg::EXAMPLE(){
    DeleteArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
