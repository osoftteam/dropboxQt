/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersSetPermissionsArg.h"

namespace dropboxQt{

namespace team{
///MembersSetPermissionsArg

MembersSetPermissionsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersSetPermissionsArg::toJson(QJsonObject& js)const{

    m_user.toJson(js, "user");
    m_new_role.toJson(js, "new_role");
}

void MembersSetPermissionsArg::fromJson(const QJsonObject& js){

    m_user.fromJson(js["user"].toObject());
    m_new_role.fromJson(js["new_role"].toObject());
}

QString MembersSetPermissionsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersSetPermissionsArg MembersSetPermissionsArg::EXAMPLE(){
    MembersSetPermissionsArg rv;
    rv.user = team::UserSelectorArg::EXAMPLE();
    rv.new_role = team::AdminTier::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
