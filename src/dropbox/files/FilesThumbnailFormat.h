/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ThumbnailFormat{
    public:
        enum Tag{

		/*None*/
		ThumbnailFormat_JPEG,
		/*None*/
		ThumbnailFormat_PNG
        };

        ThumbnailFormat(){}
        ThumbnailFormat(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ThumbnailFormat EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//ThumbnailFormat

}//files
}//dropboxQt
