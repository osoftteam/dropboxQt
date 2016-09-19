/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingMembershipInfo.h"

namespace dropboxQt{

namespace sharing{
///MembershipInfo

MembershipInfo::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MembershipInfo::toJson(QJsonObject& js)const{

    m_access_type.toJson(js, "access_type");
    js["permissions"] = struct_list2jsonarray(m_permissions);
    if(!m_initials.isEmpty())
        js["initials"] = m_initials;
    js["is_inherited"] = m_is_inherited;
}

void MembershipInfo::fromJson(const QJsonObject& js){

    m_access_type.fromJson(js["access_type"].toObject());
    jsonarray2struct_list(js["permissions"].toArray(), m_permissions);
    m_initials = js["initials"].toString();
    m_is_inherited = js["is_inherited"].toVariant().toBool();
}

QString MembershipInfo::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MembershipInfo MembershipInfo::EXAMPLE(){
    MembershipInfo rv;
    rv.access_type = sharing::AccessLevel::EXAMPLE();
    rv.initials = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
