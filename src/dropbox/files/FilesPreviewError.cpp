/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesPreviewError.h"

namespace dropboxQt{

namespace files{
///PreviewError

PreviewError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PreviewError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PreviewError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
        case PreviewError_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = QString("in_progress");
        }break;
        case PreviewError_UNSUPPORTED_EXTENSION:{
            if(!name.isEmpty())
                js[name] = QString("unsupported_extension");
        }break;
        case PreviewError_UNSUPPORTED_CONTENT:{
            if(!name.isEmpty())
                js[name] = QString("unsupported_content");
        }break;
    }//switch
}

void PreviewError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = PreviewError_PATH;
    }
    if(s.compare("in_progress") == 0){
        m_tag = PreviewError_IN_PROGRESS;
    }
    if(s.compare("unsupported_extension") == 0){
        m_tag = PreviewError_UNSUPPORTED_EXTENSION;
    }
    if(s.compare("unsupported_content") == 0){
        m_tag = PreviewError_UNSUPPORTED_CONTENT;
    }
}

QString PreviewError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PreviewError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PreviewError PreviewError::EXAMPLE(){
    PreviewError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = PreviewError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
