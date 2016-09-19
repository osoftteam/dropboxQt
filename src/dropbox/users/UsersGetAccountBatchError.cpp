/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersGetAccountBatchError.h"

namespace dropboxQt{

namespace users{
///GetAccountBatchError

GetAccountBatchError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetAccountBatchError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetAccountBatchError_NO_ACCOUNT:{
            if(!name.isEmpty())
                js[name] = "no_account";
            if(!m_no_account.isEmpty())
                js["no_account"] = m_no_account;
        }break;
        case GetAccountBatchError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GetAccountBatchError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("no_account") == 0){
        m_tag = GetAccountBatchError_NO_ACCOUNT;
    }
    if(s.compare("other") == 0){
        m_tag = GetAccountBatchError_OTHER;
    }
}

QString GetAccountBatchError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetAccountBatchError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetAccountBatchError GetAccountBatchError::EXAMPLE(){
    GetAccountBatchError rv;
    rv.no_account = "test1value";
    rv.m_tag = GetAccountBatchError_NO_ACCOUNT;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
