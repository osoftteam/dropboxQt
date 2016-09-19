/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUpdatePropertyGroupArg.h"

namespace dropboxQt{

namespace files{
///UpdatePropertyGroupArg

UpdatePropertyGroupArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UpdatePropertyGroupArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    js["update_property_groups"] = struct_list2jsonarray(m_update_property_groups);
}

void UpdatePropertyGroupArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    jsonarray2struct_list(js["update_property_groups"].toArray(), m_update_property_groups);
}

QString UpdatePropertyGroupArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UpdatePropertyGroupArg UpdatePropertyGroupArg::EXAMPLE(){
    UpdatePropertyGroupArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
