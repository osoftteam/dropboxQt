/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupCreateArg.h"

namespace dropboxQt{

namespace team{
///GroupCreateArg

GroupCreateArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupCreateArg::toJson(QJsonObject& js)const{

    if(!m_group_name.isEmpty())
        js["group_name"] = QString(m_group_name);
    if(!m_group_external_id.isEmpty())
        js["group_external_id"] = QString(m_group_external_id);
    m_group_management_type.toJson(js, "group_management_type");
}

void GroupCreateArg::fromJson(const QJsonObject& js){

    m_group_name = js["group_name"].toString();
    m_group_external_id = js["group_external_id"].toString();
    m_group_management_type.fromJson(js["group_management_type"].toObject());
}

QString GroupCreateArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupCreateArg GroupCreateArg::EXAMPLE(){
    GroupCreateArg rv;
    rv.group_name = "test1value";
    rv.group_external_id = "test2value";
    rv.group_management_type = team_common::GroupManagementType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
