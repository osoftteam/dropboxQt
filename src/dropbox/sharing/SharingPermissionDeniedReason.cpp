/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingPermissionDeniedReason.h"

namespace dropboxQt{

namespace sharing{
///PermissionDeniedReason

PermissionDeniedReason::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PermissionDeniedReason::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PermissionDeniedReason_USER_NOT_SAME_TEAM_AS_OWNER:{
            if(!name.isEmpty())
                js[name] = "user_not_same_team_as_owner";
        }break;
        case PermissionDeniedReason_USER_NOT_ALLOWED_BY_OWNER:{
            if(!name.isEmpty())
                js[name] = "user_not_allowed_by_owner";
        }break;
        case PermissionDeniedReason_TARGET_IS_INDIRECT_MEMBER:{
            if(!name.isEmpty())
                js[name] = "target_is_indirect_member";
        }break;
        case PermissionDeniedReason_TARGET_IS_OWNER:{
            if(!name.isEmpty())
                js[name] = "target_is_owner";
        }break;
        case PermissionDeniedReason_TARGET_IS_SELF:{
            if(!name.isEmpty())
                js[name] = "target_is_self";
        }break;
        case PermissionDeniedReason_TARGET_NOT_ACTIVE:{
            if(!name.isEmpty())
                js[name] = "target_not_active";
        }break;
        case PermissionDeniedReason_FOLDER_IS_LIMITED_TEAM_FOLDER:{
            if(!name.isEmpty())
                js[name] = "folder_is_limited_team_folder";
        }break;
        case PermissionDeniedReason_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void PermissionDeniedReason::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_same_team_as_owner") == 0){
        m_tag = PermissionDeniedReason_USER_NOT_SAME_TEAM_AS_OWNER;
    }
    if(s.compare("user_not_allowed_by_owner") == 0){
        m_tag = PermissionDeniedReason_USER_NOT_ALLOWED_BY_OWNER;
    }
    if(s.compare("target_is_indirect_member") == 0){
        m_tag = PermissionDeniedReason_TARGET_IS_INDIRECT_MEMBER;
    }
    if(s.compare("target_is_owner") == 0){
        m_tag = PermissionDeniedReason_TARGET_IS_OWNER;
    }
    if(s.compare("target_is_self") == 0){
        m_tag = PermissionDeniedReason_TARGET_IS_SELF;
    }
    if(s.compare("target_not_active") == 0){
        m_tag = PermissionDeniedReason_TARGET_NOT_ACTIVE;
    }
    if(s.compare("folder_is_limited_team_folder") == 0){
        m_tag = PermissionDeniedReason_FOLDER_IS_LIMITED_TEAM_FOLDER;
    }
    if(s.compare("other") == 0){
        m_tag = PermissionDeniedReason_OTHER;
    }
}

QString PermissionDeniedReason::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PermissionDeniedReason");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PermissionDeniedReason PermissionDeniedReason::EXAMPLE(){
    PermissionDeniedReason rv;
    rv.m_tag = PermissionDeniedReason_USER_NOT_SAME_TEAM_AS_OWNER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
