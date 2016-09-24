/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRemoveFileMemberError.h"

namespace dropboxQt{

namespace sharing{
///RemoveFileMemberError

RemoveFileMemberError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RemoveFileMemberError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RemoveFileMemberError_USER_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("user_error");
            m_user_error.toJson(js, "user_error");
        }break;
        case RemoveFileMemberError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case RemoveFileMemberError_NO_EXPLICIT_ACCESS:{
            if(!name.isEmpty())
                js[name] = QString("no_explicit_access");
            js["no_explicit_access"] = (QJsonObject)m_no_explicit_access;
        }break;
        case RemoveFileMemberError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void RemoveFileMemberError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_error") == 0){
        m_tag = RemoveFileMemberError_USER_ERROR;
        m_user_error.fromJson(js["user_error"].toObject());
    }
    else if(s.compare("access_error") == 0){
        m_tag = RemoveFileMemberError_ACCESS_ERROR;
        m_access_error.fromJson(js["access_error"].toObject());
    }
    else if(s.compare("no_explicit_access") == 0){
        m_tag = RemoveFileMemberError_NO_EXPLICIT_ACCESS;
        m_no_explicit_access.fromJson(js);
    }
    else if(s.compare("other") == 0){
        m_tag = RemoveFileMemberError_OTHER;

    }
}

QString RemoveFileMemberError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RemoveFileMemberError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemoveFileMemberError RemoveFileMemberError::EXAMPLE(){
    RemoveFileMemberError rv;
    rv.user_error = sharing::SharingUserError::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.no_explicit_access = sharing::MemberAccessLevelResult::EXAMPLE();
    rv.m_tag = RemoveFileMemberError_USER_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
