/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetCopyReferenceError.h"

namespace dropboxQt{

namespace files{
///GetCopyReferenceError

GetCopyReferenceError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetCopyReferenceError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetCopyReferenceError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case GetCopyReferenceError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void GetCopyReferenceError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = GetCopyReferenceError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = GetCopyReferenceError_OTHER;
    }
}

QString GetCopyReferenceError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetCopyReferenceError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetCopyReferenceError GetCopyReferenceError::EXAMPLE(){
    GetCopyReferenceError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = GetCopyReferenceError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
