/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveUrlJobStatus.h"

namespace dropboxQt{

namespace files{
///SaveUrlJobStatus

SaveUrlJobStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SaveUrlJobStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = "in_progress";
        }break;
        case SaveUrlJobStatus_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = (QJsonObject)m_complete;
        }break;
        case SaveUrlJobStatus_FAILED:{
            if(!name.isEmpty())
                js[name] = "failed";
            m_failed.toJson(js, "failed");
        }break;
    }//switch
}

void SaveUrlJobStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
    if(s.compare("complete") == 0){
        m_tag = SaveUrlJobStatus_COMPLETE;
    }
    if(s.compare("failed") == 0){
        m_tag = SaveUrlJobStatus_FAILED;
    }
}

QString SaveUrlJobStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SaveUrlJobStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveUrlJobStatus SaveUrlJobStatus::EXAMPLE(){
    SaveUrlJobStatus rv;
    rv.complete = files::FileMetadata::EXAMPLE();
    rv.failed = files::SaveUrlError::EXAMPLE();
    rv.m_tag = SaveUrlJobStatus_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
