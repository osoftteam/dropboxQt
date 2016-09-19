/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingPendingUploadMode.h"
#include "dropbox/sharing/SharingPendingUploadMode.h"

namespace dropboxQt{
namespace sharing{
    class CreateSharedLinkArg{
        /**
            field: path: The path to share.
            field: short_url: Whether to return a shortened URL.
            field: pending_upload: If it's okay to share a path that does not
                yet exist, set this to either ``PendingUploadMode.file`` or
                ``PendingUploadMode.folder`` to indicate whether to assume it's
                a file or folder.
        */

    public:
        CreateSharedLinkArg():
        m_short_url(false)
        {};

        CreateSharedLinkArg(const QString& arg):
        m_short_url(false)
        { m_path = arg; };

    public:
        ///The path to share.
        QString path()const{return m_path;};
        const CreateSharedLinkArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///Whether to return a shortened URL.
        bool shortUrl()const{return m_short_url;};
        const CreateSharedLinkArg& setShorturl(const bool& arg){m_short_url=arg; return *this;};

        ///If it's okay to share a path that does not yet exist, set this to either :field:`PendingUploadMode.file` or :field:`PendingUploadMode.folder` to indicate whether to assume it's a file or folder.
        PendingUploadMode pendingUpload()const{return m_pending_upload;};
        const CreateSharedLinkArg& setPendingupload(const PendingUploadMode& arg){m_pending_upload=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CreateSharedLinkArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to share.
        QString m_path;

        ///Whether to return a shortened URL.
        bool m_short_url;

        ///If it's okay to share a path that does not yet exist, set this to either :field:`PendingUploadMode.file` or :field:`PendingUploadMode.folder` to indicate whether to assume it's a file or folder.
        PendingUploadMode m_pending_upload;

    };//CreateSharedLinkArg

}//sharing
}//dropboxQt
