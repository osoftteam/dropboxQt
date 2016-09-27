/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class ListFolderLongpollArg{
        /**
            field: cursor: A cursor as returned by :meth:`list_folder` or
                :meth:`list_folder_continue`. Cursors retrieved by setting
                ``ListFolderArg.include_media_info`` to ``True`` are not
                supported.
            field: timeout: A timeout in seconds. The request will block for at
                most this length of time, plus up to 90 seconds of random jitter
                added to avoid the thundering herd problem. Care should be taken
                when using this parameter, as some network infrastructure does
                not support long timeouts.
        */

    public:
        ListFolderLongpollArg():
        m_timeout(30)
        {};

        ListFolderLongpollArg(const QString& arg):
        m_timeout(30)
        { m_cursor = arg; };

    public:
        ///A cursor as returned by :route:`list_folder` or :route:`list_folder/continue`. Cursors retrieved by setting :field:`ListFolderArg.include_media_info` to :val:`true` are not supported.
        QString cursor()const{return m_cursor;};
        ListFolderLongpollArg& setCursor(const QString& arg){m_cursor=arg;return *this;};

        ///A timeout in seconds. The request will block for at most this length of time, plus up to 90 seconds of random jitter added to avoid the thundering herd problem. Care should be taken when using this parameter, as some network infrastructure does not support long timeouts.
        int timeout()const{return m_timeout;};
        ListFolderLongpollArg& setTimeout(const int& arg){m_timeout=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListFolderLongpollArg>  create(const QByteArray& data);
            static std::unique_ptr<ListFolderLongpollArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderLongpollArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A cursor as returned by :route:`list_folder` or :route:`list_folder/continue`. Cursors retrieved by setting :field:`ListFolderArg.include_media_info` to :val:`true` are not supported.
        QString m_cursor;

        ///A timeout in seconds. The request will block for at most this length of time, plus up to 90 seconds of random jitter added to avoid the thundering herd problem. Care should be taken when using this parameter, as some network infrastructure does not support long timeouts.
        int m_timeout;

    };//ListFolderLongpollArg

}//files
}//dropboxQt
