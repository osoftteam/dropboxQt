/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFilesArg.h"

namespace dropboxQt{

namespace sharing{
///ListFilesArg

ListFilesArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFilesArg::toJson(QJsonObject& js)const{

    js["limit"] = m_limit;
    js["actions"] = struct_list2jsonarray(m_actions);
}

void ListFilesArg::fromJson(const QJsonObject& js){

    m_limit = js["limit"].toVariant().toInt();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString ListFilesArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFilesArg ListFilesArg::EXAMPLE(){
    ListFilesArg rv;
    rv.limit = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
