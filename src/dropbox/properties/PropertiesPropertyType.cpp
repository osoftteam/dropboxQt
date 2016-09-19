/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesPropertyType.h"

namespace dropboxQt{

namespace properties{
///PropertyType

PropertyType::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PropertyType::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PropertyType_STRING:{
            if(!name.isEmpty())
                js[name] = "string";
        }break;
        case PropertyType_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void PropertyType::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("string") == 0){
        m_tag = PropertyType_STRING;
    }
    if(s.compare("other") == 0){
        m_tag = PropertyType_OTHER;
    }
}

QString PropertyType::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PropertyType");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyType PropertyType::EXAMPLE(){
    PropertyType rv;
    rv.m_tag = PropertyType_STRING;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
