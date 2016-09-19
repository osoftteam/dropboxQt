/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesWriteConflictError.h"

namespace dropboxQt{

namespace files{
///WriteConflictError

WriteConflictError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void WriteConflictError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case WriteConflictError_FILE:{
            if(!name.isEmpty())
                js[name] = QString("file");
        }break;
        case WriteConflictError_FOLDER:{
            if(!name.isEmpty())
                js[name] = QString("folder");
        }break;
        case WriteConflictError_FILE_ANCESTOR:{
            if(!name.isEmpty())
                js[name] = QString("file_ancestor");
        }break;
        case WriteConflictError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void WriteConflictError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("file") == 0){
        m_tag = WriteConflictError_FILE;
    }
    if(s.compare("folder") == 0){
        m_tag = WriteConflictError_FOLDER;
    }
    if(s.compare("file_ancestor") == 0){
        m_tag = WriteConflictError_FILE_ANCESTOR;
    }
    if(s.compare("other") == 0){
        m_tag = WriteConflictError_OTHER;
    }
}

QString WriteConflictError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "WriteConflictError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
WriteConflictError WriteConflictError::EXAMPLE(){
    WriteConflictError rv;
    rv.m_tag = WriteConflictError_FILE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
