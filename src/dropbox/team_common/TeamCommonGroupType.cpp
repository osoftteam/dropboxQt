/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#include "dropbox/team_common/TeamCommonGroupType.h"

namespace dropboxQt{

namespace team_common{
///GroupType

GroupType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GroupType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GroupType_TEAM:{
            if(!name.isEmpty())
                js[name] = QString("team");
        }break;
        case GroupType_USER_MANAGED:{
            if(!name.isEmpty())
                js[name] = QString("user_managed");
        }break;
        case GroupType_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void GroupType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("team") == 0){
        m_tag = GroupType_TEAM;
    }
    if(s.compare("user_managed") == 0){
        m_tag = GroupType_USER_MANAGED;
    }
    if(s.compare("other") == 0){
        m_tag = GroupType_OTHER;
    }
}

QString GroupType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GroupType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupType GroupType::EXAMPLE(){
    GroupType rv;
    rv.m_tag = GroupType_TEAM;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_common
}//dropboxQt
