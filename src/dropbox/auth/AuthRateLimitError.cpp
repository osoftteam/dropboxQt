/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/auth/AuthRateLimitError.h"
using namespace dropboxQt;

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


std::unique_ptr<RateLimitError>  RateLimitError::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<RateLimitError>  RateLimitError::factory::create(const QJsonObject& js)
{
    std::unique_ptr<RateLimitError> rv;
    rv = std::unique_ptr<RateLimitError>(new RateLimitError);
    rv->fromJson(js);
    return rv;
}

}//auth
}//dropboxQt
