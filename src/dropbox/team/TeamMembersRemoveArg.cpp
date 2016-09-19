/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersRemoveArg.h"

namespace dropboxQt{

namespace team{
///MembersRemoveArg

MembersRemoveArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembersRemoveArg::toJson(QJsonObject& js)const{

    MembersDeactivateArg::toJson(js);
    m_transfer_dest_id.toJson(js, "transfer_dest_id");
    m_transfer_admin_id.toJson(js, "transfer_admin_id");
    js["keep_account"] = m_keep_account;
}

void MembersRemoveArg::fromJson(const QJsonObject& js){

    MembersDeactivateArg::fromJson(js);
    m_transfer_dest_id.fromJson(js["transfer_dest_id"].toObject());
    m_transfer_admin_id.fromJson(js["transfer_admin_id"].toObject());
    m_keep_account = js["keep_account"].toVariant().toBool();
}

QString MembersRemoveArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersRemoveArg MembersRemoveArg::EXAMPLE(){
    MembersRemoveArg rv;
    rv.transfer_dest_id = team::UserSelectorArg::EXAMPLE();
    rv.transfer_admin_id = team::UserSelectorArg::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
