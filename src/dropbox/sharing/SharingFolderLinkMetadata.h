/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkMetadata.h"

namespace dropboxQt{
namespace sharing{
    class FolderLinkMetadata : public SharedLinkMetadata{
        /**
            The metadata of a folder shared link
        */

    public:
        FolderLinkMetadata(){};


    public:
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FolderLinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
    };//FolderLinkMetadata

}//sharing
}//dropboxQt
