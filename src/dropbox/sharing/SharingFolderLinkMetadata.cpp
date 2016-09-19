/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFolderLinkMetadata.h"

namespace dropboxQt{

namespace sharing{
///FolderLinkMetadata

FolderLinkMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void FolderLinkMetadata::toJson(QJsonObject& js)const{

    SharedLinkMetadata::toJson(js);
}

void FolderLinkMetadata::fromJson(const QJsonObject& js){

    SharedLinkMetadata::fromJson(js);
}

QString FolderLinkMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FolderLinkMetadata FolderLinkMetadata::EXAMPLE(){
    FolderLinkMetadata rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
