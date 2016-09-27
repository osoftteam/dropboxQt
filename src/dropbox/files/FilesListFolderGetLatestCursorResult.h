/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderGetLatestCursorResult{
        /**
            field: cursor: Pass the cursor into :meth:`list_folder_continue` to
                see what's changed in the folder since your previous query.
        */

    public:
        ListFolderGetLatestCursorResult(){};

        ListFolderGetLatestCursorResult(const QString& arg){ m_cursor = arg; };

    public:
        ///Pass the cursor into :route:`list_folder/continue` to see what's changed in the folder since your previous query.
        QString cursor()const{return m_cursor;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListFolderGetLatestCursorResult>  create(const QByteArray& data);
            static std::unique_ptr<ListFolderGetLatestCursorResult>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderGetLatestCursorResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Pass the cursor into :route:`list_folder/continue` to see what's changed in the folder since your previous query.
        QString m_cursor;

    };//ListFolderGetLatestCursorResult

}//files
}//dropboxQt
