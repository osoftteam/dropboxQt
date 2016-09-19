/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRequestedVisibility.h"

namespace dropboxQt{

namespace sharing{
///RequestedVisibility

RequestedVisibility::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RequestedVisibility::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RequestedVisibility_PUBLIC:{
            if(!name.isEmpty())
                js[name] = QString("public");
        }break;
        case RequestedVisibility_TEAM_ONLY:{
            if(!name.isEmpty())
                js[name] = QString("team_only");
        }break;
        case RequestedVisibility_PASSWORD:{
            if(!name.isEmpty())
                js[name] = QString("password");
        }break;
    }//switch
}

void RequestedVisibility::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("public") == 0){
        m_tag = RequestedVisibility_PUBLIC;
    }
    if(s.compare("team_only") == 0){
        m_tag = RequestedVisibility_TEAM_ONLY;
    }
    if(s.compare("password") == 0){
        m_tag = RequestedVisibility_PASSWORD;
    }
}

QString RequestedVisibility::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RequestedVisibility");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RequestedVisibility RequestedVisibility::EXAMPLE(){
    RequestedVisibility rv;
    rv.m_tag = RequestedVisibility_PUBLIC;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
