/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesAlphaGetMetadataArg.h"

namespace dropboxQt{

namespace files{
///AlphaGetMetadataArg

AlphaGetMetadataArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void AlphaGetMetadataArg::toJson(QJsonObject& js)const{

    GetMetadataArg::toJson(js);
    js["include_property_templates"] = ingrl_list2jsonarray(m_include_property_templates);
}

void AlphaGetMetadataArg::fromJson(const QJsonObject& js){

    GetMetadataArg::fromJson(js);
    jsonarray2ingrl_list(js["include_property_templates"].toArray(), m_include_property_templates);
}

QString AlphaGetMetadataArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AlphaGetMetadataArg AlphaGetMetadataArg::EXAMPLE(){
    AlphaGetMetadataArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
