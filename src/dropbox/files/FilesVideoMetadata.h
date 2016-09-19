/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMediaMetadata.h"

namespace dropboxQt{
namespace files{
    class VideoMetadata : public MediaMetadata{
        /**
            Metadata for a video.

            field: duration: The duration of the video in milliseconds.
        */

    public:
        VideoMetadata(){};

        VideoMetadata(const int& arg){ m_duration = arg; };

    public:
        ///The duration of the video in milliseconds.
        int duration()const{return m_duration;};
        const VideoMetadata& setDuration(const int& arg){m_duration=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static VideoMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The duration of the video in milliseconds.
        int m_duration;

    };//VideoMetadata

}//files
}//dropboxQt
