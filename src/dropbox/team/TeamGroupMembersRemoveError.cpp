/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupMembersRemoveError.h"

namespace dropboxQt{

namespace team{
///GroupMembersRemoveError

GroupMembersRemoveError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupMembersRemoveError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupSelectorError_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("group_not_found");
        }break;
        case GroupSelectorError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
        case GroupMembersSelectorError_MEMBER_NOT_IN_GROUP:{
            if(!name.isEmpty())
                js[name] = QString("member_not_in_group");
        }break;
        case GroupMembersRemoveError_GROUP_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = QString("group_not_in_team");
        }break;
    }//switch
}

void GroupMembersRemoveError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_found") == 0){
        m_tag = GroupSelectorError_GROUP_NOT_FOUND;

    }
    else if(s.compare("other") == 0){
        m_tag = GroupSelectorError_OTHER;

    }
    if(s.compare("member_not_in_group") == 0){
        m_tag = GroupMembersSelectorError_MEMBER_NOT_IN_GROUP;

    }
    if(s.compare("group_not_in_team") == 0){
        m_tag = GroupMembersRemoveError_GROUP_NOT_IN_TEAM;

    }
}

QString GroupMembersRemoveError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupMembersRemoveError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupMembersRemoveError GroupMembersRemoveError::EXAMPLE(){
    GroupMembersRemoveError rv;
    rv.m_tag = GroupMembersRemoveError_GROUP_NOT_IN_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
