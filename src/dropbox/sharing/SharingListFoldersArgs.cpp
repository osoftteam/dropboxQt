/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFoldersArgs.h"

namespace dropboxQt{

namespace sharing{
///ListFoldersArgs

ListFoldersArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFoldersArgs::toJson(QJsonObject& js)const{

    js["limit"] = m_limit;
    js["actions"] = struct_list2jsonarray(m_actions);
}

void ListFoldersArgs::fromJson(const QJsonObject& js){

    m_limit = js["limit"].toVariant().toInt();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString ListFoldersArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFoldersArgs ListFoldersArgs::EXAMPLE(){
    ListFoldersArgs rv;
    rv.limit = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
