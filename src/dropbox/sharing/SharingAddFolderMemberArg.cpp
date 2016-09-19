/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingAddFolderMemberArg.h"

namespace dropboxQt{

namespace sharing{
///AddFolderMemberArg

AddFolderMemberArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void AddFolderMemberArg::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
    js["members"] = struct_list2jsonarray(m_members);
    js["quiet"] = m_quiet;
    if(!m_custom_message.isEmpty())
        js["custom_message"] = m_custom_message;
}

void AddFolderMemberArg::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    jsonarray2struct_list(js["members"].toArray(), m_members);
    m_quiet = js["quiet"].toVariant().toBool();
    m_custom_message = js["custom_message"].toString();
}

QString AddFolderMemberArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddFolderMemberArg AddFolderMemberArg::EXAMPLE(){
    AddFolderMemberArg rv;
    rv.shared_folder_id = "test1value";
    rv.custom_message = "test4value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
