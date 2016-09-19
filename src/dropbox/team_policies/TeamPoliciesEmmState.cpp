/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesEmmState.h"

namespace dropboxQt{

namespace team_policies{
///EmmState

EmmState::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void EmmState::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case EmmState_DISABLED:{
            if(!name.isEmpty())
                js[name] = "disabled";
        }break;
        case EmmState_OPTIONAL:{
            if(!name.isEmpty())
                js[name] = "optional";
        }break;
        case EmmState_REQUIRED:{
            if(!name.isEmpty())
                js[name] = "required";
        }break;
        case EmmState_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void EmmState::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("disabled") == 0){
        m_tag = EmmState_DISABLED;
    }
    if(s.compare("optional") == 0){
        m_tag = EmmState_OPTIONAL;
    }
    if(s.compare("required") == 0){
        m_tag = EmmState_REQUIRED;
    }
    if(s.compare("other") == 0){
        m_tag = EmmState_OTHER;
    }
}

QString EmmState::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "EmmState");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
EmmState EmmState::EXAMPLE(){
    EmmState rv;
    rv.m_tag = EmmState_DISABLED;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_policies
}//dropboxQt
