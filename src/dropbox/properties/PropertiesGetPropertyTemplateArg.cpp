/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesGetPropertyTemplateArg.h"

namespace dropboxQt{

namespace properties{
///GetPropertyTemplateArg

GetPropertyTemplateArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetPropertyTemplateArg::toJson(QJsonObject& js)const{

    if(!m_template_id.isEmpty())
        js["template_id"] = m_template_id;
}

void GetPropertyTemplateArg::fromJson(const QJsonObject& js){

    m_template_id = js["template_id"].toString();
}

QString GetPropertyTemplateArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetPropertyTemplateArg GetPropertyTemplateArg::EXAMPLE(){
    GetPropertyTemplateArg rv;
    rv.template_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
