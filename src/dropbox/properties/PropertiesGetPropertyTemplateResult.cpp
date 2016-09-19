/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "properties"
***********************************************************/

#include "dropbox/properties/PropertiesGetPropertyTemplateResult.h"

namespace dropboxQt{

namespace properties{
///GetPropertyTemplateResult

GetPropertyTemplateResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetPropertyTemplateResult::toJson(QJsonObject& js)const{

    PropertyGroupTemplate::toJson(js);
}

void GetPropertyTemplateResult::fromJson(const QJsonObject& js){

    PropertyGroupTemplate::fromJson(js);
}

QString GetPropertyTemplateResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetPropertyTemplateResult GetPropertyTemplateResult::EXAMPLE(){
    GetPropertyTemplateResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//properties
}//dropboxQt
