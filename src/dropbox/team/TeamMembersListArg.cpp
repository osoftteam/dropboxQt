/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersListArg.h"

namespace dropboxQt{

namespace team{
///MembersListArg

MembersListArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersListArg::toJson(QJsonObject& js)const{

    js["limit"] = m_limit;
    js["include_removed"] = m_include_removed;
}

void MembersListArg::fromJson(const QJsonObject& js){

    m_limit = js["limit"].toVariant().toInt();
    m_include_removed = js["include_removed"].toVariant().toBool();
}

QString MembersListArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersListArg MembersListArg::EXAMPLE(){
    MembersListArg rv;
    rv.limit = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
