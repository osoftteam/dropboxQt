/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchMatch.h"

namespace dropboxQt{

namespace files{
///SearchMatch

SearchMatch::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SearchMatch::toJson(QJsonObject& js)const{

    m_match_type.toJson(js, "match_type");
    js["metadata"] = (QJsonObject)m_metadata;
}

void SearchMatch::fromJson(const QJsonObject& js){

    m_match_type.fromJson(js["match_type"].toObject());
    m_metadata.fromJson(js);
}

QString SearchMatch::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<SearchMatch>  SearchMatch::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<SearchMatch>  SearchMatch::factory::create(const QJsonObject& js)
{
    std::unique_ptr<SearchMatch> rv;
    rv = std::unique_ptr<SearchMatch>(new SearchMatch);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchMatch SearchMatch::EXAMPLE(){
    SearchMatch rv;
    rv.match_type = files::SearchMatchType::EXAMPLE();
    rv.metadata = files::Metadata::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
