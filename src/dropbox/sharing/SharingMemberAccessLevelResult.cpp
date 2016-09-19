/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMemberAccessLevelResult.h"

namespace dropboxQt{

namespace sharing{
///MemberAccessLevelResult

MemberAccessLevelResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MemberAccessLevelResult::toJson(QJsonObject& js)const{

    m_access_level.toJson(js, "access_level");
    if(!m_warning.isEmpty())
        js["warning"] = m_warning;
    js["access_details"] = struct_list2jsonarray(m_access_details);
}

void MemberAccessLevelResult::fromJson(const QJsonObject& js){

    m_access_level.fromJson(js["access_level"].toObject());
    m_warning = js["warning"].toString();
    jsonarray2struct_list(js["access_details"].toArray(), m_access_details);
}

QString MemberAccessLevelResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MemberAccessLevelResult MemberAccessLevelResult::EXAMPLE(){
    MemberAccessLevelResult rv;
    rv.access_level = sharing::AccessLevel::EXAMPLE();
    rv.warning = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
