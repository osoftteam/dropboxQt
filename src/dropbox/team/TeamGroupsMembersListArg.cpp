/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsMembersListArg.h"

namespace dropboxQt{

namespace team{
///GroupsMembersListArg

GroupsMembersListArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupsMembersListArg::toJson(QJsonObject& js)const{

    m_group.toJson(js, "group");
    js["limit"] = m_limit;
}

void GroupsMembersListArg::fromJson(const QJsonObject& js){

    m_group.fromJson(js["group"].toObject());
    m_limit = js["limit"].toVariant().toInt();
}

QString GroupsMembersListArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsMembersListArg GroupsMembersListArg::EXAMPLE(){
    GroupsMembersListArg rv;
    rv.group = team::GroupSelector::EXAMPLE();
    rv.limit = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
