/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRemoveFolderMemberError.h"

namespace dropboxQt{

namespace sharing{
///RemoveFolderMemberError

RemoveFolderMemberError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RemoveFolderMemberError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RemoveFolderMemberError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case RemoveFolderMemberError_MEMBER_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("member_error");
            m_member_error.toJson(js, "member_error");
        }break;
        case RemoveFolderMemberError_FOLDER_OWNER:{
            if(!name.isEmpty())
                js[name] = QString("folder_owner");
        }break;
        case RemoveFolderMemberError_GROUP_ACCESS:{
            if(!name.isEmpty())
                js[name] = QString("group_access");
        }break;
        case RemoveFolderMemberError_TEAM_FOLDER:{
            if(!name.isEmpty())
                js[name] = QString("team_folder");
        }break;
        case RemoveFolderMemberError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = QString("no_permission");
        }break;
        case RemoveFolderMemberError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void RemoveFolderMemberError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = RemoveFolderMemberError_ACCESS_ERROR;
    }
    if(s.compare("member_error") == 0){
        m_tag = RemoveFolderMemberError_MEMBER_ERROR;
    }
    if(s.compare("folder_owner") == 0){
        m_tag = RemoveFolderMemberError_FOLDER_OWNER;
    }
    if(s.compare("group_access") == 0){
        m_tag = RemoveFolderMemberError_GROUP_ACCESS;
    }
    if(s.compare("team_folder") == 0){
        m_tag = RemoveFolderMemberError_TEAM_FOLDER;
    }
    if(s.compare("no_permission") == 0){
        m_tag = RemoveFolderMemberError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = RemoveFolderMemberError_OTHER;
    }
}

QString RemoveFolderMemberError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RemoveFolderMemberError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemoveFolderMemberError RemoveFolderMemberError::EXAMPLE(){
    RemoveFolderMemberError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.member_error = sharing::SharedFolderMemberError::EXAMPLE();
    rv.m_tag = RemoveFolderMemberError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
