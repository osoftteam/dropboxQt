/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderContinueArg{
        /**
            field: cursor: The cursor returned by your last call to
                :meth:`list_folder` or :meth:`list_folder_continue`.
        */

    public:
        ListFolderContinueArg(){};

        ListFolderContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///The cursor returned by your last call to :route:`list_folder` or :route:`list_folder/continue`.
        QString cursor()const{return m_cursor;};
        ListFolderContinueArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The cursor returned by your last call to :route:`list_folder` or :route:`list_folder/continue`.
        QString m_cursor;

    };//ListFolderContinueArg

}//files
}//dropboxQt
