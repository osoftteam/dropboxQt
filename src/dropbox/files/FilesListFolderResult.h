/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesMetadata.h"

namespace dropboxQt{
namespace files{
    class ListFolderResult{
        /**
            field: entries: The files and (direct) subfolders in the folder.
            field: cursor: Pass the cursor into :meth:`list_folder_continue` to
                see what's changed in the folder since your previous query.
            field: has_more: If true, then there are more entries available.
                Pass the cursor to :meth:`list_folder_continue` to retrieve the
                rest.
        */

    public:
        ListFolderResult(){};

        ListFolderResult(const std::list <Metadata>&& arg){ m_entries = arg; };

    public:
        ///The files and (direct) subfolders in the folder.
        const std::list <Metadata>& entries()const{return m_entries;};

        ///Pass the cursor into :route:`list_folder/continue` to see what's changed in the folder since your previous query.
        QString cursor()const{return m_cursor;};

        ///If true, then there are more entries available. Pass the cursor to :route:`list_folder/continue` to retrieve the rest.
        bool hasMore()const{return m_has_more;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The files and (direct) subfolders in the folder.
        std::list <Metadata> m_entries;

        ///Pass the cursor into :route:`list_folder/continue` to see what's changed in the folder since your previous query.
        QString m_cursor;

        ///If true, then there are more entries available. Pass the cursor to :route:`list_folder/continue` to retrieve the rest.
        bool m_has_more;

    };//ListFolderResult

}//files
}//dropboxQt
