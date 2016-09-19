/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFolderMembersCursorArg.h"

namespace dropboxQt{

namespace sharing{
///ListFolderMembersCursorArg

ListFolderMembersCursorArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderMembersCursorArg::toJson(QJsonObject& js)const{

    js["actions"] = struct_list2jsonarray(m_actions);
    js["limit"] = m_limit;
}

void ListFolderMembersCursorArg::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["actions"].toArray(), m_actions);
    m_limit = js["limit"].toVariant().toInt();
}

QString ListFolderMembersCursorArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderMembersCursorArg ListFolderMembersCursorArg::EXAMPLE(){
    ListFolderMembersCursorArg rv;
    rv.limit = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
