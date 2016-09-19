/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersRecoverArg.h"

namespace dropboxQt{

namespace team{
///MembersRecoverArg

MembersRecoverArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersRecoverArg::toJson(QJsonObject& js)const{

    m_user.toJson(js, "user");
}

void MembersRecoverArg::fromJson(const QJsonObject& js){

    m_user.fromJson(js["user"].toObject());
}

QString MembersRecoverArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersRecoverArg MembersRecoverArg::EXAMPLE(){
    MembersRecoverArg rv;
    rv.user = team::UserSelectorArg::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
