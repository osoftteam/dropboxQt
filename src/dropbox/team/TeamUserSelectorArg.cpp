/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{

namespace team{
///UserSelectorArg

UserSelectorArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UserSelectorArg::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorArg_TEAM_MEMBER_ID:{
            if(!name.isEmpty())
                js[name] = "team_member_id";
            if(!m_team_member_id.isEmpty())
                js["team_member_id"] = m_team_member_id;
        }break;
        case UserSelectorArg_EXTERNAL_ID:{
            if(!name.isEmpty())
                js[name] = "external_id";
            if(!m_external_id.isEmpty())
                js["external_id"] = m_external_id;
        }break;
        case UserSelectorArg_EMAIL:{
            if(!name.isEmpty())
                js[name] = "email";
            if(!m_email.isEmpty())
                js["email"] = m_email;
        }break;
    }//switch
}

void UserSelectorArg::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("team_member_id") == 0){
        m_tag = UserSelectorArg_TEAM_MEMBER_ID;
    }
    if(s.compare("external_id") == 0){
        m_tag = UserSelectorArg_EXTERNAL_ID;
    }
    if(s.compare("email") == 0){
        m_tag = UserSelectorArg_EMAIL;
    }
}

QString UserSelectorArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UserSelectorArg");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UserSelectorArg UserSelectorArg::EXAMPLE(){
    UserSelectorArg rv;
    rv.team_member_id = "test1value";
    rv.external_id = "test2value";
    rv.email = "test3value";
    rv.m_tag = UserSelectorArg_TEAM_MEMBER_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
