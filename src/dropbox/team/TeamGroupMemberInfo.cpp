/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMemberInfo.h"

namespace dropboxQt{

namespace team{
///GroupMemberInfo

GroupMemberInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMemberInfo::toJson(QJsonObject& js)const{

    js["profile"] = (QJsonObject)m_profile;
    m_access_type.toJson(js, "access_type");
}

void GroupMemberInfo::fromJson(const QJsonObject& js){

    m_profile.fromJson(js);
    m_access_type.fromJson(js["access_type"].toObject());
}

QString GroupMemberInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMemberInfo GroupMemberInfo::EXAMPLE(){
    GroupMemberInfo rv;
    rv.profile = team::MemberProfile::EXAMPLE();
    rv.access_type = team::GroupAccessType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
