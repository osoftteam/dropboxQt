/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class Dimensions{
        /**
            Dimensions for a photo or video.

            field: height: Height of the photo/video.
            field: width: Width of the photo/video.
        */

    public:
        Dimensions(){};

        Dimensions(const int& arg){ m_height = arg; };

    public:
        ///Height of the photo/video.
        int height()const{return m_height;};
        Dimensions& setHeight(const int& arg){m_height=arg; return *this;};

        ///Width of the photo/video.
        int width()const{return m_width;};
        Dimensions& setWidth(const int& arg){m_width=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static Dimensions EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Height of the photo/video.
        int m_height;

        ///Width of the photo/video.
        int m_width;

    };//Dimensions

}//files
}//dropboxQt
