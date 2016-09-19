/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingInsufficientQuotaAmounts.h"

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

#ifdef DROPBOX_QT_AUTOTEST
InsufficientQuotaAmounts InsufficientQuotaAmounts::EXAMPLE(){
    InsufficientQuotaAmounts rv;
    rv.space_needed = 1;
    rv.space_shortage = 2;
    rv.space_left = 3;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
