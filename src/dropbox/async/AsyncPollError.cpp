/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncPollError.h"

namespace dropboxQt{

namespace async{
///PollError

PollError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PollError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollError_INVALID_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = QString("invalid_async_job_id");
        }break;
        case PollError_INTERNAL_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("internal_error");
        }break;
        case PollError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void PollError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_async_job_id") == 0){
        m_tag = PollError_INVALID_ASYNC_JOB_ID;
    }
    if(s.compare("internal_error") == 0){
        m_tag = PollError_INTERNAL_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = PollError_OTHER;
    }
}

QString PollError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PollError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PollError PollError::EXAMPLE(){
    PollError rv;
    rv.m_tag = PollError_INVALID_ASYNC_JOB_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
