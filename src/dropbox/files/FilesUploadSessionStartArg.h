/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class UploadSessionStartArg{
        /**
            field: close: If true, the current session will be closed, at which
                point you won't be able to call :meth:`upload_session_append_v2`
                anymore with the current session.
        */

    public:
        UploadSessionStartArg():
        m_close(false)
        {};

        UploadSessionStartArg(const bool& arg):
        m_close(false)
        { m_close = arg; };

    public:
        ///If true, the current session will be closed, at which point you won't be able to call :route:`upload_session/append_v2` anymore with the current session.
        bool close()const{return m_close;};
        UploadSessionStartArg& setClose(const bool& arg){m_close=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionStartArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///If true, the current session will be closed, at which point you won't be able to call :route:`upload_session/append_v2` anymore with the current session.
        bool m_close;

    };//UploadSessionStartArg

}//files
}//dropboxQt
