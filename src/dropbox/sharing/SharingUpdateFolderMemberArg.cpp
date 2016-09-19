/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUpdateFolderMemberArg.h"

namespace dropboxQt{

namespace sharing{
///UpdateFolderMemberArg

UpdateFolderMemberArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UpdateFolderMemberArg::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = QString(m_shared_folder_id);
    m_member.toJson(js, "member");
    m_access_level.toJson(js, "access_level");
}

void UpdateFolderMemberArg::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    m_member.fromJson(js["member"].toObject());
    m_access_level.fromJson(js["access_level"].toObject());
}

QString UpdateFolderMemberArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdateFolderMemberArg UpdateFolderMemberArg::EXAMPLE(){
    UpdateFolderMemberArg rv;
    rv.shared_folder_id = "test1value";
    rv.member = sharing::MemberSelector::EXAMPLE();
    rv.access_level = sharing::AccessLevel::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
