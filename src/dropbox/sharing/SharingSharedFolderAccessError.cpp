/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedFolderAccessError.h"

namespace dropboxQt{

namespace sharing{
///SharedFolderAccessError

SharedFolderAccessError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedFolderAccessError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedFolderAccessError_INVALID_ID:{
            if(!name.isEmpty())
                js[name] = "invalid_id";
        }break;
        case SharedFolderAccessError_NOT_A_MEMBER:{
            if(!name.isEmpty())
                js[name] = "not_a_member";
        }break;
        case SharedFolderAccessError_EMAIL_UNVERIFIED:{
            if(!name.isEmpty())
                js[name] = "email_unverified";
        }break;
        case SharedFolderAccessError_UNMOUNTED:{
            if(!name.isEmpty())
                js[name] = "unmounted";
        }break;
        case SharedFolderAccessError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedFolderAccessError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_id") == 0){
        m_tag = SharedFolderAccessError_INVALID_ID;
    }
    if(s.compare("not_a_member") == 0){
        m_tag = SharedFolderAccessError_NOT_A_MEMBER;
    }
    if(s.compare("email_unverified") == 0){
        m_tag = SharedFolderAccessError_EMAIL_UNVERIFIED;
    }
    if(s.compare("unmounted") == 0){
        m_tag = SharedFolderAccessError_UNMOUNTED;
    }
    if(s.compare("other") == 0){
        m_tag = SharedFolderAccessError_OTHER;
    }
}

QString SharedFolderAccessError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedFolderAccessError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedFolderAccessError SharedFolderAccessError::EXAMPLE(){
    SharedFolderAccessError rv;
    rv.m_tag = SharedFolderAccessError_INVALID_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
