/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesPhotoMetadata.h"

namespace dropboxQt{

namespace files{
///PhotoMetadata

PhotoMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void PhotoMetadata::toJson(QJsonObject& js)const{

    MediaMetadata::toJson(js);
}

void PhotoMetadata::fromJson(const QJsonObject& js){

    MediaMetadata::fromJson(js);
}

QString PhotoMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PhotoMetadata PhotoMetadata::EXAMPLE(){
    PhotoMetadata rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
