/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#include "dropbox/auth/AuthRateLimitError.h"

namespace dropboxQt{

namespace auth{
///RateLimitError

RateLimitError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RateLimitError::toJson(QJsonObject& js)const{

    m_reason.toJson(js, "reason");
    js["retry_after"] = m_retry_after;
}

void RateLimitError::fromJson(const QJsonObject& js){

    m_reason.fromJson(js["reason"].toObject());
    m_retry_after = js["retry_after"].toVariant().toInt();
}

QString RateLimitError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RateLimitError RateLimitError::EXAMPLE(){
    RateLimitError rv;
    rv.reason = auth::RateLimitReason::EXAMPLE();
    rv.retry_after = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//auth
}//dropboxQt
