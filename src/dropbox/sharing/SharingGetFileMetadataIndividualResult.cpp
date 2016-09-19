/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetFileMetadataIndividualResult.h"

namespace dropboxQt{

namespace sharing{
///GetFileMetadataIndividualResult

GetFileMetadataIndividualResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetFileMetadataIndividualResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetFileMetadataIndividualResult_METADATA:{
            if(!name.isEmpty())
                js[name] = "metadata";
            js["metadata"] = (QJsonObject)m_metadata;
        }break;
        case GetFileMetadataIndividualResult_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case GetFileMetadataIndividualResult_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GetFileMetadataIndividualResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("metadata") == 0){
        m_tag = GetFileMetadataIndividualResult_METADATA;
    }
    if(s.compare("access_error") == 0){
        m_tag = GetFileMetadataIndividualResult_ACCESS_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = GetFileMetadataIndividualResult_OTHER;
    }
}

QString GetFileMetadataIndividualResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetFileMetadataIndividualResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetFileMetadataIndividualResult GetFileMetadataIndividualResult::EXAMPLE(){
    GetFileMetadataIndividualResult rv;
    rv.metadata = sharing::SharedFileMetadata::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = GetFileMetadataIndividualResult_METADATA;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
