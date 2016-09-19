/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersSetProfileError.h"

namespace dropboxQt{

namespace team{
///MembersSetProfileError

MembersSetProfileError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersSetProfileError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
        case MemberSelectorError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_not_in_team";
        }break;
        case MembersSetProfileError_EXTERNAL_ID_AND_NEW_EXTERNAL_ID_UNSAFE:{
            if(!name.isEmpty())
                js[name] = "external_id_and_new_external_id_unsafe";
        }break;
        case MembersSetProfileError_NO_NEW_DATA_SPECIFIED:{
            if(!name.isEmpty())
                js[name] = "no_new_data_specified";
        }break;
        case MembersSetProfileError_EMAIL_RESERVED_FOR_OTHER_USER:{
            if(!name.isEmpty())
                js[name] = "email_reserved_for_other_user";
        }break;
        case MembersSetProfileError_EXTERNAL_ID_USED_BY_OTHER_USER:{
            if(!name.isEmpty())
                js[name] = "external_id_used_by_other_user";
        }break;
        case MembersSetProfileError_SET_PROFILE_DISALLOWED:{
            if(!name.isEmpty())
                js[name] = "set_profile_disallowed";
        }break;
        case MembersSetProfileError_PARAM_CANNOT_BE_EMPTY:{
            if(!name.isEmpty())
                js[name] = "param_cannot_be_empty";
        }break;
        case MembersSetProfileError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MembersSetProfileError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
    if(s.compare("user_not_in_team") == 0){
        m_tag = MemberSelectorError_USER_NOT_IN_TEAM;
    }
    if(s.compare("external_id_and_new_external_id_unsafe") == 0){
        m_tag = MembersSetProfileError_EXTERNAL_ID_AND_NEW_EXTERNAL_ID_UNSAFE;
    }
    if(s.compare("no_new_data_specified") == 0){
        m_tag = MembersSetProfileError_NO_NEW_DATA_SPECIFIED;
    }
    if(s.compare("email_reserved_for_other_user") == 0){
        m_tag = MembersSetProfileError_EMAIL_RESERVED_FOR_OTHER_USER;
    }
    if(s.compare("external_id_used_by_other_user") == 0){
        m_tag = MembersSetProfileError_EXTERNAL_ID_USED_BY_OTHER_USER;
    }
    if(s.compare("set_profile_disallowed") == 0){
        m_tag = MembersSetProfileError_SET_PROFILE_DISALLOWED;
    }
    if(s.compare("param_cannot_be_empty") == 0){
        m_tag = MembersSetProfileError_PARAM_CANNOT_BE_EMPTY;
    }
    if(s.compare("other") == 0){
        m_tag = MembersSetProfileError_OTHER;
    }
}

QString MembersSetProfileError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersSetProfileError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersSetProfileError MembersSetProfileError::EXAMPLE(){
    MembersSetProfileError rv;
    rv.m_tag = MembersSetProfileError_EXTERNAL_ID_AND_NEW_EXTERNAL_ID_UNSAFE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
