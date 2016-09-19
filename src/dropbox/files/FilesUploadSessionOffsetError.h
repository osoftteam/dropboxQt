/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class UploadSessionOffsetError{
        /**
            field: correct_offset: The offset up to which data has been
                collected.
        */

    public:
        UploadSessionOffsetError(){};

        UploadSessionOffsetError(const int& arg){ m_correct_offset = arg; };

    public:
        ///The offset up to which data has been collected.
        int correctOffset()const{return m_correct_offset;};
        const UploadSessionOffsetError& setCorrectoffset(const int& arg){m_correct_offset=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionOffsetError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The offset up to which data has been collected.
        int m_correct_offset;

    };//UploadSessionOffsetError

}//files
}//dropboxQt
