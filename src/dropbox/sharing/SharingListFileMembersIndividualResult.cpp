/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersIndividualResult.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersIndividualResult

ListFileMembersIndividualResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFileMembersIndividualResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFileMembersIndividualResult_RESULT:{
            if(!name.isEmpty())
                js[name] = QString("result");
            js["result"] = (QJsonObject)m_result;
        }break;
        case ListFileMembersIndividualResult_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("access_error");
            m_access_error.toJson(js, "access_error");
        }break;
        case ListFileMembersIndividualResult_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListFileMembersIndividualResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("result") == 0){
        m_tag = ListFileMembersIndividualResult_RESULT;
        m_result.fromJson(js);
    }
    else if(s.compare("access_error") == 0){
        m_tag = ListFileMembersIndividualResult_ACCESS_ERROR;
        m_access_error.fromJson(js["access_error"].toObject());
    }
    else if(s.compare("other") == 0){
        m_tag = ListFileMembersIndividualResult_OTHER;

    }
}

QString ListFileMembersIndividualResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFileMembersIndividualResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersIndividualResult ListFileMembersIndividualResult::EXAMPLE(){
    ListFileMembersIndividualResult rv;
    rv.result = sharing::ListFileMembersCountResult::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = ListFileMembersIndividualResult_RESULT;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
