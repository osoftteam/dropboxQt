/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingJobStatus.h"

namespace dropboxQt{

namespace sharing{
///JobStatus

JobStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void JobStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = QString("in_progress");
        }break;
        case JobStatus_COMPLETE:{
            if(!name.isEmpty())
                js[name] = QString("complete");
        }break;
        case JobStatus_FAILED:{
            if(!name.isEmpty())
                js[name] = QString("failed");
            m_failed.toJson(js, "failed");
        }break;
    }//switch
}

void JobStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;

    }
    if(s.compare("complete") == 0){
        m_tag = JobStatus_COMPLETE;

    }
    else if(s.compare("failed") == 0){
        m_tag = JobStatus_FAILED;
        m_failed.fromJson(js["failed"].toObject());
    }
}

QString JobStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "JobStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
JobStatus JobStatus::EXAMPLE(){
    JobStatus rv;
    rv.failed = sharing::JobError::EXAMPLE();
    rv.m_tag = JobStatus_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
