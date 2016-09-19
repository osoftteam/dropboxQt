/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFoldersResult.h"

namespace dropboxQt{

namespace sharing{
///ListFoldersResult

ListFoldersResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFoldersResult::toJson(QJsonObject& js)const{

    js["entries"] = struct_list2jsonarray(m_entries);
    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void ListFoldersResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["entries"].toArray(), m_entries);
    m_cursor = js["cursor"].toString();
}

QString ListFoldersResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFoldersResult ListFoldersResult::EXAMPLE(){
    ListFoldersResult rv;
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
