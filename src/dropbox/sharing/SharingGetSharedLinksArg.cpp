/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetSharedLinksArg.h"

namespace dropboxQt{

namespace sharing{
///GetSharedLinksArg

GetSharedLinksArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetSharedLinksArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
}

void GetSharedLinksArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString GetSharedLinksArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetSharedLinksArg GetSharedLinksArg::EXAMPLE(){
    GetSharedLinksArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
