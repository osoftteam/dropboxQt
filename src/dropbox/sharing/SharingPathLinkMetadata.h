/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingLinkMetadata.h"

namespace dropboxQt{
namespace sharing{
    class PathLinkMetadata : public LinkMetadata{
        /**
            Metadata for a path-based shared link.

            field: path: Path in user's Dropbox.
        */

    public:
        PathLinkMetadata(){};

        PathLinkMetadata(const QString& arg){ m_path = arg; };

    public:
        ///Path in user's Dropbox.
        QString path()const{return m_path;};
        PathLinkMetadata& setPath(const QString& arg){m_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PathLinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Path in user's Dropbox.
        QString m_path;

    };//PathLinkMetadata

}//sharing
}//dropboxQt
