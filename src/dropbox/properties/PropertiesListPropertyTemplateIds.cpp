/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesListPropertyTemplateIds.h"

namespace dropboxQt{

namespace properties{
///ListPropertyTemplateIds

ListPropertyTemplateIds::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListPropertyTemplateIds::toJson(QJsonObject& js)const{

    js["template_ids"] = ingrl_list2jsonarray(m_template_ids);
}

void ListPropertyTemplateIds::fromJson(const QJsonObject& js){

    jsonarray2ingrl_list(js["template_ids"].toArray(), m_template_ids);
}

QString ListPropertyTemplateIds::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListPropertyTemplateIds ListPropertyTemplateIds::EXAMPLE(){
    ListPropertyTemplateIds rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
