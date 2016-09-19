/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderError.h"

namespace dropboxQt{

namespace files{
///ListFolderError

ListFolderError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFolderError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFolderError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
        case ListFolderError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListFolderError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = ListFolderError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = ListFolderError_OTHER;
    }
}

QString ListFolderError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFolderError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderError ListFolderError::EXAMPLE(){
    ListFolderError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = ListFolderError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
