/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamUserSelectorError.h"

namespace dropboxQt{

namespace team{
///UserSelectorError

UserSelectorError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UserSelectorError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UserSelectorError_USER_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "user_not_found";
        }break;
    }//switch
}

void UserSelectorError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("user_not_found") == 0){
        m_tag = UserSelectorError_USER_NOT_FOUND;
    }
}

QString UserSelectorError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UserSelectorError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UserSelectorError UserSelectorError::EXAMPLE(){
    UserSelectorError rv;
    rv.m_tag = UserSelectorError_USER_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
