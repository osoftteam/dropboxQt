/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{

namespace files{
///WriteError

WriteError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void WriteError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case WriteError_MALFORMED_PATH:{
            if(!name.isEmpty())
                js[name] = "malformed_path";
            if(!m_malformed_path.isEmpty())
                js["malformed_path"] = m_malformed_path;
        }break;
        case WriteError_CONFLICT:{
            if(!name.isEmpty())
                js[name] = "conflict";
            m_conflict.toJson(js, "conflict");
        }break;
        case WriteError_NO_WRITE_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_write_permission";
        }break;
        case WriteError_INSUFFICIENT_SPACE:{
            if(!name.isEmpty())
                js[name] = "insufficient_space";
        }break;
        case WriteError_DISALLOWED_NAME:{
            if(!name.isEmpty())
                js[name] = "disallowed_name";
        }break;
        case WriteError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void WriteError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("malformed_path") == 0){
        m_tag = WriteError_MALFORMED_PATH;
    }
    if(s.compare("conflict") == 0){
        m_tag = WriteError_CONFLICT;
    }
    if(s.compare("no_write_permission") == 0){
        m_tag = WriteError_NO_WRITE_PERMISSION;
    }
    if(s.compare("insufficient_space") == 0){
        m_tag = WriteError_INSUFFICIENT_SPACE;
    }
    if(s.compare("disallowed_name") == 0){
        m_tag = WriteError_DISALLOWED_NAME;
    }
    if(s.compare("other") == 0){
        m_tag = WriteError_OTHER;
    }
}

QString WriteError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "WriteError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
WriteError WriteError::EXAMPLE(){
    WriteError rv;
    rv.malformed_path = "test1value";
    rv.conflict = files::WriteConflictError::EXAMPLE();
    rv.m_tag = WriteError_MALFORMED_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
