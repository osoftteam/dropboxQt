/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRevokeSharedLinkArg.h"

namespace dropboxQt{

namespace sharing{
///RevokeSharedLinkArg

RevokeSharedLinkArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeSharedLinkArg::toJson(QJsonObject& js)const{

    if(!m_url.isEmpty())
        js["url"] = QString(m_url);
}

void RevokeSharedLinkArg::fromJson(const QJsonObject& js){

    m_url = js["url"].toString();
}

QString RevokeSharedLinkArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeSharedLinkArg RevokeSharedLinkArg::EXAMPLE(){
    RevokeSharedLinkArg rv;
    rv.url = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
