/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkAccessFailureReason.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkAccessFailureReason

SharedLinkAccessFailureReason::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedLinkAccessFailureReason::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedLinkAccessFailureReason_LOGIN_REQUIRED:{
            if(!name.isEmpty())
                js[name] = "login_required";
        }break;
        case SharedLinkAccessFailureReason_EMAIL_VERIFY_REQUIRED:{
            if(!name.isEmpty())
                js[name] = "email_verify_required";
        }break;
        case SharedLinkAccessFailureReason_PASSWORD_REQUIRED:{
            if(!name.isEmpty())
                js[name] = "password_required";
        }break;
        case SharedLinkAccessFailureReason_TEAM_ONLY:{
            if(!name.isEmpty())
                js[name] = "team_only";
        }break;
        case SharedLinkAccessFailureReason_OWNER_ONLY:{
            if(!name.isEmpty())
                js[name] = "owner_only";
        }break;
        case SharedLinkAccessFailureReason_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedLinkAccessFailureReason::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("login_required") == 0){
        m_tag = SharedLinkAccessFailureReason_LOGIN_REQUIRED;
    }
    if(s.compare("email_verify_required") == 0){
        m_tag = SharedLinkAccessFailureReason_EMAIL_VERIFY_REQUIRED;
    }
    if(s.compare("password_required") == 0){
        m_tag = SharedLinkAccessFailureReason_PASSWORD_REQUIRED;
    }
    if(s.compare("team_only") == 0){
        m_tag = SharedLinkAccessFailureReason_TEAM_ONLY;
    }
    if(s.compare("owner_only") == 0){
        m_tag = SharedLinkAccessFailureReason_OWNER_ONLY;
    }
    if(s.compare("other") == 0){
        m_tag = SharedLinkAccessFailureReason_OTHER;
    }
}

QString SharedLinkAccessFailureReason::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedLinkAccessFailureReason");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkAccessFailureReason SharedLinkAccessFailureReason::EXAMPLE(){
    SharedLinkAccessFailureReason rv;
    rv.m_tag = SharedLinkAccessFailureReason_LOGIN_REQUIRED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
