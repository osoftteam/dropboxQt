/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersContinueArg{
        /**
            Arguments for :meth:`list_file_members_continue`.

            field: cursor: The cursor returned by your last call to
                :meth:`list_file_members`, :meth:`list_file_members_continue`,
                or :meth:`list_file_members_batch`.
        */

    public:
        ListFileMembersContinueArg(){};

        ListFileMembersContinueArg(const QString& arg){ m_cursor = arg; };

    public:
        ///The cursor returned by your last call to :route:`list_file_members`, :route:`list_file_members/continue`, or :route:`list_file_members/batch`.
        QString cursor()const{return m_cursor;};
        ListFileMembersContinueArg& setCursor(const QString& arg){m_cursor=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersContinueArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The cursor returned by your last call to :route:`list_file_members`, :route:`list_file_members/continue`, or :route:`list_file_members/batch`.
        QString m_cursor;

    };//ListFileMembersContinueArg

}//sharing
}//dropboxQt
