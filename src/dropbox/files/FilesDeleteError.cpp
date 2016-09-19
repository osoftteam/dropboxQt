/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDeleteError.h"

namespace dropboxQt{

namespace files{
///DeleteError

DeleteError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void DeleteError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case DeleteError_PATH_LOOKUP:{
            if(!name.isEmpty())
                js[name] = "path_lookup";
            m_path_lookup.toJson(js, "path_lookup");
        }break;
        case DeleteError_PATH_WRITE:{
            if(!name.isEmpty())
                js[name] = "path_write";
            m_path_write.toJson(js, "path_write");
        }break;
        case DeleteError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void DeleteError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path_lookup") == 0){
        m_tag = DeleteError_PATH_LOOKUP;
    }
    if(s.compare("path_write") == 0){
        m_tag = DeleteError_PATH_WRITE;
    }
    if(s.compare("other") == 0){
        m_tag = DeleteError_OTHER;
    }
}

QString DeleteError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "DeleteError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DeleteError DeleteError::EXAMPLE(){
    DeleteError rv;
    rv.path_lookup = files::LookupError::EXAMPLE();
    rv.path_write = files::WriteError::EXAMPLE();
    rv.m_tag = DeleteError_PATH_LOOKUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
