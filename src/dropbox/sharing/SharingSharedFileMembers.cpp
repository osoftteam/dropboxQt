/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedFileMembers.h"

namespace dropboxQt{

namespace sharing{
///SharedFileMembers

SharedFileMembers::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedFileMembers::toJson(QJsonObject& js)const{

    js["users"] = struct_list2jsonarray(m_users);
    js["groups"] = struct_list2jsonarray(m_groups);
    js["invitees"] = struct_list2jsonarray(m_invitees);
    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void SharedFileMembers::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["users"].toArray(), m_users);
    jsonarray2struct_list(js["groups"].toArray(), m_groups);
    jsonarray2struct_list(js["invitees"].toArray(), m_invitees);
    m_cursor = js["cursor"].toString();
}

QString SharedFileMembers::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFileMembers SharedFileMembers::EXAMPLE(){
    SharedFileMembers rv;
    rv.cursor = "test4value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
