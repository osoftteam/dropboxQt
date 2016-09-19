/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingVisibility.h"

namespace dropboxQt{

namespace sharing{
///Visibility

Visibility::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void Visibility::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case Visibility_PUBLIC:{
            if(!name.isEmpty())
                js[name] = QString("public");
        }break;
        case Visibility_TEAM_ONLY:{
            if(!name.isEmpty())
                js[name] = QString("team_only");
        }break;
        case Visibility_PASSWORD:{
            if(!name.isEmpty())
                js[name] = QString("password");
        }break;
        case Visibility_TEAM_AND_PASSWORD:{
            if(!name.isEmpty())
                js[name] = QString("team_and_password");
        }break;
        case Visibility_SHARED_FOLDER_ONLY:{
            if(!name.isEmpty())
                js[name] = QString("shared_folder_only");
        }break;
        case Visibility_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void Visibility::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("public") == 0){
        m_tag = Visibility_PUBLIC;
    }
    if(s.compare("team_only") == 0){
        m_tag = Visibility_TEAM_ONLY;
    }
    if(s.compare("password") == 0){
        m_tag = Visibility_PASSWORD;
    }
    if(s.compare("team_and_password") == 0){
        m_tag = Visibility_TEAM_AND_PASSWORD;
    }
    if(s.compare("shared_folder_only") == 0){
        m_tag = Visibility_SHARED_FOLDER_ONLY;
    }
    if(s.compare("other") == 0){
        m_tag = Visibility_OTHER;
    }
}

QString Visibility::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "Visibility");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Visibility Visibility::EXAMPLE(){
    Visibility rv;
    rv.m_tag = Visibility_PUBLIC;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
