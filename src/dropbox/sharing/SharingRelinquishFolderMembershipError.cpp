/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRelinquishFolderMembershipError.h"

namespace dropboxQt{

namespace sharing{
///RelinquishFolderMembershipError

RelinquishFolderMembershipError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RelinquishFolderMembershipError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RelinquishFolderMembershipError_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case RelinquishFolderMembershipError_FOLDER_OWNER:{
            if(!name.isEmpty())
                js[name] = "folder_owner";
        }break;
        case RelinquishFolderMembershipError_MOUNTED:{
            if(!name.isEmpty())
                js[name] = "mounted";
        }break;
        case RelinquishFolderMembershipError_GROUP_ACCESS:{
            if(!name.isEmpty())
                js[name] = "group_access";
        }break;
        case RelinquishFolderMembershipError_TEAM_FOLDER:{
            if(!name.isEmpty())
                js[name] = "team_folder";
        }break;
        case RelinquishFolderMembershipError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case RelinquishFolderMembershipError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void RelinquishFolderMembershipError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("access_error") == 0){
        m_tag = RelinquishFolderMembershipError_ACCESS_ERROR;
    }
    if(s.compare("folder_owner") == 0){
        m_tag = RelinquishFolderMembershipError_FOLDER_OWNER;
    }
    if(s.compare("mounted") == 0){
        m_tag = RelinquishFolderMembershipError_MOUNTED;
    }
    if(s.compare("group_access") == 0){
        m_tag = RelinquishFolderMembershipError_GROUP_ACCESS;
    }
    if(s.compare("team_folder") == 0){
        m_tag = RelinquishFolderMembershipError_TEAM_FOLDER;
    }
    if(s.compare("no_permission") == 0){
        m_tag = RelinquishFolderMembershipError_NO_PERMISSION;
    }
    if(s.compare("other") == 0){
        m_tag = RelinquishFolderMembershipError_OTHER;
    }
}

QString RelinquishFolderMembershipError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RelinquishFolderMembershipError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RelinquishFolderMembershipError RelinquishFolderMembershipError::EXAMPLE(){
    RelinquishFolderMembershipError rv;
    rv.access_error = sharing::SharedFolderAccessError::EXAMPLE();
    rv.m_tag = RelinquishFolderMembershipError_ACCESS_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
