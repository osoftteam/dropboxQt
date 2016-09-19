/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesThumbnailFormat.h"
#include "dropbox/files/FilesThumbnailFormat.h"
#include "dropbox/files/FilesThumbnailSize.h"
#include "dropbox/files/FilesThumbnailSize.h"

namespace dropboxQt{
namespace files{
    class ThumbnailArg{
        /**
            field: path: The path to the image file you want to thumbnail.
            field: format: The format for the thumbnail image, jpeg (default) or
                png. For  images that are photos, jpeg should be preferred,
                while png is  better for screenshots and digital arts.
            field: size: The size for the thumbnail image.
        */

    public:
        ThumbnailArg():
        m_format(ThumbnailFormat::ThumbnailFormat_JPEG)
        ,m_size(ThumbnailSize::ThumbnailSize_W64H64)
        {};

        ThumbnailArg(const QString& arg):
        m_format(ThumbnailFormat::ThumbnailFormat_JPEG)
        ,m_size(ThumbnailSize::ThumbnailSize_W64H64)
        { m_path = arg; };

    public:
        ///The path to the image file you want to thumbnail.
        QString path()const{return m_path;};
        const ThumbnailArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The format for the thumbnail image, jpeg (default) or png. For  images that are photos, jpeg should be preferred, while png is  better for screenshots and digital arts.
        ThumbnailFormat format()const{return m_format;};
        const ThumbnailArg& setFormat(const ThumbnailFormat& arg){m_format=arg; return *this;};

        ///The size for the thumbnail image.
        ThumbnailSize size()const{return m_size;};
        const ThumbnailArg& setSize(const ThumbnailSize& arg){m_size=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ThumbnailArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the image file you want to thumbnail.
        QString m_path;

        ///The format for the thumbnail image, jpeg (default) or png. For  images that are photos, jpeg should be preferred, while png is  better for screenshots and digital arts.
        ThumbnailFormat m_format;

        ///The size for the thumbnail image.
        ThumbnailSize m_size;

    };//ThumbnailArg

}//files
}//dropboxQt
