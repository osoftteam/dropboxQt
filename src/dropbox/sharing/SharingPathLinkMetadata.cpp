/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingPathLinkMetadata.h"

namespace dropboxQt{

namespace sharing{
///PathLinkMetadata

PathLinkMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PathLinkMetadata::toJson(QJsonObject& js)const{

    LinkMetadata::toJson(js);
    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
}

void PathLinkMetadata::fromJson(const QJsonObject& js){

    LinkMetadata::fromJson(js);
    m_path = js["path"].toString();
}

QString PathLinkMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PathLinkMetadata PathLinkMetadata::EXAMPLE(){
    PathLinkMetadata rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
