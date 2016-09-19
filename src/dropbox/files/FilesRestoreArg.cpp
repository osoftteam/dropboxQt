/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRestoreArg.h"

namespace dropboxQt{

namespace files{
///RestoreArg

RestoreArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RestoreArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_rev.isEmpty())
        js["rev"] = m_rev;
}

void RestoreArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_rev = js["rev"].toString();
}

QString RestoreArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RestoreArg RestoreArg::EXAMPLE(){
    RestoreArg rv;
    rv.path = "test1value";
    rv.rev = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
