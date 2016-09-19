/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingCollectionLinkMetadata.h"

namespace dropboxQt{

namespace sharing{
///CollectionLinkMetadata

CollectionLinkMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CollectionLinkMetadata::toJson(QJsonObject& js)const{

    LinkMetadata::toJson(js);
}

void CollectionLinkMetadata::fromJson(const QJsonObject& js){

    LinkMetadata::fromJson(js);
}

QString CollectionLinkMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CollectionLinkMetadata CollectionLinkMetadata::EXAMPLE(){
    CollectionLinkMetadata rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
