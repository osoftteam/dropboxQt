/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRemoveFileMemberArg.h"

namespace dropboxQt{

namespace sharing{
///RemoveFileMemberArg

RemoveFileMemberArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RemoveFileMemberArg::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = m_file;
    m_member.toJson(js, "member");
}

void RemoveFileMemberArg::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
    m_member.fromJson(js["member"].toObject());
}

QString RemoveFileMemberArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemoveFileMemberArg RemoveFileMemberArg::EXAMPLE(){
    RemoveFileMemberArg rv;
    rv.file = "test1value";
    rv.member = sharing::MemberSelector::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
