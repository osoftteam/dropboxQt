/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersTeamSpaceAllocation.h"

namespace dropboxQt{

namespace users{
///TeamSpaceAllocation

TeamSpaceAllocation::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamSpaceAllocation::toJson(QJsonObject& js)const{

    js["used"] = m_used;
    js["allocated"] = m_allocated;
}

void TeamSpaceAllocation::fromJson(const QJsonObject& js){

    m_used = js["used"].toVariant().toInt();
    m_allocated = js["allocated"].toVariant().toInt();
}

QString TeamSpaceAllocation::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamSpaceAllocation TeamSpaceAllocation::EXAMPLE(){
    TeamSpaceAllocation rv;
    rv.used = 1;
    rv.allocated = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
