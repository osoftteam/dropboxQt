/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchError.h"

namespace dropboxQt{

namespace files{
///SearchError

SearchError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SearchError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SearchError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
        case SearchError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void SearchError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = SearchError_PATH;
    }
    if(s.compare("other") == 0){
        m_tag = SearchError_OTHER;
    }
}

QString SearchError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SearchError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchError SearchError::EXAMPLE(){
    SearchError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = SearchError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
