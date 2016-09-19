/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUpdateFolderMemberError.h"

namespace dropboxQt{

namespace sharing{
///UpdateFolderMemberError

UpdateFolderMemberError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UpdateFolderMemberError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UpdateFolderMemberError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case UpdateFolderMemberError_MEMBER_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("member_error");
            m_member_error.toJson(js, "member_error");
        }break;
        case UpdateFolderMemberError_NO_EXPLICIT_ACCESS:{
            if(!name.isEmpty())
                js[name] = QString("no_explicit_access");
            m_no_explicit_access.toJson(js, "no_explicit_access");
        }break;
        case UpdateFolderMemberError_INSUFFICIENT_PLAN:{
            if(!name.isEmpty())
                js[name] = QString("insufficient_plan");
        }break;
        case UpdateFolderMemberError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = QString("no_permission");
        }break;
        case UpdateFolderMemberError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void UpdateFolderMemberError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = UpdateFolderMemberError_ACCESS_ERROR;
    }
    if(s.compare("member_error") == 0){
        m_tag = UpdateFolderMemberError_MEMBER_ERROR;
    }
    if(s.compare("no_explicit_access") == 0){
        m_tag = UpdateFolderMemberError_NO_EXPLICIT_ACCESS;
    }
    if(s.compare("insufficient_plan") == 0){
        m_tag = UpdateFolderMemberError_INSUFFICIENT_PLAN;
    }
    if(s.compare("no_permission") == 0){
        m_tag = UpdateFolderMemberError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = UpdateFolderMemberError_OTHER;
    }
}

QString UpdateFolderMemberError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UpdateFolderMemberError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdateFolderMemberError UpdateFolderMemberError::EXAMPLE(){
    UpdateFolderMemberError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.member_error = sharing::SharedFolderMemberError::EXAMPLE();
    rv.no_explicit_access = sharing::AddFolderMemberError::EXAMPLE();
    rv.m_tag = UpdateFolderMemberError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
