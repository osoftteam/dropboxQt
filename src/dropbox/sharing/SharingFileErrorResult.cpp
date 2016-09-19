/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFileErrorResult.h"

namespace dropboxQt{

namespace sharing{
///FileErrorResult

FileErrorResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void FileErrorResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case FileErrorResult_FILE_NOT_FOUND_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("file_not_found_error");
            if(!m_file_not_found_error.isEmpty())
                js["file_not_found_error"] = QString(m_file_not_found_error);
        }break;
        case FileErrorResult_INVALID_FILE_ACTION_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("invalid_file_action_error");
            if(!m_invalid_file_action_error.isEmpty())
                js["invalid_file_action_error"] = QString(m_invalid_file_action_error);
        }break;
        case FileErrorResult_PERMISSION_DENIED_ERROR:{
            if(!name.isEmpty())
                js[name] = QString("permission_denied_error");
            if(!m_permission_denied_error.isEmpty())
                js["permission_denied_error"] = QString(m_permission_denied_error);
        }break;
        case FileErrorResult_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void FileErrorResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("file_not_found_error") == 0){
        m_tag = FileErrorResult_FILE_NOT_FOUND_ERROR;
    }
    if(s.compare("invalid_file_action_error") == 0){
        m_tag = FileErrorResult_INVALID_FILE_ACTION_ERROR;
    }
    if(s.compare("permission_denied_error") == 0){
        m_tag = FileErrorResult_PERMISSION_DENIED_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = FileErrorResult_OTHER;
    }
}

QString FileErrorResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "FileErrorResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileErrorResult FileErrorResult::EXAMPLE(){
    FileErrorResult rv;
    rv.file_not_found_error = "test1value";
    rv.invalid_file_action_error = "test2value";
    rv.permission_denied_error = "test3value";
    rv.m_tag = FileErrorResult_FILE_NOT_FOUND_ERROR;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
