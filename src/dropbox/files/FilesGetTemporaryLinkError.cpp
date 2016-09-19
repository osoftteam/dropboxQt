/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetTemporaryLinkError.h"

namespace dropboxQt{

namespace files{
///GetTemporaryLinkError

GetTemporaryLinkError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetTemporaryLinkError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetTemporaryLinkError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case GetTemporaryLinkError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GetTemporaryLinkError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = GetTemporaryLinkError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = GetTemporaryLinkError_OTHER;
    }
}

QString GetTemporaryLinkError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetTemporaryLinkError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetTemporaryLinkError GetTemporaryLinkError::EXAMPLE(){
    GetTemporaryLinkError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = GetTemporaryLinkError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
