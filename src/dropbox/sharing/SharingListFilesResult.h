/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFileMetadata.h"

namespace dropboxQt{
namespace sharing{
    class ListFilesResult{
        /**
            Success results for :meth:`list_received_files`.

            field: entries: Information about the files shared with current
                user.
            field: cursor: Cursor used to obtain additional shared files.
        */

    public:
        ListFilesResult(){};

        ListFilesResult(const std::list <SharedFileMetadata>&& arg){ m_entries = arg; };

    public:
        ///Information about the files shared with current user.
        const std::list <SharedFileMetadata>& entries()const{return m_entries;};

        ///Cursor used to obtain additional shared files.
        QString cursor()const{return m_cursor;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFilesResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Information about the files shared with current user.
        std::list <SharedFileMetadata> m_entries;

        ///Cursor used to obtain additional shared files.
        QString m_cursor;

    };//ListFilesResult

}//sharing
}//dropboxQt
