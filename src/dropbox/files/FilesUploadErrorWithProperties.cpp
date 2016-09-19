/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadErrorWithProperties.h"

namespace dropboxQt{

namespace files{
///UploadErrorWithProperties

UploadErrorWithProperties::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void UploadErrorWithProperties::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case UploadError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            js["path"] = (QJsonObject)m_path;
        }break;
        case UploadError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
        case UploadErrorWithProperties_PROPERTIES_ERROR:{
            if(!name.isEmpty())
                js[name] = "properties_error";
            m_properties_error.toJson(js, "properties_error");
        }break;
    }//switch
}

void UploadErrorWithProperties::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = UploadError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = UploadError_OTHER;
    }
    if(s.compare("properties_error") == 0){
        m_tag = UploadErrorWithProperties_PROPERTIES_ERROR;
    }
}

QString UploadErrorWithProperties::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "UploadErrorWithProperties");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadErrorWithProperties UploadErrorWithProperties::EXAMPLE(){
    UploadErrorWithProperties rv;
    rv.properties_error = files::InvalidPropertyGroupError::EXAMPLE();
    rv.m_tag = UploadErrorWithProperties_PROPERTIES_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
