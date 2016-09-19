/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncPollResultBase.h"

namespace dropboxQt{

namespace async{
///PollResultBase

PollResultBase::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PollResultBase::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = QString("in_progress");
        }break;
    }//switch
}

void PollResultBase::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
}

QString PollResultBase::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PollResultBase");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PollResultBase PollResultBase::EXAMPLE(){
    PollResultBase rv;
    rv.m_tag = PollResultBase_IN_PROGRESS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
