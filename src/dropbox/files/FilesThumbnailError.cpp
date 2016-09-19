/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesThumbnailError.h"

namespace dropboxQt{

namespace files{
///ThumbnailError

ThumbnailError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ThumbnailError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ThumbnailError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
        case ThumbnailError_UNSUPPORTED_EXTENSION:{
            if(!name.isEmpty())
                js[name] = QString("unsupported_extension");
        }break;
        case ThumbnailError_UNSUPPORTED_IMAGE:{
            if(!name.isEmpty())
                js[name] = QString("unsupported_image");
        }break;
        case ThumbnailError_CONVERSION_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("conversion_error");
        }break;
    }//switch
}

void ThumbnailError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = ThumbnailError_PATH;
    }
    if(s.compare("unsupported_extension") == 0){
        m_tag = ThumbnailError_UNSUPPORTED_EXTENSION;
    }
    if(s.compare("unsupported_image") == 0){
        m_tag = ThumbnailError_UNSUPPORTED_IMAGE;
    }
    if(s.compare("conversion_error") == 0){
        m_tag = ThumbnailError_CONVERSION_ERROR;
    }
}

QString ThumbnailError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ThumbnailError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ThumbnailError ThumbnailError::EXAMPLE(){
    ThumbnailError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = ThumbnailError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
