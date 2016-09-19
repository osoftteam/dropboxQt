/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamMembersAddLaunch.h"

namespace dropboxQt{

namespace team{
///MembersAddLaunch

MembersAddLaunch::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void MembersAddLaunch::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LaunchResultBase_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "async_job_id";
            if(!m_async_job_id.isEmpty())
                js["async_job_id"] = m_async_job_id;
        }break;
        case MembersAddLaunch_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = struct_list2jsonarray(m_complete);
        }break;
    }//switch
}

void MembersAddLaunch::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("async_job_id") == 0){
        m_tag = LaunchResultBase_ASYNC_JOB_ID;
    }
    if(s.compare("complete") == 0){
        m_tag = MembersAddLaunch_COMPLETE;
    }
}

QString MembersAddLaunch::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "MembersAddLaunch");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembersAddLaunch MembersAddLaunch::EXAMPLE(){
    MembersAddLaunch rv;
    rv.m_tag = MembersAddLaunch_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
