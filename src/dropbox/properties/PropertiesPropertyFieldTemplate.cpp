/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesPropertyFieldTemplate.h"

namespace dropboxQt{

namespace properties{
///PropertyFieldTemplate

PropertyFieldTemplate::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PropertyFieldTemplate::toJson(QJsonObject& js)const{

    if(!m_name.isEmpty())
        js["name"] = QString(m_name);
    if(!m_description.isEmpty())
        js["description"] = QString(m_description);
    m_type.toJson(js, "type");
}

void PropertyFieldTemplate::fromJson(const QJsonObject& js){

    m_name = js["name"].toString();
    m_description = js["description"].toString();
    m_type.fromJson(js["type"].toObject());
}

QString PropertyFieldTemplate::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyFieldTemplate PropertyFieldTemplate::EXAMPLE(){
    PropertyFieldTemplate rv;
    rv.name = "test1value";
    rv.description = "test2value";
    rv.type = properties::PropertyType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
