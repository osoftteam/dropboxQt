/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSearchMatchType.h"

namespace dropboxQt{

namespace files{
///SearchMatchType

SearchMatchType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SearchMatchType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SearchMatchType_FILENAME:{
            if(!name.isEmpty())
                js[name] = "filename";
        }break;
        case SearchMatchType_CONTENT:{
            if(!name.isEmpty())
                js[name] = "content";
        }break;
        case SearchMatchType_BOTH:{
            if(!name.isEmpty())
                js[name] = "both";
        }break;
    }//switch
}

void SearchMatchType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("filename") == 0){
        m_tag = SearchMatchType_FILENAME;
    }
    if(s.compare("content") == 0){
        m_tag = SearchMatchType_CONTENT;
    }
    if(s.compare("both") == 0){
        m_tag = SearchMatchType_BOTH;
    }
}

QString SearchMatchType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SearchMatchType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SearchMatchType SearchMatchType::EXAMPLE(){
    SearchMatchType rv;
    rv.m_tag = SearchMatchType_FILENAME;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
