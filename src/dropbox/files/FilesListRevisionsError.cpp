/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListRevisionsError.h"

namespace dropboxQt{

namespace files{
///ListRevisionsError

ListRevisionsError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListRevisionsError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListRevisionsError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
        case ListRevisionsError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void ListRevisionsError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("path") == 0){
        m_tag = ListRevisionsError_PATH;
        m_path.fromJson(js["path"].toObject());
    }
    else if(s.compare("other") == 0){
        m_tag = ListRevisionsError_OTHER;

    }
}

QString ListRevisionsError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListRevisionsError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListRevisionsError ListRevisionsError::EXAMPLE(){
    ListRevisionsError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = ListRevisionsError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
