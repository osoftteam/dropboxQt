/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFilesResult.h"

namespace dropboxQt{

namespace sharing{
///ListFilesResult

ListFilesResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFilesResult::toJson(QJsonObject& js)const{

    js["entries"] = struct_list2jsonarray(m_entries);
    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void ListFilesResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["entries"].toArray(), m_entries);
    m_cursor = js["cursor"].toString();
}

QString ListFilesResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFilesResult ListFilesResult::EXAMPLE(){
    ListFilesResult rv;
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
