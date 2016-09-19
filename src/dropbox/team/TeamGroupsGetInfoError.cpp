/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsGetInfoError.h"

namespace dropboxQt{

namespace team{
///GroupsGetInfoError

GroupsGetInfoError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupsGetInfoError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupsGetInfoError_GROUP_NOT_ON_TEAM:{
            if(!name.isEmpty())
                js[name] = "group_not_on_team";
        }break;
        case GroupsGetInfoError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GroupsGetInfoError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("group_not_on_team") == 0){
        m_tag = GroupsGetInfoError_GROUP_NOT_ON_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = GroupsGetInfoError_OTHER;
    }
}

QString GroupsGetInfoError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupsGetInfoError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsGetInfoError GroupsGetInfoError::EXAMPLE(){
    GroupsGetInfoError rv;
    rv.m_tag = GroupsGetInfoError_GROUP_NOT_ON_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
