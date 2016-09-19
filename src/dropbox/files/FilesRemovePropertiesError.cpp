/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRemovePropertiesError.h"

namespace dropboxQt{

namespace files{
///RemovePropertiesError

RemovePropertiesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RemovePropertiesError::toJson(QJsonObject& js, QString name)const{

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
        case PropertiesError_PATH:{
            if(!name.isEmpty())
                js[name] = "path";
            m_path.toJson(js, "path");
        }break;
        case RemovePropertiesError_PROPERTY_GROUP_LOOKUP:{
            if(!name.isEmpty())
                js[name] = "property_group_lookup";
            m_property_group_lookup.toJson(js, "property_group_lookup");
        }break;
    }//switch
}

void RemovePropertiesError::fromJson(const QJsonObject& js){

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
    if(s.compare("property_group_lookup") == 0){
        m_tag = RemovePropertiesError_PROPERTY_GROUP_LOOKUP;
    }
}

QString RemovePropertiesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RemovePropertiesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemovePropertiesError RemovePropertiesError::EXAMPLE(){
    RemovePropertiesError rv;
    rv.property_group_lookup = files::LookUpPropertiesError::EXAMPLE();
    rv.m_tag = RemovePropertiesError_PROPERTY_GROUP_LOOKUP;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
