/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class UploadSessionStartResult{
        /**
            field: session_id: A unique identifier for the upload session. Pass
                this to :meth:`upload_session_append_v2` and
                :meth:`upload_session_finish`.
        */

    public:
        UploadSessionStartResult(){};

        UploadSessionStartResult(const QString& arg){ m_session_id = arg; };

    public:
        ///A unique identifier for the upload session. Pass this to :route:`upload_session/append_v2` and :route:`upload_session/finish`.
        QString sessionId()const{return m_session_id;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionStartResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A unique identifier for the upload session. Pass this to :route:`upload_session/append_v2` and :route:`upload_session/finish`.
        QString m_session_id;

    };//UploadSessionStartResult

}//files
}//dropboxQt
