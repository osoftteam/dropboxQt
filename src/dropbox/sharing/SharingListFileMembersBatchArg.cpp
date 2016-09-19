/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersBatchArg.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersBatchArg

ListFileMembersBatchArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFileMembersBatchArg::toJson(QJsonObject& js)const{

    js["files"] = ingrl_list2jsonarray(m_files);
    js["limit"] = m_limit;
}

void ListFileMembersBatchArg::fromJson(const QJsonObject& js){

    jsonarray2ingrl_list(js["files"].toArray(), m_files);
    m_limit = js["limit"].toVariant().toInt();
}

QString ListFileMembersBatchArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersBatchArg ListFileMembersBatchArg::EXAMPLE(){
    ListFileMembersBatchArg rv;
    rv.limit = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
