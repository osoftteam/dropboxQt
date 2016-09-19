/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveUrlResult.h"

namespace dropboxQt{

namespace files{
///SaveUrlResult

SaveUrlResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SaveUrlResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LaunchResultBase_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "async_job_id";
            if(!m_async_job_id.isEmpty())
                js["async_job_id"] = m_async_job_id;
        }break;
        case SaveUrlResult_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = (QJsonObject)m_complete;
        }break;
    }//switch
}

void SaveUrlResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("async_job_id") == 0){
        m_tag = LaunchResultBase_ASYNC_JOB_ID;
    }
    if(s.compare("complete") == 0){
        m_tag = SaveUrlResult_COMPLETE;
    }
}

QString SaveUrlResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SaveUrlResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveUrlResult SaveUrlResult::EXAMPLE(){
    SaveUrlResult rv;
    rv.complete = files::FileMetadata::EXAMPLE();
    rv.m_tag = SaveUrlResult_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
