/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamIncludeMembersArg.h"

namespace dropboxQt{

namespace team{
///IncludeMembersArg

IncludeMembersArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void IncludeMembersArg::toJson(QJsonObject& js)const{

    js["return_members"] = m_return_members;
}

void IncludeMembersArg::fromJson(const QJsonObject& js){

    m_return_members = js["return_members"].toVariant().toBool();
}

QString IncludeMembersArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
IncludeMembersArg IncludeMembersArg::EXAMPLE(){
    IncludeMembersArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
