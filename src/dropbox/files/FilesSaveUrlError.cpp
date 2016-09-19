/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveUrlError.h"

namespace dropboxQt{

namespace files{
///SaveUrlError

SaveUrlError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SaveUrlError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SaveUrlError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case SaveUrlError_DOWNLOAD_FAILED:{
            if(!name.isEmpty())
                js[name] = "download_failed";
        }break;
        case SaveUrlError_INVALID_URL:{
            if(!name.isEmpty())
                js[name] = "invalid_url";
        }break;
        case SaveUrlError_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "not_found";
        }break;
        case SaveUrlError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SaveUrlError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = SaveUrlError_PATH;
    }
    if(s.compare("download_failed") == 0){
        m_tag = SaveUrlError_DOWNLOAD_FAILED;
    }
    if(s.compare("invalid_url") == 0){
        m_tag = SaveUrlError_INVALID_URL;
    }
    if(s.compare("not_found") == 0){
        m_tag = SaveUrlError_NOT_FOUND;
    }
    if(s.compare("other") == 0){
        m_tag = SaveUrlError_OTHER;
    }
}

QString SaveUrlError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SaveUrlError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveUrlError SaveUrlError::EXAMPLE(){
    SaveUrlError rv;
    rv.path = files::WriteError::EXAMPLE();
    rv.m_tag = SaveUrlError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
