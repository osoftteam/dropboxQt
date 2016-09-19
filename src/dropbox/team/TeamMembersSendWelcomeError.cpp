/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersSendWelcomeError.h"

namespace dropboxQt{

namespace team{
///MembersSendWelcomeError

MembersSendWelcomeError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersSendWelcomeError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
        case MemberSelectorError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_not_in_team";
        }break;
        case MembersSendWelcomeError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void MembersSendWelcomeError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
    if(s.compare("user_not_in_team") == 0){
        m_tag = MemberSelectorError_USER_NOT_IN_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = MembersSendWelcomeError_OTHER;
    }
}

QString MembersSendWelcomeError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersSendWelcomeError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersSendWelcomeError MembersSendWelcomeError::EXAMPLE(){
    MembersSendWelcomeError rv;
    rv.m_tag = MembersSendWelcomeError_OTHER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
