/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionFinishError.h"

namespace dropboxQt{

namespace files{
///UploadSessionFinishError

UploadSessionFinishError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UploadSessionFinishError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UploadSessionFinishError_LOOKUP_FAILED:{
            if(!name.isEmpty())
                js[name] = "lookup_failed";
            m_lookup_failed.toJson(js, "lookup_failed");
        }break;
        case UploadSessionFinishError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case UploadSessionFinishError_TOO_MANY_SHARED_FOLDER_TARGETS:{
            if(!name.isEmpty())
                js[name] = "too_many_shared_folder_targets";
        }break;
        case UploadSessionFinishError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void UploadSessionFinishError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("lookup_failed") == 0){
        m_tag = UploadSessionFinishError_LOOKUP_FAILED;
    }
    if(s.compare("path") == 0){
        m_tag = UploadSessionFinishError_PATH;
    }
    if(s.compare("too_many_shared_folder_targets") == 0){
        m_tag = UploadSessionFinishError_TOO_MANY_SHARED_FOLDER_TARGETS;
    }
    if(s.compare("other") == 0){
        m_tag = UploadSessionFinishError_OTHER;
    }
}

QString UploadSessionFinishError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UploadSessionFinishError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionFinishError UploadSessionFinishError::EXAMPLE(){
    UploadSessionFinishError rv;
    rv.lookup_failed = files::UploadSessionLookupError::EXAMPLE();
    rv.path = files::WriteError::EXAMPLE();
    rv.m_tag = UploadSessionFinishError_LOOKUP_FAILED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
