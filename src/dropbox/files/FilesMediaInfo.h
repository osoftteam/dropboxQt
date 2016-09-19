/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMediaMetadata.h"

namespace dropboxQt{
namespace files{
    class MediaInfo{
        /**
            field: pending: Indicate the photo/video is still under processing
                and metadata is not available yet.
            field: metadata: The metadata for the photo/video.
        */
    public:
        enum Tag{

		/*Indicate the photo/video is still under processing and metadata is not available yet.*/
		MediaInfo_PENDING,
		/*The metadata for the photo/video.*/
		MediaInfo_METADATA
        };

        MediaInfo(){}
        MediaInfo(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The metadata for the photo/video.
        MediaMetadata getMetadata()const{DBOX_CHECK_STATE((MediaInfo_METADATA == m_tag), "expected tag: MediaInfo_METADATA", m_tag);return m_metadata;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MediaInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        MediaMetadata m_metadata;
    };//MediaInfo

}//files
}//dropboxQt
