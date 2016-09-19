/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesVideoMetadata.h"

namespace dropboxQt{

namespace files{
///VideoMetadata

VideoMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void VideoMetadata::toJson(QJsonObject& js)const{

    MediaMetadata::toJson(js);
    js["duration"] = m_duration;
}

void VideoMetadata::fromJson(const QJsonObject& js){

    MediaMetadata::fromJson(js);
    m_duration = js["duration"].toVariant().toInt();
}

QString VideoMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
VideoMetadata VideoMetadata::EXAMPLE(){
    VideoMetadata rv;
    rv.duration = 1;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
