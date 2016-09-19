/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersUnsuspendError.h"

namespace dropboxQt{

namespace team{
///MembersUnsuspendError

MembersUnsuspendError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersUnsuspendError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
        case MembersDeactivateError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_not_in_team";
        }break;
        case MembersDeactivateError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
        case MembersUnsuspendError_UNSUSPEND_NON_SUSPENDED_MEMBER:{
            if(!name.isEmpty())
                js[name] = "unsuspend_non_suspended_member";
        }break;
        case MembersUnsuspendError_TEAM_LICENSE_LIMIT:{
            if(!name.isEmpty())
                js[name] = "team_license_limit";
        }break;
    }//switch
}

void MembersUnsuspendError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
    if(s.compare("user_not_in_team") == 0){
        m_tag = MembersDeactivateError_USER_NOT_IN_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = MembersDeactivateError_OTHER;
    }
    if(s.compare("unsuspend_non_suspended_member") == 0){
        m_tag = MembersUnsuspendError_UNSUSPEND_NON_SUSPENDED_MEMBER;
    }
    if(s.compare("team_license_limit") == 0){
        m_tag = MembersUnsuspendError_TEAM_LICENSE_LIMIT;
    }
}

QString MembersUnsuspendError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersUnsuspendError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersUnsuspendError MembersUnsuspendError::EXAMPLE(){
    MembersUnsuspendError rv;
    rv.m_tag = MembersUnsuspendError_UNSUSPEND_NON_SUSPENDED_MEMBER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
