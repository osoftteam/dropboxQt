/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsMembersListContinueError.h"

namespace dropboxQt{

namespace team{
///GroupsMembersListContinueError

GroupsMembersListContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupsMembersListContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupsMembersListContinueError_INVALID_CURSOR:{
            if(!name.isEmpty())
                js[name] = "invalid_cursor";
        }break;
        case GroupsMembersListContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GroupsMembersListContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_cursor") == 0){
        m_tag = GroupsMembersListContinueError_INVALID_CURSOR;
    }
    if(s.compare("other") == 0){
        m_tag = GroupsMembersListContinueError_OTHER;
    }
}

QString GroupsMembersListContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupsMembersListContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsMembersListContinueError GroupsMembersListContinueError::EXAMPLE(){
    GroupsMembersListContinueError rv;
    rv.m_tag = GroupsMembersListContinueError_INVALID_CURSOR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
