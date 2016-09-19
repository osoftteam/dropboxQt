/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetSharedLinksError.h"

namespace dropboxQt{

namespace sharing{
///GetSharedLinksError

GetSharedLinksError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetSharedLinksError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetSharedLinksError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            if(!m_path.isEmpty())
                js["path"] = m_path;
        }break;
        case GetSharedLinksError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GetSharedLinksError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = GetSharedLinksError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = GetSharedLinksError_OTHER;
    }
}

QString GetSharedLinksError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetSharedLinksError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetSharedLinksError GetSharedLinksError::EXAMPLE(){
    GetSharedLinksError rv;
    rv.path = "test1value";
    rv.m_tag = GetSharedLinksError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
