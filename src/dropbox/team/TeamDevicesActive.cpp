/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDevicesActive.h"

namespace dropboxQt{

namespace team{
///DevicesActive

DevicesActive::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DevicesActive::toJson(QJsonObject& js)const{

    js["windows"] = ingrl_list2jsonarray(m_windows);
    js["macos"] = ingrl_list2jsonarray(m_macos);
    js["linux"] = ingrl_list2jsonarray(m_linux);
    js["ios"] = ingrl_list2jsonarray(m_ios);
    js["android"] = ingrl_list2jsonarray(m_android);
    js["other"] = ingrl_list2jsonarray(m_other);
    js["total"] = ingrl_list2jsonarray(m_total);
}

void DevicesActive::fromJson(const QJsonObject& js){

    jsonarray2ingrl_list(js["windows"].toArray(), m_windows);
    jsonarray2ingrl_list(js["macos"].toArray(), m_macos);
    jsonarray2ingrl_list(js["linux"].toArray(), m_linux);
    jsonarray2ingrl_list(js["ios"].toArray(), m_ios);
    jsonarray2ingrl_list(js["android"].toArray(), m_android);
    jsonarray2ingrl_list(js["other"].toArray(), m_other);
    jsonarray2ingrl_list(js["total"].toArray(), m_total);
}

QString DevicesActive::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DevicesActive DevicesActive::EXAMPLE(){
    DevicesActive rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
