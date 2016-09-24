/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class GpsCoordinates{
        /**
            GPS coordinates for a photo or video.

            field: latitude: Latitude of the GPS coordinates.
            field: longitude: Longitude of the GPS coordinates.
        */

    public:
        GpsCoordinates(){};

        GpsCoordinates(const float& arg){ m_latitude = arg; };

    public:
        ///Latitude of the GPS coordinates.
        float latitude()const{return m_latitude;};
        GpsCoordinates& setLatitude(const float& arg){m_latitude=arg; return *this;};

        ///Longitude of the GPS coordinates.
        float longitude()const{return m_longitude;};
        GpsCoordinates& setLongitude(const float& arg){m_longitude=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GpsCoordinates EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Latitude of the GPS coordinates.
        float m_latitude;

        ///Longitude of the GPS coordinates.
        float m_longitude;

    };//GpsCoordinates

}//files
}//dropboxQt
