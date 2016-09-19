/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersAddArg.h"

namespace dropboxQt{

namespace team{
///GroupMembersAddArg

GroupMembersAddArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupMembersAddArg::toJson(QJsonObject& js)const{

    IncludeMembersArg::toJson(js);
    m_group.toJson(js, "group");
    js["members"] = struct_list2jsonarray(m_members);
}

void GroupMembersAddArg::fromJson(const QJsonObject& js){

    IncludeMembersArg::fromJson(js);
    m_group.fromJson(js["group"].toObject());
    jsonarray2struct_list(js["members"].toArray(), m_members);
}

QString GroupMembersAddArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersAddArg GroupMembersAddArg::EXAMPLE(){
    GroupMembersAddArg rv;
    rv.group = team::GroupSelector::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
