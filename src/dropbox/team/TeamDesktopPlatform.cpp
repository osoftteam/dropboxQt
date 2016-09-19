/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDesktopPlatform.h"

namespace dropboxQt{

namespace team{
///DesktopPlatform

DesktopPlatform::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void DesktopPlatform::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case DesktopPlatform_WINDOWS:{
            if(!name.isEmpty())
                js[name] = "windows";
        }break;
        case DesktopPlatform_MAC:{
            if(!name.isEmpty())
                js[name] = "mac";
        }break;
        case DesktopPlatform_LINUX:{
            if(!name.isEmpty())
                js[name] = "linux";
        }break;
        case DesktopPlatform_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void DesktopPlatform::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("windows") == 0){
        m_tag = DesktopPlatform_WINDOWS;
    }
    if(s.compare("mac") == 0){
        m_tag = DesktopPlatform_MAC;
    }
    if(s.compare("linux") == 0){
        m_tag = DesktopPlatform_LINUX;
    }
    if(s.compare("other") == 0){
        m_tag = DesktopPlatform_OTHER;
    }
}

QString DesktopPlatform::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "DesktopPlatform");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DesktopPlatform DesktopPlatform::EXAMPLE(){
    DesktopPlatform rv;
    rv.m_tag = DesktopPlatform_WINDOWS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
