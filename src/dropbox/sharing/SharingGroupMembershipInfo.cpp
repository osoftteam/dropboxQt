/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGroupMembershipInfo.h"

namespace dropboxQt{

namespace sharing{
///GroupMembershipInfo

GroupMembershipInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembershipInfo::toJson(QJsonObject& js)const{

    MembershipInfo::toJson(js);
    js["group"] = (QJsonObject)m_group;
}

void GroupMembershipInfo::fromJson(const QJsonObject& js){

    MembershipInfo::fromJson(js);
    m_group.fromJson(js);
}

QString GroupMembershipInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembershipInfo GroupMembershipInfo::EXAMPLE(){
    GroupMembershipInfo rv;
    rv.group = sharing::GroupInfo::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
