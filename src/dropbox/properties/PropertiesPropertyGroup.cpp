/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesPropertyGroup.h"

namespace dropboxQt{

namespace properties{
///PropertyGroup

PropertyGroup::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PropertyGroup::toJson(QJsonObject& js)const{

    if(!m_template_id.isEmpty())
        js["template_id"] = QString(m_template_id);
    js["fields"] = struct_list2jsonarray(m_fields);
}

void PropertyGroup::fromJson(const QJsonObject& js){

    m_template_id = js["template_id"].toString();
    jsonarray2struct_list(js["fields"].toArray(), m_fields);
}

QString PropertyGroup::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyGroup PropertyGroup::EXAMPLE(){
    PropertyGroup rv;
    rv.template_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
