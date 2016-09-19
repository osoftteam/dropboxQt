/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderLongpollResult.h"

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

#ifdef DROPBOX_QT_AUTOTEST
ListFolderLongpollResult ListFolderLongpollResult::EXAMPLE(){
    ListFolderLongpollResult rv;
    rv.backoff = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
