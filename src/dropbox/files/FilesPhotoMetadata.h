/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMediaMetadata.h"

namespace dropboxQt{
namespace files{
    class PhotoMetadata : public MediaMetadata{
        /**
            Metadata for a photo.
        */

    public:
        PhotoMetadata(){};


    public:
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PhotoMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//PhotoMetadata

}//files
}//dropboxQt
