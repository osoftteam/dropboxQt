/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkPolicy.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkPolicy

SharedLinkPolicy::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedLinkPolicy::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedLinkPolicy_ANYONE:{
            if(!name.isEmpty())
                js[name] = "anyone";
        }break;
        case SharedLinkPolicy_MEMBERS:{
            if(!name.isEmpty())
                js[name] = "members";
        }break;
        case SharedLinkPolicy_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SharedLinkPolicy::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("anyone") == 0){
        m_tag = SharedLinkPolicy_ANYONE;
    }
    if(s.compare("members") == 0){
        m_tag = SharedLinkPolicy_MEMBERS;
    }
    if(s.compare("other") == 0){
        m_tag = SharedLinkPolicy_OTHER;
    }
}

QString SharedLinkPolicy::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedLinkPolicy");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkPolicy SharedLinkPolicy::EXAMPLE(){
    SharedLinkPolicy rv;
    rv.m_tag = SharedLinkPolicy_ANYONE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
