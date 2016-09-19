/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesPropertyTemplateError.h"

namespace dropboxQt{

namespace properties{
///PropertyTemplateError

PropertyTemplateError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PropertyTemplateError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PropertyTemplateError_TEMPLATE_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "template_not_found";
            if(!m_template_not_found.isEmpty())
                js["template_not_found"] = m_template_not_found;
        }break;
        case PropertyTemplateError_RESTRICTED_CONTENT:{
            if(!name.isEmpty())
                js[name] = "restricted_content";
        }break;
        case PropertyTemplateError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void PropertyTemplateError::fromJson(const QJsonObject& js){

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
}

QString PropertyTemplateError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PropertyTemplateError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyTemplateError PropertyTemplateError::EXAMPLE(){
    PropertyTemplateError rv;
    rv.template_not_found = "test1value";
    rv.m_tag = PropertyTemplateError_TEMPLATE_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
