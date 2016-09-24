/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamListTeamDevicesError.h"

namespace dropboxQt{

namespace team{
///ListTeamDevicesError

ListTeamDevicesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListTeamDevicesError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListTeamDevicesError_RESET:{
            if(!name.isEmpty())
                js[name] = QString("reset");
        }break;
        case ListTeamDevicesError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListTeamDevicesError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("reset") == 0){
        m_tag = ListTeamDevicesError_RESET;

    }
    else if(s.compare("other") == 0){
        m_tag = ListTeamDevicesError_OTHER;

    }
}

QString ListTeamDevicesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListTeamDevicesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListTeamDevicesError ListTeamDevicesError::EXAMPLE(){
    ListTeamDevicesError rv;
    rv.m_tag = ListTeamDevicesError_RESET;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
