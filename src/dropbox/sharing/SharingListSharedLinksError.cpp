/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListSharedLinksError.h"

namespace dropboxQt{

namespace sharing{
///ListSharedLinksError

ListSharedLinksError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListSharedLinksError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListSharedLinksError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case ListSharedLinksError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListSharedLinksError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListSharedLinksError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = ListSharedLinksError_PATH;
    }
    if(s.compare("reset") == 0){
        m_tag = ListSharedLinksError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListSharedLinksError_OTHER;
    }
}

QString ListSharedLinksError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListSharedLinksError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListSharedLinksError ListSharedLinksError::EXAMPLE(){
    ListSharedLinksError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = ListSharedLinksError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
