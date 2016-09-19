/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRevokeSharedLinkError.h"

namespace dropboxQt{

namespace sharing{
///RevokeSharedLinkError

RevokeSharedLinkError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeSharedLinkError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedLinkError_SHARED_LINK_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "shared_link_not_found";
        }break;
        case SharedLinkError_SHARED_LINK_ACCESS_DENIED:{
            if(!name.isEmpty())
                js[name] = "shared_link_access_denied";
        }break;
        case SharedLinkError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
        case RevokeSharedLinkError_SHARED_LINK_MALFORMED:{
            if(!name.isEmpty())
                js[name] = "shared_link_malformed";
        }break;
    }//switch
}

void RevokeSharedLinkError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("shared_link_not_found") == 0){
        m_tag = SharedLinkError_SHARED_LINK_NOT_FOUND;
    }
    if(s.compare("shared_link_access_denied") == 0){
        m_tag = SharedLinkError_SHARED_LINK_ACCESS_DENIED;
    }
    if(s.compare("other") == 0){
        m_tag = SharedLinkError_OTHER;
    }
    if(s.compare("shared_link_malformed") == 0){
        m_tag = RevokeSharedLinkError_SHARED_LINK_MALFORMED;
    }
}

QString RevokeSharedLinkError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeSharedLinkError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeSharedLinkError RevokeSharedLinkError::EXAMPLE(){
    RevokeSharedLinkError rv;
    rv.m_tag = RevokeSharedLinkError_SHARED_LINK_MALFORMED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
