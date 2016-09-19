/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRelocationError.h"

namespace dropboxQt{

namespace files{
///RelocationError

RelocationError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RelocationError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RelocationError_FROM_LOOKUP:{
            if(!name.isEmpty())
                js[name] = QString("from_lookup");
            m_from_lookup.toJson(js, "from_lookup");
        }break;
        case RelocationError_FROM_WRITE:{
            if(!name.isEmpty())
                js[name] = QString("from_write");
            m_from_write.toJson(js, "from_write");
        }break;
        case RelocationError_TO:{
            if(!name.isEmpty())
                js[name] = QString("to");
            m_to.toJson(js, "to");
        }break;
        case RelocationError_CANT_COPY_SHARED_FOLDER:{
            if(!name.isEmpty())
                js[name] = QString("cant_copy_shared_folder");
        }break;
        case RelocationError_CANT_NEST_SHARED_FOLDER:{
            if(!name.isEmpty())
                js[name] = QString("cant_nest_shared_folder");
        }break;
        case RelocationError_CANT_MOVE_FOLDER_INTO_ITSELF:{
            if(!name.isEmpty())
                js[name] = QString("cant_move_folder_into_itself");
        }break;
        case RelocationError_TOO_MANY_FILES:{
            if(!name.isEmpty())
                js[name] = QString("too_many_files");
        }break;
        case RelocationError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void RelocationError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("from_lookup") == 0){
        m_tag = RelocationError_FROM_LOOKUP;
    }
    if(s.compare("from_write") == 0){
        m_tag = RelocationError_FROM_WRITE;
    }
    if(s.compare("to") == 0){
        m_tag = RelocationError_TO;
    }
    if(s.compare("cant_copy_shared_folder") == 0){
        m_tag = RelocationError_CANT_COPY_SHARED_FOLDER;
    }
    if(s.compare("cant_nest_shared_folder") == 0){
        m_tag = RelocationError_CANT_NEST_SHARED_FOLDER;
    }
    if(s.compare("cant_move_folder_into_itself") == 0){
        m_tag = RelocationError_CANT_MOVE_FOLDER_INTO_ITSELF;
    }
    if(s.compare("too_many_files") == 0){
        m_tag = RelocationError_TOO_MANY_FILES;
    }
    if(s.compare("other") == 0){
        m_tag = RelocationError_OTHER;
    }
}

QString RelocationError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RelocationError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RelocationError RelocationError::EXAMPLE(){
    RelocationError rv;
    rv.from_lookup = files::LookupError::EXAMPLE();
    rv.from_write = files::WriteError::EXAMPLE();
    rv.to = files::WriteError::EXAMPLE();
    rv.m_tag = RelocationError_FROM_LOOKUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
