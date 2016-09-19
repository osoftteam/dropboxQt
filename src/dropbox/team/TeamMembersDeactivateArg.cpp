/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersDeactivateArg.h"

namespace dropboxQt{

namespace team{
///MembersDeactivateArg

MembersDeactivateArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersDeactivateArg::toJson(QJsonObject& js)const{

    m_user.toJson(js, "user");
    js["wipe_data"] = m_wipe_data;
}

void MembersDeactivateArg::fromJson(const QJsonObject& js){

    m_user.fromJson(js["user"].toObject());
    m_wipe_data = js["wipe_data"].toVariant().toBool();
}

QString MembersDeactivateArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersDeactivateArg MembersDeactivateArg::EXAMPLE(){
    MembersDeactivateArg rv;
    rv.user = team::UserSelectorArg::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
