/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersAddArg.h"

namespace dropboxQt{

namespace team{
///MembersAddArg

MembersAddArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersAddArg::toJson(QJsonObject& js)const{

    js["new_members"] = struct_list2jsonarray(m_new_members);
    js["force_async"] = m_force_async;
}

void MembersAddArg::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["new_members"].toArray(), m_new_members);
    m_force_async = js["force_async"].toVariant().toBool();
}

QString MembersAddArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersAddArg MembersAddArg::EXAMPLE(){
    MembersAddArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
