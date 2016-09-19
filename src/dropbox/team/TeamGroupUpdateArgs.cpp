/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupUpdateArgs.h"

namespace dropboxQt{

namespace team{
///GroupUpdateArgs

GroupUpdateArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupUpdateArgs::toJson(QJsonObject& js)const{

    IncludeMembersArg::toJson(js);
    m_group.toJson(js, "group");
    if(!m_new_group_name.isEmpty())
        js["new_group_name"] = m_new_group_name;
    if(!m_new_group_external_id.isEmpty())
        js["new_group_external_id"] = m_new_group_external_id;
    m_new_group_management_type.toJson(js, "new_group_management_type");
}

void GroupUpdateArgs::fromJson(const QJsonObject& js){

    IncludeMembersArg::fromJson(js);
    m_group.fromJson(js["group"].toObject());
    m_new_group_name = js["new_group_name"].toString();
    m_new_group_external_id = js["new_group_external_id"].toString();
    m_new_group_management_type.fromJson(js["new_group_management_type"].toObject());
}

QString GroupUpdateArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupUpdateArgs GroupUpdateArgs::EXAMPLE(){
    GroupUpdateArgs rv;
    rv.group = team::GroupSelector::EXAMPLE();
    rv.new_group_name = "test2value";
    rv.new_group_external_id = "test3value";
    rv.new_group_management_type = team_common::GroupManagementType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
