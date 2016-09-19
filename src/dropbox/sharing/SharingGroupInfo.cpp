/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGroupInfo.h"

namespace dropboxQt{

namespace sharing{
///GroupInfo

GroupInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupInfo::toJson(QJsonObject& js)const{

    GroupSummary::toJson(js);
    m_group_type.toJson(js, "group_type");
    js["is_owner"] = m_is_owner;
    js["same_team"] = m_same_team;
}

void GroupInfo::fromJson(const QJsonObject& js){

    GroupSummary::fromJson(js);
    m_group_type.fromJson(js["group_type"].toObject());
    m_is_owner = js["is_owner"].toVariant().toBool();
    m_same_team = js["same_team"].toVariant().toBool();
}

QString GroupInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupInfo GroupInfo::EXAMPLE(){
    GroupInfo rv;
    rv.group_type = team_common::GroupType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
