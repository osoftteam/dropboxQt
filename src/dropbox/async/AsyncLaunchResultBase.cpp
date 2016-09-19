/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncLaunchResultBase.h"

namespace dropboxQt{

namespace async{
///LaunchResultBase

LaunchResultBase::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void LaunchResultBase::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LaunchResultBase_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "async_job_id";
            if(!m_async_job_id.isEmpty())
                js["async_job_id"] = m_async_job_id;
        }break;
    }//switch
}

void LaunchResultBase::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("async_job_id") == 0){
        m_tag = LaunchResultBase_ASYNC_JOB_ID;
    }
}

QString LaunchResultBase::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "LaunchResultBase");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LaunchResultBase LaunchResultBase::EXAMPLE(){
    LaunchResultBase rv;
    rv.async_job_id = "test1value";
    rv.m_tag = LaunchResultBase_ASYNC_JOB_ID;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
