/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharingUserError.h"

namespace dropboxQt{

namespace sharing{
///SharingUserError

SharingUserError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharingUserError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharingUserError_EMAIL_UNVERIFIED:{
            if(!name.isEmpty())
                js[name] = "email_unverified";
        }break;
        case SharingUserError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharingUserError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("email_unverified") == 0){
        m_tag = SharingUserError_EMAIL_UNVERIFIED;
    }
    if(s.compare("other") == 0){
        m_tag = SharingUserError_OTHER;
    }
}

QString SharingUserError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharingUserError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharingUserError SharingUserError::EXAMPLE(){
    SharingUserError rv;
    rv.m_tag = SharingUserError_EMAIL_UNVERIFIED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
