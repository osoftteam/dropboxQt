/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListRevisionsResult.h"

namespace dropboxQt{

namespace files{
///ListRevisionsResult

ListRevisionsResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListRevisionsResult::toJson(QJsonObject& js)const{

    js["is_deleted"] = m_is_deleted;
    js["entries"] = struct_list2jsonarray(m_entries);
}

void ListRevisionsResult::fromJson(const QJsonObject& js){

    m_is_deleted = js["is_deleted"].toVariant().toBool();
    jsonarray2struct_list(js["entries"].toArray(), m_entries);
}

QString ListRevisionsResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListRevisionsResult ListRevisionsResult::EXAMPLE(){
    ListRevisionsResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
