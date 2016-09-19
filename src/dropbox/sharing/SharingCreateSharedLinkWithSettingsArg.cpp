/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingCreateSharedLinkWithSettingsArg.h"

namespace dropboxQt{

namespace sharing{
///CreateSharedLinkWithSettingsArg

CreateSharedLinkWithSettingsArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CreateSharedLinkWithSettingsArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    js["settings"] = (QJsonObject)m_settings;
}

void CreateSharedLinkWithSettingsArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_settings.fromJson(js);
}

QString CreateSharedLinkWithSettingsArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CreateSharedLinkWithSettingsArg CreateSharedLinkWithSettingsArg::EXAMPLE(){
    CreateSharedLinkWithSettingsArg rv;
    rv.path = "test1value";
    rv.settings = sharing::SharedLinkSettings::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
