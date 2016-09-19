/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRestoreError.h"

namespace dropboxQt{

namespace files{
///RestoreError

RestoreError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RestoreError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RestoreError_PATH_LOOKUP:{
            if(!name.isEmpty())
                js[name] = "path_lookup";
            m_path_lookup.toJson(js, "path_lookup");
        }break;
        case RestoreError_PATH_WRITE:{
            if(!name.isEmpty())
                js[name] = "path_write";
            m_path_write.toJson(js, "path_write");
        }break;
        case RestoreError_INVALID_REVISION:{
            if(!name.isEmpty())
                js[name] = "invalid_revision";
        }break;
        case RestoreError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void RestoreError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path_lookup") == 0){
        m_tag = RestoreError_PATH_LOOKUP;
    }
    if(s.compare("path_write") == 0){
        m_tag = RestoreError_PATH_WRITE;
    }
    if(s.compare("invalid_revision") == 0){
        m_tag = RestoreError_INVALID_REVISION;
    }
    if(s.compare("other") == 0){
        m_tag = RestoreError_OTHER;
    }
}

QString RestoreError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RestoreError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RestoreError RestoreError::EXAMPLE(){
    RestoreError rv;
    rv.path_lookup = files::LookupError::EXAMPLE();
    rv.path_write = files::WriteError::EXAMPLE();
    rv.m_tag = RestoreError_PATH_LOOKUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
