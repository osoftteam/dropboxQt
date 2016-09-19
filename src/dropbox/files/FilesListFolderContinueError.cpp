/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderContinueError.h"

namespace dropboxQt{

namespace files{
///ListFolderContinueError

ListFolderContinueError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFolderContinueError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFolderContinueError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case ListFolderContinueError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListFolderContinueError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFolderContinueError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = ListFolderContinueError_PATH;
    }
    if(s.compare("reset") == 0){
        m_tag = ListFolderContinueError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListFolderContinueError_OTHER;
    }
}

QString ListFolderContinueError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFolderContinueError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderContinueError ListFolderContinueError::EXAMPLE(){
    ListFolderContinueError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = ListFolderContinueError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
