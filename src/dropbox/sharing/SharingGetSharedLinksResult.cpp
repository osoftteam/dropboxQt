/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetSharedLinksResult.h"

namespace dropboxQt{

namespace sharing{
///GetSharedLinksResult

GetSharedLinksResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetSharedLinksResult::toJson(QJsonObject& js)const{

    js["links"] = struct_list2jsonarray(m_links);
}

void GetSharedLinksResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["links"].toArray(), m_links);
}

QString GetSharedLinksResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetSharedLinksResult GetSharedLinksResult::EXAMPLE(){
    GetSharedLinksResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
