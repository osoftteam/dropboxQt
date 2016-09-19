/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveCopyReferenceError.h"

namespace dropboxQt{

namespace files{
///SaveCopyReferenceError

SaveCopyReferenceError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SaveCopyReferenceError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SaveCopyReferenceError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case SaveCopyReferenceError_INVALID_COPY_REFERENCE:{
            if(!name.isEmpty())
                js[name] = "invalid_copy_reference";
        }break;
        case SaveCopyReferenceError_NO_PERMISSION:{
            if(!name.isEmpty())
                js[name] = "no_permission";
        }break;
        case SaveCopyReferenceError_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "not_found";
        }break;
        case SaveCopyReferenceError_TOO_MANY_FILES:{
            if(!name.isEmpty())
                js[name] = "too_many_files";
        }break;
        case SaveCopyReferenceError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void SaveCopyReferenceError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = SaveCopyReferenceError_PATH;
    }
    if(s.compare("invalid_copy_reference") == 0){
        m_tag = SaveCopyReferenceError_INVALID_COPY_REFERENCE;
    }
    if(s.compare("no_permission") == 0){
        m_tag = SaveCopyReferenceError_NO_PERMISSION;
    }
    if(s.compare("not_found") == 0){
        m_tag = SaveCopyReferenceError_NOT_FOUND;
    }
    if(s.compare("too_many_files") == 0){
        m_tag = SaveCopyReferenceError_TOO_MANY_FILES;
    }
    if(s.compare("other") == 0){
        m_tag = SaveCopyReferenceError_OTHER;
    }
}

QString SaveCopyReferenceError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SaveCopyReferenceError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveCopyReferenceError SaveCopyReferenceError::EXAMPLE(){
    SaveCopyReferenceError rv;
    rv.path = files::WriteError::EXAMPLE();
    rv.m_tag = SaveCopyReferenceError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
