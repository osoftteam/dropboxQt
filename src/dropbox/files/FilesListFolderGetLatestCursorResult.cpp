/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderGetLatestCursorResult.h"

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
        js["cursor"] = m_cursor;
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

#ifdef DROPBOX_QT_AUTOTEST
ListFolderGetLatestCursorResult ListFolderGetLatestCursorResult::EXAMPLE(){
    ListFolderGetLatestCursorResult rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
