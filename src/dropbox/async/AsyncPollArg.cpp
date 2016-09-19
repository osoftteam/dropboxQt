/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncPollArg.h"

namespace dropboxQt{

namespace async{
///PollArg

PollArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PollArg::toJson(QJsonObject& js)const{

    if(!m_async_job_id.isEmpty())
        js["async_job_id"] = QString(m_async_job_id);
}

void PollArg::fromJson(const QJsonObject& js){

    m_async_job_id = js["async_job_id"].toString();
}

QString PollArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PollArg PollArg::EXAMPLE(){
    PollArg rv;
    rv.async_job_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
