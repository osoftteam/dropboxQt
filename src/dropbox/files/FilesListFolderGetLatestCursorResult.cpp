/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 Part of "Ardi - the organizer" project.
 osoft4ardi@gmail.com
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesListFolderGetLatestCursorResult.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace files{
///ListFolderGetLatestCursorResult

ListFolderGetLatestCursorResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderGetLatestCursorResult::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void ListFolderGetLatestCursorResult::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
}

QString ListFolderGetLatestCursorResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ListFolderGetLatestCursorResult>  ListFolderGetLatestCursorResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListFolderGetLatestCursorResult>  ListFolderGetLatestCursorResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListFolderGetLatestCursorResult> rv;
    rv = std::unique_ptr<ListFolderGetLatestCursorResult>(new ListFolderGetLatestCursorResult);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
