/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFilesContinueArg{
        /**
            Arguments for :meth:`list_received_files_continue`.

            field: cursor: Cursor in ``ListFilesResult.cursor``
        */

    public:
        ListFilesContinueArg(){};

        ListFilesContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///Cursor in :field:`ListFilesResult.cursor`
        QString cursor()const{return m_cursor;};
        ListFilesContinueArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFilesContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Cursor in :field:`ListFilesResult.cursor`
        QString m_cursor;

    };//ListFilesContinueArg

}//sharing
}//dropboxQt
