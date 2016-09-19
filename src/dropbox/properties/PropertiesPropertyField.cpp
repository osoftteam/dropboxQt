/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesPropertyField.h"

namespace dropboxQt{

namespace properties{
///PropertyField

PropertyField::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PropertyField::toJson(QJsonObject& js)const{

    if(!m_name.isEmpty())
        js["name"] = m_name;
    if(!m_value.isEmpty())
        js["value"] = m_value;
}

void PropertyField::fromJson(const QJsonObject& js){

    m_name = js["name"].toString();
    m_value = js["value"].toString();
}

QString PropertyField::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyField PropertyField::EXAMPLE(){
    PropertyField rv;
    rv.name = "test1value";
    rv.value = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
