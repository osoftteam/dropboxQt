/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDeletedMetadata.h"

namespace dropboxQt{

namespace files{
///DeletedMetadata

DeletedMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DeletedMetadata::toJson(QJsonObject& js)const{

    Metadata::toJson(js);
}

void DeletedMetadata::fromJson(const QJsonObject& js){

    Metadata::fromJson(js);
}

QString DeletedMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DeletedMetadata DeletedMetadata::EXAMPLE(){
    DeletedMetadata rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
