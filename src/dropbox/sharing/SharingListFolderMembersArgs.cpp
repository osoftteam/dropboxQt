/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFolderMembersArgs.h"

namespace dropboxQt{

namespace sharing{
///ListFolderMembersArgs

ListFolderMembersArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderMembersArgs::toJson(QJsonObject& js)const{

    ListFolderMembersCursorArg::toJson(js);
    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
}

void ListFolderMembersArgs::fromJson(const QJsonObject& js){

    ListFolderMembersCursorArg::fromJson(js);
    m_shared_folder_id = js["shared_folder_id"].toString();
}

QString ListFolderMembersArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderMembersArgs ListFolderMembersArgs::EXAMPLE(){
    ListFolderMembersArgs rv;
    rv.shared_folder_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
