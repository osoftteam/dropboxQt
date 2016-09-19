/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersRecoverError.h"

namespace dropboxQt{

namespace team{
///MembersRecoverError

MembersRecoverError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersRecoverError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
        case MembersRecoverError_USER_UNRECOVERABLE:{
            if(!name.isEmpty())
                js[name] = "user_unrecoverable";
        }break;
        case MembersRecoverError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_not_in_team";
        }break;
        case MembersRecoverError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MembersRecoverError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
    if(s.compare("user_unrecoverable") == 0){
        m_tag = MembersRecoverError_USER_UNRECOVERABLE;
    }
    if(s.compare("user_not_in_team") == 0){
        m_tag = MembersRecoverError_USER_NOT_IN_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = MembersRecoverError_OTHER;
    }
}

QString MembersRecoverError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersRecoverError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersRecoverError MembersRecoverError::EXAMPLE(){
    MembersRecoverError rv;
    rv.m_tag = MembersRecoverError_USER_UNRECOVERABLE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
