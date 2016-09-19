/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGetDevicesReport.h"

namespace dropboxQt{

namespace team{
///GetDevicesReport

GetDevicesReport::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetDevicesReport::toJson(QJsonObject& js)const{

    BaseDfbReport::toJson(js);
    js["active_1_day"] = (QJsonObject)m_active_1_day;
    js["active_7_day"] = (QJsonObject)m_active_7_day;
    js["active_28_day"] = (QJsonObject)m_active_28_day;
}

void GetDevicesReport::fromJson(const QJsonObject& js){

    BaseDfbReport::fromJson(js);
    m_active_1_day.fromJson(js);
    m_active_7_day.fromJson(js);
    m_active_28_day.fromJson(js);
}

QString GetDevicesReport::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetDevicesReport GetDevicesReport::EXAMPLE(){
    GetDevicesReport rv;
    rv.active_1_day = team::DevicesActive::EXAMPLE();
    rv.active_7_day = team::DevicesActive::EXAMPLE();
    rv.active_28_day = team::DevicesActive::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
