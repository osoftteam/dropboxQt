/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersCountResult.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersCountResult

ListFileMembersCountResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFileMembersCountResult::toJson(QJsonObject& js)const{

    js["members"] = (QJsonObject)m_members;
    js["member_count"] = m_member_count;
}

void ListFileMembersCountResult::fromJson(const QJsonObject& js){

    m_members.fromJson(js);
    m_member_count = js["member_count"].toVariant().toInt();
}

QString ListFileMembersCountResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ListFileMembersCountResult>  ListFileMembersCountResult::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListFileMembersCountResult>  ListFileMembersCountResult::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListFileMembersCountResult> rv;
    rv = std::unique_ptr<ListFileMembersCountResult>(new ListFileMembersCountResult);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersCountResult ListFileMembersCountResult::EXAMPLE(){
    ListFileMembersCountResult rv;
    rv.members = sharing::SharedFileMembers::EXAMPLE();
    rv.member_count = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
