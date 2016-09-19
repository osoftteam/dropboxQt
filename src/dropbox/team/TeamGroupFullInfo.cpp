/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupFullInfo.h"

namespace dropboxQt{

namespace team{
///GroupFullInfo

GroupFullInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupFullInfo::toJson(QJsonObject& js)const{

    GroupSummary::toJson(js);
    js["members"] = struct_list2jsonarray(m_members);
    js["created"] = m_created;
}

void GroupFullInfo::fromJson(const QJsonObject& js){

    GroupSummary::fromJson(js);
    jsonarray2struct_list(js["members"].toArray(), m_members);
    m_created = js["created"].toVariant().toInt();
}

QString GroupFullInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupFullInfo GroupFullInfo::EXAMPLE(){
    GroupFullInfo rv;
    rv.created = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
