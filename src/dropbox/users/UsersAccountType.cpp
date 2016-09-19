/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersAccountType.h"

namespace dropboxQt{

namespace users{
///AccountType

AccountType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void AccountType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case AccountType_BASIC:{
            if(!name.isEmpty())
                js[name] = "basic";
        }break;
        case AccountType_PRO:{
            if(!name.isEmpty())
                js[name] = "pro";
        }break;
        case AccountType_BUSINESS:{
            if(!name.isEmpty())
                js[name] = "business";
        }break;
    }//switch
}

void AccountType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("basic") == 0){
        m_tag = AccountType_BASIC;
    }
    if(s.compare("pro") == 0){
        m_tag = AccountType_PRO;
    }
    if(s.compare("business") == 0){
        m_tag = AccountType_BUSINESS;
    }
}

QString AccountType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "AccountType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AccountType AccountType::EXAMPLE(){
    AccountType rv;
    rv.m_tag = AccountType_BASIC;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
