/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ThumbnailSize{
        /**
            field: w32h32: 32 by 32 px.
            field: w64h64: 64 by 64 px.
            field: w128h128: 128 by 128 px.
            field: w640h480: 640 by 480 px.
            field: w1024h768: 1024 by 768
        */
    public:
        enum Tag{

		/*32 by 32 px.*/
		ThumbnailSize_W32H32,
		/*64 by 64 px.*/
		ThumbnailSize_W64H64,
		/*128 by 128 px.*/
		ThumbnailSize_W128H128,
		/*640 by 480 px.*/
		ThumbnailSize_W640H480,
		/*1024 by 768*/
		ThumbnailSize_W1024H768
        };

        ThumbnailSize(){}
        ThumbnailSize(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ThumbnailSize EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ThumbnailSize

}//files
}//dropboxQt
