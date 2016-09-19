/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionError.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionError

RevokeDeviceSessionError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeDeviceSessionError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RevokeDeviceSessionError_DEVICE_SESSION_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("device_session_not_found");
        }break;
        case RevokeDeviceSessionError_MEMBER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("member_not_found");
        }break;
        case RevokeDeviceSessionError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void RevokeDeviceSessionError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("device_session_not_found") == 0){
        m_tag = RevokeDeviceSessionError_DEVICE_SESSION_NOT_FOUND;
    }
    if(s.compare("member_not_found") == 0){
        m_tag = RevokeDeviceSessionError_MEMBER_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = RevokeDeviceSessionError_OTHER;
    }
}

QString RevokeDeviceSessionError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeDeviceSessionError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionError RevokeDeviceSessionError::EXAMPLE(){
    RevokeDeviceSessionError rv;
    rv.m_tag = RevokeDeviceSessionError_DEVICE_SESSION_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
