/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersGetInfoArgs.h"

namespace dropboxQt{

namespace team{
///MembersGetInfoArgs

MembersGetInfoArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersGetInfoArgs::toJson(QJsonObject& js)const{

    js["members"] = struct_list2jsonarray(m_members);
}

void MembersGetInfoArgs::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["members"].toArray(), m_members);
}

QString MembersGetInfoArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersGetInfoArgs MembersGetInfoArgs::EXAMPLE(){
    MembersGetInfoArgs rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
