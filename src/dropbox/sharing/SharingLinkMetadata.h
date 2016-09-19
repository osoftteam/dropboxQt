/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingVisibility.h"
#include "dropbox/sharing/SharingVisibility.h"

namespace dropboxQt{
namespace sharing{
    class LinkMetadata{
        /**
            Metadata for a shared link. This can be either a
            :class:`PathLinkMetadata` or :class:`CollectionLinkMetadata`.

            field: url: URL of the shared link.
            field: visibility: Who can access the link.
            field: expires: Expiration time, if set. By default the link won't
                expire.
        */

    public:
        LinkMetadata(){};

        LinkMetadata(const QString& arg){ m_url = arg; };

    public:
        ///URL of the shared link.
        QString url()const{return m_url;};
        const LinkMetadata& setUrl(const QString& arg){m_url=arg; return *this;};

        ///Who can access the link.
        Visibility visibility()const{return m_visibility;};
        const LinkMetadata& setVisibility(const Visibility& arg){m_visibility=arg; return *this;};

        ///Expiration time, if set. By default the link won't expire.
        QDateTime expires()const{return m_expires;};
        const LinkMetadata& setExpires(const QDateTime& arg){m_expires=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static LinkMetadata EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///URL of the shared link.
        QString m_url;

        ///Who can access the link.
        Visibility m_visibility;

        ///Expiration time, if set. By default the link won't expire.
        QDateTime m_expires;

    };//LinkMetadata

}//sharing
}//dropboxQt
