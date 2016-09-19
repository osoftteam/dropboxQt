/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingSharedLinkSettingsError.h"

namespace dropboxQt{

namespace sharing{
///SharedLinkSettingsError

SharedLinkSettingsError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void SharedLinkSettingsError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case SharedLinkSettingsError_INVALID_SETTINGS:{
            if(!name.isEmpty())
                js[name] = "invalid_settings";
        }break;
        case SharedLinkSettingsError_NOT_AUTHORIZED:{
            if(!name.isEmpty())
                js[name] = "not_authorized";
        }break;
    }//switch
}

void SharedLinkSettingsError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("invalid_settings") == 0){
        m_tag = SharedLinkSettingsError_INVALID_SETTINGS;
    }
    if(s.compare("not_authorized") == 0){
        m_tag = SharedLinkSettingsError_NOT_AUTHORIZED;
    }
}

QString SharedLinkSettingsError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "SharedLinkSettingsError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SharedLinkSettingsError SharedLinkSettingsError::EXAMPLE(){
    SharedLinkSettingsError rv;
    rv.m_tag = SharedLinkSettingsError_INVALID_SETTINGS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
