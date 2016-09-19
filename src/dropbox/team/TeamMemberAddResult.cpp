/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMemberAddResult.h"

namespace dropboxQt{

namespace team{
///MemberAddResult

MemberAddResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MemberAddResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case MemberAddResult_SUCCESS:{
            if(!name.isEmpty())
                js[name] = "success";
            js["success"] = (QJsonObject)m_success;
        }break;
        case MemberAddResult_TEAM_LICENSE_LIMIT:{
            if(!name.isEmpty())
                js[name] = "team_license_limit";
            if(!m_team_license_limit.isEmpty())
                js["team_license_limit"] = m_team_license_limit;
        }break;
        case MemberAddResult_FREE_TEAM_MEMBER_LIMIT_REACHED:{
            if(!name.isEmpty())
                js[name] = "free_team_member_limit_reached";
            if(!m_free_team_member_limit_reached.isEmpty())
                js["free_team_member_limit_reached"] = m_free_team_member_limit_reached;
        }break;
        case MemberAddResult_USER_ALREADY_ON_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_already_on_team";
            if(!m_user_already_on_team.isEmpty())
                js["user_already_on_team"] = m_user_already_on_team;
        }break;
        case MemberAddResult_USER_ON_ANOTHER_TEAM:{
            if(!name.isEmpty())
                js[name] = "user_on_another_team";
            if(!m_user_on_another_team.isEmpty())
                js["user_on_another_team"] = m_user_on_another_team;
        }break;
        case MemberAddResult_USER_ALREADY_PAIRED:{
            if(!name.isEmpty())
                js[name] = "user_already_paired";
            if(!m_user_already_paired.isEmpty())
                js["user_already_paired"] = m_user_already_paired;
        }break;
        case MemberAddResult_USER_MIGRATION_FAILED:{
            if(!name.isEmpty())
                js[name] = "user_migration_failed";
            if(!m_user_migration_failed.isEmpty())
                js["user_migration_failed"] = m_user_migration_failed;
        }break;
        case MemberAddResult_DUPLICATE_EXTERNAL_MEMBER_ID:{
            if(!name.isEmpty())
                js[name] = "duplicate_external_member_id";
            if(!m_duplicate_external_member_id.isEmpty())
                js["duplicate_external_member_id"] = m_duplicate_external_member_id;
        }break;
        case MemberAddResult_USER_CREATION_FAILED:{
            if(!name.isEmpty())
                js[name] = "user_creation_failed";
            if(!m_user_creation_failed.isEmpty())
                js["user_creation_failed"] = m_user_creation_failed;
        }break;
    }//switch
}

void MemberAddResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("success") == 0){
        m_tag = MemberAddResult_SUCCESS;
    }
    if(s.compare("team_license_limit") == 0){
        m_tag = MemberAddResult_TEAM_LICENSE_LIMIT;
    }
    if(s.compare("free_team_member_limit_reached") == 0){
        m_tag = MemberAddResult_FREE_TEAM_MEMBER_LIMIT_REACHED;
    }
    if(s.compare("user_already_on_team") == 0){
        m_tag = MemberAddResult_USER_ALREADY_ON_TEAM;
    }
    if(s.compare("user_on_another_team") == 0){
        m_tag = MemberAddResult_USER_ON_ANOTHER_TEAM;
    }
    if(s.compare("user_already_paired") == 0){
        m_tag = MemberAddResult_USER_ALREADY_PAIRED;
    }
    if(s.compare("user_migration_failed") == 0){
        m_tag = MemberAddResult_USER_MIGRATION_FAILED;
    }
    if(s.compare("duplicate_external_member_id") == 0){
        m_tag = MemberAddResult_DUPLICATE_EXTERNAL_MEMBER_ID;
    }
    if(s.compare("user_creation_failed") == 0){
        m_tag = MemberAddResult_USER_CREATION_FAILED;
    }
}

QString MemberAddResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MemberAddResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberAddResult MemberAddResult::EXAMPLE(){
    MemberAddResult rv;
    rv.success = team::TeamMemberInfo::EXAMPLE();
    rv.team_license_limit = "test2value";
    rv.free_team_member_limit_reached = "test3value";
    rv.user_already_on_team = "test4value";
    rv.user_on_another_team = "test5value";
    rv.user_already_paired = "test6value";
    rv.user_migration_failed = "test7value";
    rv.duplicate_external_member_id = "test8value";
    rv.user_creation_failed = "test9value";
    rv.m_tag = MemberAddResult_SUCCESS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
