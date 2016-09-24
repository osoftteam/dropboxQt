/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class UploadSessionCursor{
        /**
            field: session_id: The upload session ID (returned by
                :meth:`upload_session_start`).
            field: offset: The amount of data that has been uploaded so far. We
                use this to make sure upload data isn't lost or duplicated in
                the event of a network error.
        */

    public:
        UploadSessionCursor(){};

        UploadSessionCursor(const QString& arg){ m_session_id = arg; };

    public:
        ///The upload session ID (returned by :route:`upload_session/start`).
        QString sessionId()const{return m_session_id;};
        UploadSessionCursor& setSessionid(const QString& arg){m_session_id=arg; return *this;};

        ///The amount of data that has been uploaded so far. We use this to make sure upload data isn't lost or duplicated in the event of a network error.
        int offset()const{return m_offset;};
        UploadSessionCursor& setOffset(const int& arg){m_offset=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionCursor EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The upload session ID (returned by :route:`upload_session/start`).
        QString m_session_id;

        ///The amount of data that has been uploaded so far. We use this to make sure upload data isn't lost or duplicated in the event of a network error.
        int m_offset;

    };//UploadSessionCursor

}//files
}//dropboxQt
