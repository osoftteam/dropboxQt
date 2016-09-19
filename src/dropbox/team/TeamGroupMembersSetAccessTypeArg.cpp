/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersSetAccessTypeArg.h"

namespace dropboxQt{

namespace team{
///GroupMembersSetAccessTypeArg

GroupMembersSetAccessTypeArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembersSetAccessTypeArg::toJson(QJsonObject& js)const{

    GroupMemberSelector::toJson(js);
    m_access_type.toJson(js, "access_type");
    js["return_members"] = m_return_members;
}

void GroupMembersSetAccessTypeArg::fromJson(const QJsonObject& js){

    GroupMemberSelector::fromJson(js);
    m_access_type.fromJson(js["access_type"].toObject());
    m_return_members = js["return_members"].toVariant().toBool();
}

QString GroupMembersSetAccessTypeArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersSetAccessTypeArg GroupMembersSetAccessTypeArg::EXAMPLE(){
    GroupMembersSetAccessTypeArg rv;
    rv.access_type = team::GroupAccessType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
