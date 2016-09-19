/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadSessionCursor.h"

namespace dropboxQt{
namespace files{
    class UploadSessionAppendArg{
        /**
            field: cursor: Contains the upload session ID and the offset.
            field: close: If true, the current session will be closed, at which
                point you won't be able to call :meth:`upload_session_append_v2`
                anymore with the current session.
        */

    public:
        UploadSessionAppendArg():
        m_close(false)
        {};

        UploadSessionAppendArg(const UploadSessionCursor& arg):
        m_close(false)
        { m_cursor = arg; };

    public:
        ///Contains the upload session ID and the offset.
        UploadSessionCursor cursor()const{return m_cursor;};
        const UploadSessionAppendArg& setCursor(const UploadSessionCursor& arg){m_cursor=arg; return *this;};

        ///If true, the current session will be closed, at which point you won't be able to call :route:`upload_session/append_v2` anymore with the current session.
        bool close()const{return m_close;};
        const UploadSessionAppendArg& setClose(const bool& arg){m_close=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionAppendArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Contains the upload session ID and the offset.
        UploadSessionCursor m_cursor;

        ///If true, the current session will be closed, at which point you won't be able to call :route:`upload_session/append_v2` anymore with the current session.
        bool m_close;

    };//UploadSessionAppendArg

}//files
}//dropboxQt
