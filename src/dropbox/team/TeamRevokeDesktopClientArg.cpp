/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDesktopClientArg.h"

namespace dropboxQt{

namespace team{
///RevokeDesktopClientArg

RevokeDesktopClientArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeDesktopClientArg::toJson(QJsonObject& js)const{

    DeviceSessionArg::toJson(js);
    js["delete_on_unlink"] = m_delete_on_unlink;
}

void RevokeDesktopClientArg::fromJson(const QJsonObject& js){

    DeviceSessionArg::fromJson(js);
    m_delete_on_unlink = js["delete_on_unlink"].toVariant().toBool();
}

QString RevokeDesktopClientArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDesktopClientArg RevokeDesktopClientArg::EXAMPLE(){
    RevokeDesktopClientArg rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
