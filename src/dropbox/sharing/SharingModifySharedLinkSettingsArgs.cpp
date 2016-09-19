/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingModifySharedLinkSettingsArgs.h"

namespace dropboxQt{

namespace sharing{
///ModifySharedLinkSettingsArgs

ModifySharedLinkSettingsArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ModifySharedLinkSettingsArgs::toJson(QJsonObject& js)const{

    if(!m_url.isEmpty())
        js["url"] = m_url;
    js["settings"] = (QJsonObject)m_settings;
    js["remove_expiration"] = m_remove_expiration;
}

void ModifySharedLinkSettingsArgs::fromJson(const QJsonObject& js){

    m_url = js["url"].toString();
    m_settings.fromJson(js);
    m_remove_expiration = js["remove_expiration"].toVariant().toBool();
}

QString ModifySharedLinkSettingsArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ModifySharedLinkSettingsArgs ModifySharedLinkSettingsArgs::EXAMPLE(){
    ModifySharedLinkSettingsArgs rv;
    rv.url = "test1value";
    rv.settings = sharing::SharedLinkSettings::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
