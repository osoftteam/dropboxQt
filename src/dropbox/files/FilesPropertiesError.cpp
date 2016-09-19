/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesPropertiesError.h"

namespace dropboxQt{

namespace files{
///PropertiesError

PropertiesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PropertiesError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PropertyTemplateError_TEMPLATE_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = QString("template_not_found");
            if(!m_template_not_found.isEmpty())
                js["template_not_found"] = QString(m_template_not_found);
        }break;
        case PropertyTemplateError_RESTRICTED_CONTENT:{
            if(!name.isEmpty())
                js[name] = QString("restricted_content");
        }break;
        case PropertyTemplateError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
        case PropertiesError_PATH:{
            if(!name.isEmpty())
                js[name] = QString("path");
            m_path.toJson(js, "path");
        }break;
    }//switch
}

void PropertiesError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("template_not_found") == 0){
        m_tag = PropertyTemplateError_TEMPLATE_NOT_FOUND;
    }
    if(s.compare("restricted_content") == 0){
        m_tag = PropertyTemplateError_RESTRICTED_CONTENT;
    }
    if(s.compare("other") == 0){
        m_tag = PropertyTemplateError_OTHER;
    }
    if(s.compare("path") == 0){
        m_tag = PropertiesError_PATH;
    }
}

QString PropertiesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PropertiesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertiesError PropertiesError::EXAMPLE(){
    PropertiesError rv;
    rv.path = files::LookupError::EXAMPLE();
    rv.m_tag = PropertiesError_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
