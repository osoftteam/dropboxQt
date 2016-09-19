/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesRemovePropertiesArg.h"

namespace dropboxQt{

namespace files{
///RemovePropertiesArg

RemovePropertiesArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RemovePropertiesArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    js["property_template_ids"] = ingrl_list2jsonarray(m_property_template_ids);
}

void RemovePropertiesArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    jsonarray2ingrl_list(js["property_template_ids"].toArray(), m_property_template_ids);
}

QString RemovePropertiesArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemovePropertiesArg RemovePropertiesArg::EXAMPLE(){
    RemovePropertiesArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
