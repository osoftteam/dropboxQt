/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersSpaceAllocation.h"

namespace dropboxQt{

namespace users{
///SpaceAllocation

SpaceAllocation::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SpaceAllocation::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SpaceAllocation_INDIVIDUAL:{
            if(!name.isEmpty())
                js[name] = QString("individual");
            js["individual"] = (QJsonObject)m_individual;
        }break;
        case SpaceAllocation_TEAM:{
            if(!name.isEmpty())
                js[name] = QString("team");
            js["team"] = (QJsonObject)m_team;
        }break;
        case SpaceAllocation_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void SpaceAllocation::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("individual") == 0){
        m_tag = SpaceAllocation_INDIVIDUAL;
    }
    if(s.compare("team") == 0){
        m_tag = SpaceAllocation_TEAM;
    }
    if(s.compare("other") == 0){
        m_tag = SpaceAllocation_OTHER;
    }
}

QString SpaceAllocation::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SpaceAllocation");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SpaceAllocation SpaceAllocation::EXAMPLE(){
    SpaceAllocation rv;
    rv.individual = users::IndividualSpaceAllocation::EXAMPLE();
    rv.team = users::TeamSpaceAllocation::EXAMPLE();
    rv.m_tag = SpaceAllocation_INDIVIDUAL;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
