/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesListFolderLongpollResult.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace files{
///ListFolderLongpollResult

ListFolderLongpollResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderLongpollResult::toJson(QJsonObject& js)const{

    js["changes"] = m_changes;
    js["backoff"] = m_backoff;
}

void ListFolderLongpollResult::fromJson(const QJsonObject& js){

    m_changes = js["changes"].toVariant().toBool();
    m_backoff = js["backoff"].toVariant().toInt();
}

QString ListFolderLongpollResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ListFolderLongpollResult>  ListFolderLongpollResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListFolderLongpollResult>  ListFolderLongpollResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListFolderLongpollResult> rv;
    rv = std::unique_ptr<ListFolderLongpollResult>(new ListFolderLongpollResult);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
