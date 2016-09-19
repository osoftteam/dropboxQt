/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesDimensions.h"
#include "dropbox/files/FilesGpsCoordinates.h"

namespace dropboxQt{
namespace files{
    class MediaMetadata{
        /**
            Metadata for a photo or video.

            field: dimensions: Dimension of the photo/video.
            field: location: The GPS coordinate of the photo/video.
            field: time_taken: The timestamp when the photo/video is taken.
        */

    public:
        MediaMetadata(){};

        MediaMetadata(const Dimensions& arg){ m_dimensions = arg; };

    public:
        ///Dimension of the photo/video.
        Dimensions dimensions()const{return m_dimensions;};
        const MediaMetadata& setDimensions(const Dimensions& arg){m_dimensions=arg; return *this;};

        ///The GPS coordinate of the photo/video.
        GpsCoordinates location()const{return m_location;};
        const MediaMetadata& setLocation(const GpsCoordinates& arg){m_location=arg; return *this;};

        ///The timestamp when the photo/video is taken.
        QDateTime timeTaken()const{return m_time_taken;};
        const MediaMetadata& setTimetaken(const QDateTime& arg){m_time_taken=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MediaMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Dimension of the photo/video.
        Dimensions m_dimensions;

        ///The GPS coordinate of the photo/video.
        GpsCoordinates m_location;

        ///The timestamp when the photo/video is taken.
        QDateTime m_time_taken;

    };//MediaMetadata

}//files
}//dropboxQt
