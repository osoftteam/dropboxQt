/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingShareFolderJobStatus.h"

namespace dropboxQt{

namespace sharing{
///ShareFolderJobStatus

ShareFolderJobStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ShareFolderJobStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = "in_progress";
        }break;
        case ShareFolderJobStatus_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = (QJsonObject)m_complete;
        }break;
        case ShareFolderJobStatus_FAILED:{
            if(!name.isEmpty())
                js[name] = "failed";
            m_failed.toJson(js, "failed");
        }break;
    }//switch
}

void ShareFolderJobStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
    if(s.compare("complete") == 0){
        m_tag = ShareFolderJobStatus_COMPLETE;
    }
    if(s.compare("failed") == 0){
        m_tag = ShareFolderJobStatus_FAILED;
    }
}

QString ShareFolderJobStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ShareFolderJobStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ShareFolderJobStatus ShareFolderJobStatus::EXAMPLE(){
    ShareFolderJobStatus rv;
    rv.complete = sharing::SharedFolderMetadata::EXAMPLE();
    rv.failed = sharing::ShareFolderError::EXAMPLE();
    rv.m_tag = ShareFolderJobStatus_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
