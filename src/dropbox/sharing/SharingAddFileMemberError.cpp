/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingAddFileMemberError.h"

namespace dropboxQt{

namespace sharing{
///AddFileMemberError

AddFileMemberError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void AddFileMemberError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case AddFileMemberError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("user_error");
            m_user_error.toJson(js, "user_error");
        }break;
        case AddFileMemberError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case AddFileMemberError_RATE_LIMIT:{
            if(!name.isEmpty())
                js[name] = QString("rate_limit");
        }break;
        case AddFileMemberError_INVALID_COMMENT:{
            if(!name.isEmpty())
                js[name] = QString("invalid_comment");
        }break;
        case AddFileMemberError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void AddFileMemberError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = AddFileMemberError_USER_ERROR;
    }
    if(s.compare("access_error") == 0){
        m_tag = AddFileMemberError_ACCESS_ERROR;
    }
    if(s.compare("rate_limit") == 0){
        m_tag = AddFileMemberError_RATE_LIMIT;
    }
    if(s.compare("invalid_comment") == 0){
        m_tag = AddFileMemberError_INVALID_COMMENT;
    }
    if(s.compare("other") == 0){
        m_tag = AddFileMemberError_OTHER;
    }
}

QString AddFileMemberError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "AddFileMemberError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddFileMemberError AddFileMemberError::EXAMPLE(){
    AddFileMemberError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = AddFileMemberError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
