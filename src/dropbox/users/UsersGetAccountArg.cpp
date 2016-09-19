/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersGetAccountArg.h"

namespace dropboxQt{

namespace users{
///GetAccountArg

GetAccountArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetAccountArg::toJson(QJsonObject& js)const{

    if(!m_account_id.isEmpty())
        js["account_id"] = QString(m_account_id);
}

void GetAccountArg::fromJson(const QJsonObject& js){

    m_account_id = js["account_id"].toString();
}

QString GetAccountArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetAccountArg GetAccountArg::EXAMPLE(){
    GetAccountArg rv;
    rv.account_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
