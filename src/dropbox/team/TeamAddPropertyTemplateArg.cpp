/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamAddPropertyTemplateArg.h"

namespace dropboxQt{

namespace team{
///AddPropertyTemplateArg

AddPropertyTemplateArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void AddPropertyTemplateArg::toJson(QJsonObject& js)const{

    PropertyGroupTemplate::toJson(js);
}

void AddPropertyTemplateArg::fromJson(const QJsonObject& js){

    PropertyGroupTemplate::fromJson(js);
}

QString AddPropertyTemplateArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddPropertyTemplateArg AddPropertyTemplateArg::EXAMPLE(){
    AddPropertyTemplateArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
