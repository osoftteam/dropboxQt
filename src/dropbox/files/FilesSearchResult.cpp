/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchResult.h"

namespace dropboxQt{

namespace files{
///SearchResult

SearchResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SearchResult::toJson(QJsonObject& js)const{

    js["matches"] = struct_list2jsonarray(m_matches);
    js["more"] = m_more;
    js["start"] = m_start;
}

void SearchResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["matches"].toArray(), m_matches);
    m_more = js["more"].toVariant().toBool();
    m_start = js["start"].toVariant().toInt();
}

QString SearchResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchResult SearchResult::EXAMPLE(){
    SearchResult rv;
    rv.start = 3;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
