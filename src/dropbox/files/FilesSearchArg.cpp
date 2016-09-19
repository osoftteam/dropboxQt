/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchArg.h"

namespace dropboxQt{

namespace files{
///SearchArg

SearchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SearchArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_query.isEmpty())
        js["query"] = m_query;
    js["start"] = m_start;
    js["max_results"] = m_max_results;
    m_mode.toJson(js, "mode");
}

void SearchArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_query = js["query"].toString();
    m_start = js["start"].toVariant().toInt();
    m_max_results = js["max_results"].toVariant().toInt();
    m_mode.fromJson(js["mode"].toObject());
}

QString SearchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchArg SearchArg::EXAMPLE(){
    SearchArg rv;
    rv.path = "test1value";
    rv.query = "test2value";
    rv.start = 3;
    rv.max_results = 4;
    rv.mode = files::SearchMode::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
