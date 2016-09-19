/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedAppError.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedAppError

RevokeLinkedAppError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeLinkedAppError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RevokeLinkedAppError_APP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "app_not_found";
        }break;
        case RevokeLinkedAppError_MEMBER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "member_not_found";
        }break;
        case RevokeLinkedAppError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void RevokeLinkedAppError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("app_not_found") == 0){
        m_tag = RevokeLinkedAppError_APP_NOT_FOUND;
    }
    if(s.compare("member_not_found") == 0){
        m_tag = RevokeLinkedAppError_MEMBER_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = RevokeLinkedAppError_OTHER;
    }
}

QString RevokeLinkedAppError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeLinkedAppError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedAppError RevokeLinkedAppError::EXAMPLE(){
    RevokeLinkedAppError rv;
    rv.m_tag = RevokeLinkedAppError_APP_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
