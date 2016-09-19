/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedFolderMembers.h"

namespace dropboxQt{

namespace sharing{
///SharedFolderMembers

SharedFolderMembers::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SharedFolderMembers::toJson(QJsonObject& js)const{

    js["users"] = struct_list2jsonarray(m_users);
    js["groups"] = struct_list2jsonarray(m_groups);
    js["invitees"] = struct_list2jsonarray(m_invitees);
    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
}

void SharedFolderMembers::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["users"].toArray(), m_users);
    jsonarray2struct_list(js["groups"].toArray(), m_groups);
    jsonarray2struct_list(js["invitees"].toArray(), m_invitees);
    m_cursor = js["cursor"].toString();
}

QString SharedFolderMembers::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFolderMembers SharedFolderMembers::EXAMPLE(){
    SharedFolderMembers rv;
    rv.cursor = "test4value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
