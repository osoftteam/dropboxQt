/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesListRevisionsArg.h"
using namespace dropboxQt;

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


std::unique_ptr<ListRevisionsArg>  ListRevisionsArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListRevisionsArg>  ListRevisionsArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListRevisionsArg> rv;
    rv = std::unique_ptr<ListRevisionsArg>(new ListRevisionsArg);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
