/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamAdminTier.h"

namespace dropboxQt{

namespace team{
///AdminTier

AdminTier::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void AdminTier::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case AdminTier_TEAM_ADMIN:{
            if(!name.isEmpty())
                js[name] = "team_admin";
        }break;
        case AdminTier_USER_MANAGEMENT_ADMIN:{
            if(!name.isEmpty())
                js[name] = "user_management_admin";
        }break;
        case AdminTier_SUPPORT_ADMIN:{
            if(!name.isEmpty())
                js[name] = "support_admin";
        }break;
        case AdminTier_MEMBER_ONLY:{
            if(!name.isEmpty())
                js[name] = "member_only";
        }break;
    }//switch
}

void AdminTier::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("team_admin") == 0){
        m_tag = AdminTier_TEAM_ADMIN;
    }
    if(s.compare("user_management_admin") == 0){
        m_tag = AdminTier_USER_MANAGEMENT_ADMIN;
    }
    if(s.compare("support_admin") == 0){
        m_tag = AdminTier_SUPPORT_ADMIN;
    }
    if(s.compare("member_only") == 0){
        m_tag = AdminTier_MEMBER_ONLY;
    }
}

QString AdminTier::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "AdminTier");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AdminTier AdminTier::EXAMPLE(){
    AdminTier rv;
    rv.m_tag = AdminTier_TEAM_ADMIN;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
