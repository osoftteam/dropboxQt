/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListRevisionsArg.h"

namespace dropboxQt{

namespace files{
///ListRevisionsArg

ListRevisionsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListRevisionsArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    js["limit"] = m_limit;
}

void ListRevisionsArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_limit = js["limit"].toVariant().toInt();
}

QString ListRevisionsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListRevisionsArg ListRevisionsArg::EXAMPLE(){
    ListRevisionsArg rv;
    rv.path = "test1value";
    rv.limit = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
