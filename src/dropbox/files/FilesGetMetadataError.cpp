/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesGetMetadataError.h"

namespace dropboxQt{

namespace files{
///GetMetadataError

GetMetadataError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void GetMetadataError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case GetMetadataError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
    }//switch
}

void GetMetadataError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = GetMetadataError_PATH;
        m_path.fromJson(js["path"].toObject());
    }
}

QString GetMetadataError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "GetMetadataError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetMetadataError GetMetadataError::EXAMPLE(){
    GetMetadataError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = GetMetadataError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
