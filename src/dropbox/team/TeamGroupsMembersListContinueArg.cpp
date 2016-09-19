/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamGroupsMembersListContinueArg.h"

namespace dropboxQt{

namespace team{
///GroupsMembersListContinueArg

GroupsMembersListContinueArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupsMembersListContinueArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void GroupsMembersListContinueArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
}

QString GroupsMembersListContinueArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupsMembersListContinueArg GroupsMembersListContinueArg::EXAMPLE(){
    GroupsMembersListContinueArg rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
