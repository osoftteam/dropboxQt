/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingPendingUploadMode.h"

namespace dropboxQt{

namespace sharing{
///PendingUploadMode

PendingUploadMode::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PendingUploadMode::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PendingUploadMode_FILE:{
            if(!name.isEmpty())
                js[name] = "file";
        }break;
        case PendingUploadMode_FOLDER:{
            if(!name.isEmpty())
                js[name] = "folder";
        }break;
    }//switch
}

void PendingUploadMode::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("file") == 0){
        m_tag = PendingUploadMode_FILE;
    }
    if(s.compare("folder") == 0){
        m_tag = PendingUploadMode_FOLDER;
    }
}

QString PendingUploadMode::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PendingUploadMode");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PendingUploadMode PendingUploadMode::EXAMPLE(){
    PendingUploadMode rv;
    rv.m_tag = PendingUploadMode_FILE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
