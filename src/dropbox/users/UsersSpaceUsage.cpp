/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersSpaceUsage.h"

namespace dropboxQt{

namespace users{
///SpaceUsage

SpaceUsage::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SpaceUsage::toJson(QJsonObject& js)const{

    js["used"] = m_used;
    m_allocation.toJson(js, "allocation");
}

void SpaceUsage::fromJson(const QJsonObject& js){

    m_used = js["used"].toVariant().toInt();
    m_allocation.fromJson(js["allocation"].toObject());
}

QString SpaceUsage::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SpaceUsage SpaceUsage::EXAMPLE(){
    SpaceUsage rv;
    rv.used = 1;
    rv.allocation = users::SpaceAllocation::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//users
}//dropboxQt
