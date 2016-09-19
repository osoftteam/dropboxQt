/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRemovedStatus.h"

namespace dropboxQt{

namespace team{
///RemovedStatus

RemovedStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RemovedStatus::toJson(QJsonObject& js)const{

    js["is_recoverable"] = m_is_recoverable;
}

void RemovedStatus::fromJson(const QJsonObject& js){

    m_is_recoverable = js["is_recoverable"].toVariant().toBool();
}

QString RemovedStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemovedStatus RemovedStatus::EXAMPLE(){
    RemovedStatus rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
