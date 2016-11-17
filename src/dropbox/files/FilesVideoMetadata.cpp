/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesVideoMetadata.h"
using namespace dropboxQt;

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


std::unique_ptr<VideoMetadata>  VideoMetadata::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<VideoMetadata>  VideoMetadata::factory::create(const QJsonObject& js)
{
    std::unique_ptr<VideoMetadata> rv;
    rv = std::unique_ptr<VideoMetadata>(new VideoMetadata);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
