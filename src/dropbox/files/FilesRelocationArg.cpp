/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRelocationArg.h"

namespace dropboxQt{

namespace files{
///RelocationArg

RelocationArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RelocationArg::toJson(QJsonObject& js)const{

    if(!m_from_path.isEmpty())
        js["from_path"] = m_from_path;
    if(!m_to_path.isEmpty())
        js["to_path"] = m_to_path;
}

void RelocationArg::fromJson(const QJsonObject& js){

    m_from_path = js["from_path"].toString();
    m_to_path = js["to_path"].toString();
}

QString RelocationArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RelocationArg RelocationArg::EXAMPLE(){
    RelocationArg rv;
    rv.from_path = "test1value";
    rv.to_path = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
