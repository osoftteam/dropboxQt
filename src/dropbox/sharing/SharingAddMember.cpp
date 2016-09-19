/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingAddMember.h"

namespace dropboxQt{

namespace sharing{
///AddMember

AddMember::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void AddMember::toJson(QJsonObject& js)const{

    m_member.toJson(js, "member");
    m_access_level.toJson(js, "access_level");
}

void AddMember::fromJson(const QJsonObject& js){

    m_member.fromJson(js["member"].toObject());
    m_access_level.fromJson(js["access_level"].toObject());
}

QString AddMember::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddMember AddMember::EXAMPLE(){
    AddMember rv;
    rv.member = sharing::MemberSelector::EXAMPLE();
    rv.access_level = sharing::AccessLevel::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
