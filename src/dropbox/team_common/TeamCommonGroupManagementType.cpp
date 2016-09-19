/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#include "dropbox/team_common/TeamCommonGroupManagementType.h"

namespace dropboxQt{

namespace team_common{
///GroupManagementType

GroupManagementType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupManagementType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupManagementType_COMPANY_MANAGED:{
            if(!name.isEmpty())
                js[name] = "company_managed";
        }break;
        case GroupManagementType_USER_MANAGED:{
            if(!name.isEmpty())
                js[name] = "user_managed";
        }break;
        case GroupManagementType_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GroupManagementType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("company_managed") == 0){
        m_tag = GroupManagementType_COMPANY_MANAGED;
    }
    if(s.compare("user_managed") == 0){
        m_tag = GroupManagementType_USER_MANAGED;
    }
    if(s.compare("other") == 0){
        m_tag = GroupManagementType_OTHER;
    }
}

QString GroupManagementType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupManagementType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupManagementType GroupManagementType::EXAMPLE(){
    GroupManagementType rv;
    rv.m_tag = GroupManagementType_COMPANY_MANAGED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_common
}//dropboxQt
