/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesPropertyGroupWithPath.h"

namespace dropboxQt{

namespace files{
///PropertyGroupWithPath

PropertyGroupWithPath::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PropertyGroupWithPath::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    js["property_groups"] = struct_list2jsonarray(m_property_groups);
}

void PropertyGroupWithPath::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    jsonarray2struct_list(js["property_groups"].toArray(), m_property_groups);
}

QString PropertyGroupWithPath::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PropertyGroupWithPath PropertyGroupWithPath::EXAMPLE(){
    PropertyGroupWithPath rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
