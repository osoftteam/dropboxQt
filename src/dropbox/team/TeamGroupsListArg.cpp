/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsListArg.h"

namespace dropboxQt{

namespace team{
///GroupsListArg

GroupsListArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupsListArg::toJson(QJsonObject& js)const{

    js["limit"] = m_limit;
}

void GroupsListArg::fromJson(const QJsonObject& js){

    m_limit = js["limit"].toVariant().toInt();
}

QString GroupsListArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsListArg GroupsListArg::EXAMPLE(){
    GroupsListArg rv;
    rv.limit = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
