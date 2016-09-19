/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderLongpollError.h"

namespace dropboxQt{

namespace files{
///ListFolderLongpollError

ListFolderLongpollError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFolderLongpollError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFolderLongpollError_RESET:{
            if(!name.isEmpty())
                js[name] = "reset";
        }break;
        case ListFolderLongpollError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFolderLongpollError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("reset") == 0){
        m_tag = ListFolderLongpollError_RESET;
    }
    if(s.compare("other") == 0){
        m_tag = ListFolderLongpollError_OTHER;
    }
}

QString ListFolderLongpollError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFolderLongpollError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderLongpollError ListFolderLongpollError::EXAMPLE(){
    ListFolderLongpollError rv;
    rv.m_tag = ListFolderLongpollError_RESET;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
