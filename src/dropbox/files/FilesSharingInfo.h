/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SharingInfo{
        /**
            Sharing info for a file or folder.

            field: read_only: True if the file or folder is inside a read-only
                shared folder.
        */

    public:
        SharingInfo(){};

        SharingInfo(const bool& arg){ m_read_only = arg; };

    public:
        ///True if the file or folder is inside a read-only shared folder.
        bool readOnly()const{return m_read_only;};
        const SharingInfo& setReadonly(const bool& arg){m_read_only=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharingInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///True if the file or folder is inside a read-only shared folder.
        bool m_read_only;

    };//SharingInfo

}//files
}//dropboxQt
