/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchMode.h"

namespace dropboxQt{

namespace files{
///SearchMode

SearchMode::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SearchMode::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SearchMode_FILENAME:{
            if(!name.isEmpty())
                js[name] = "filename";
        }break;
        case SearchMode_FILENAME_AND_CONTENT:{
            if(!name.isEmpty())
                js[name] = "filename_and_content";
        }break;
        case SearchMode_DELETED_FILENAME:{
            if(!name.isEmpty())
                js[name] = "deleted_filename";
        }break;
    }//switch
}

void SearchMode::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("filename") == 0){
        m_tag = SearchMode_FILENAME;
    }
    if(s.compare("filename_and_content") == 0){
        m_tag = SearchMode_FILENAME_AND_CONTENT;
    }
    if(s.compare("deleted_filename") == 0){
        m_tag = SearchMode_DELETED_FILENAME;
    }
}

QString SearchMode::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SearchMode");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchMode SearchMode::EXAMPLE(){
    SearchMode rv;
    rv.m_tag = SearchMode_FILENAME;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
