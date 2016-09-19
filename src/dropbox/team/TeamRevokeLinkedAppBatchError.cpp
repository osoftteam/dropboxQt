/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeLinkedAppBatchError.h"

namespace dropboxQt{

namespace team{
///RevokeLinkedAppBatchError

RevokeLinkedAppBatchError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RevokeLinkedAppBatchError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RevokeLinkedAppBatchError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void RevokeLinkedAppBatchError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("other") == 0){
        m_tag = RevokeLinkedAppBatchError_OTHER;
    }
}

QString RevokeLinkedAppBatchError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RevokeLinkedAppBatchError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeLinkedAppBatchError RevokeLinkedAppBatchError::EXAMPLE(){
    RevokeLinkedAppBatchError rv;
    rv.m_tag = RevokeLinkedAppBatchError_OTHER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
