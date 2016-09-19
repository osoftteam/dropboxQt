/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{
namespace files{
    class GetCopyReferenceResult{
        /**
            field: metadata: Metadata of the file or folder.
            field: copy_reference: A copy reference to the file or folder.
            field: expires: The expiration date of the copy reference. This
                value is currently set to be far enough in the future so that
                expiration is effectively not an issue.
        */

    public:
        GetCopyReferenceResult(){};

        GetCopyReferenceResult(const Metadata& arg){ m_metadata = arg; };

    public:
        ///Metadata of the file or folder.
        Metadata metadata()const{return m_metadata;};

        ///A copy reference to the file or folder.
        QString copyReference()const{return m_copy_reference;};

        ///The expiration date of the copy reference. This value is currently set to be far enough in the future so that expiration is effectively not an issue.
        QDateTime expires()const{return m_expires;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetCopyReferenceResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Metadata of the file or folder.
        Metadata m_metadata;

        ///A copy reference to the file or folder.
        QString m_copy_reference;

        ///The expiration date of the copy reference. This value is currently set to be far enough in the future so that expiration is effectively not an issue.
        QDateTime m_expires;

    };//GetCopyReferenceResult

}//files
}//dropboxQt
