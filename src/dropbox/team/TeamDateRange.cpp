/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDateRange.h"

namespace dropboxQt{

namespace team{
///DateRange

DateRange::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DateRange::toJson(QJsonObject& js)const{

    if(m_start_date.isValid())
        js["start_date"] = m_start_date.toString("yyyy-MM-ddThh:mm:ssZ");
    if(m_end_date.isValid())
        js["end_date"] = m_end_date.toString("yyyy-MM-ddThh:mm:ssZ");
}

void DateRange::fromJson(const QJsonObject& js){

    m_start_date = QDateTime::fromString(js["start_date"].toString(), "yyyy-MM-ddThh:mm:ssZ");
    m_end_date = QDateTime::fromString(js["end_date"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString DateRange::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DateRange DateRange::EXAMPLE(){
    DateRange rv;
    rv.start_date = QDateTime::currentDateTime();
    rv.end_date = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
