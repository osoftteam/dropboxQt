/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingAccessLevel.h"

namespace dropboxQt{

namespace sharing{
///AccessLevel

AccessLevel::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void AccessLevel::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case AccessLevel_OWNER:{
            if(!name.isEmpty())
                js[name] = "owner";
        }break;
        case AccessLevel_EDITOR:{
            if(!name.isEmpty())
                js[name] = "editor";
        }break;
        case AccessLevel_VIEWER:{
            if(!name.isEmpty())
                js[name] = "viewer";
        }break;
        case AccessLevel_VIEWER_NO_COMMENT:{
            if(!name.isEmpty())
                js[name] = "viewer_no_comment";
        }break;
        case AccessLevel_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void AccessLevel::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("owner") == 0){
        m_tag = AccessLevel_OWNER;
    }
    if(s.compare("editor") == 0){
        m_tag = AccessLevel_EDITOR;
    }
    if(s.compare("viewer") == 0){
        m_tag = AccessLevel_VIEWER;
    }
    if(s.compare("viewer_no_comment") == 0){
        m_tag = AccessLevel_VIEWER_NO_COMMENT;
    }
    if(s.compare("other") == 0){
        m_tag = AccessLevel_OTHER;
    }
}

QString AccessLevel::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "AccessLevel");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AccessLevel AccessLevel::EXAMPLE(){
    AccessLevel rv;
    rv.m_tag = AccessLevel_OWNER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
