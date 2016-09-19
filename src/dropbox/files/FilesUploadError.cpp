/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadError.h"

namespace dropboxQt{

namespace files{
///UploadError

UploadError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UploadError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UploadError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            js["path"] = (QJsonObject)m_path;
        }break;
        case UploadError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void UploadError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = UploadError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = UploadError_OTHER;
    }
}

QString UploadError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UploadError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadError UploadError::EXAMPLE(){
    UploadError rv;
    rv.path = files::UploadWriteFailed::EXAMPLE();
    rv.m_tag = UploadError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
