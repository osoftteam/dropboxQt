/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersDeactivateError.h"

namespace dropboxQt{

namespace team{
///MembersDeactivateError

MembersDeactivateError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersDeactivateError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("user_not_found");
        }break;
        case MembersDeactivateError_USER_NOT_IN_TEAM:{
            if(!name.isEmpty())
                js[name] = QString("user_not_in_team");
        }break;
        case MembersDeactivateError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void MembersDeactivateError::fromJson(const QJsonObject& js){

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
}

QString MembersDeactivateError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersDeactivateError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersDeactivateError MembersDeactivateError::EXAMPLE(){
    MembersDeactivateError rv;
    rv.m_tag = MembersDeactivateError_USER_NOT_IN_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
