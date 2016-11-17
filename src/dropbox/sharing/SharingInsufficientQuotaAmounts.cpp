/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/sharing/SharingInsufficientQuotaAmounts.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace sharing{
///InsufficientQuotaAmounts

InsufficientQuotaAmounts::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void InsufficientQuotaAmounts::toJson(QJsonObject& js)const{

    js["space_needed"] = m_space_needed;
    js["space_shortage"] = m_space_shortage;
    js["space_left"] = m_space_left;
}

void InsufficientQuotaAmounts::fromJson(const QJsonObject& js){

    m_space_needed = js["space_needed"].toVariant().toInt();
    m_space_shortage = js["space_shortage"].toVariant().toInt();
    m_space_left = js["space_left"].toVariant().toInt();
}

QString InsufficientQuotaAmounts::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<InsufficientQuotaAmounts>  InsufficientQuotaAmounts::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<InsufficientQuotaAmounts>  InsufficientQuotaAmounts::factory::create(const QJsonObject& js)
{
    std::unique_ptr<InsufficientQuotaAmounts> rv;
    rv = std::unique_ptr<InsufficientQuotaAmounts>(new InsufficientQuotaAmounts);
    rv->fromJson(js);
    return rv;
}

}//sharing
}//dropboxQt
