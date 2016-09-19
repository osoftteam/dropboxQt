/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveUrlArg.h"

namespace dropboxQt{

namespace files{
///SaveUrlArg

SaveUrlArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SaveUrlArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_url.isEmpty())
        js["url"] = m_url;
}

void SaveUrlArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_url = js["url"].toString();
}

QString SaveUrlArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveUrlArg SaveUrlArg::EXAMPLE(){
    SaveUrlArg rv;
    rv.path = "test1value";
    rv.url = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
