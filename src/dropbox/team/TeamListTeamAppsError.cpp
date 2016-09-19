/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListTeamAppsError.h"

namespace dropboxQt{

namespace team{
///ListTeamAppsError

ListTeamAppsError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListTeamAppsError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListTeamAppsError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListTeamAppsError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListTeamAppsError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("reset") == 0){
        m_tag = ListTeamAppsError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListTeamAppsError_OTHER;
    }
}

QString ListTeamAppsError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListTeamAppsError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListTeamAppsError ListTeamAppsError::EXAMPLE(){
    ListTeamAppsError rv;
    rv.m_tag = ListTeamAppsError_RESET;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
