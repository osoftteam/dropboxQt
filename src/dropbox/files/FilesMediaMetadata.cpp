/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesMediaMetadata.h"

namespace dropboxQt{

namespace files{
///MediaMetadata

MediaMetadata::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void MediaMetadata::toJson(QJsonObject& js)const{

    js["dimensions"] = (QJsonObject)m_dimensions;
    js["location"] = (QJsonObject)m_location;
    if(m_time_taken.isValid())
        js["time_taken"] = m_time_taken.toString("yyyy-MM-ddThh:mm:ssZ");
}

void MediaMetadata::fromJson(const QJsonObject& js){

    m_dimensions.fromJson(js);
    m_location.fromJson(js);
    m_time_taken = QDateTime::fromString(js["time_taken"].toString(), "yyyy-MM-ddThh:mm:ssZ");
}

QString MediaMetadata::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
MediaMetadata MediaMetadata::EXAMPLE(){
    MediaMetadata rv;
    rv.dimensions = files::Dimensions::EXAMPLE();
    rv.location = files::GpsCoordinates::EXAMPLE();
    rv.time_taken = QDateTime::currentDateTime();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
