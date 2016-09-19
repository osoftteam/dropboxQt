/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadWriteFailed.h"

namespace dropboxQt{
namespace files{
    class UploadError{
        /**
            field: path: Unable to save the uploaded contents to a file.
        */
    public:
        enum Tag{

		/*Unable to save the uploaded contents to a file.*/
		UploadError_PATH,
		/*None*/
		UploadError_OTHER
        };

        UploadError(){}
        UploadError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Unable to save the uploaded contents to a file.
        UploadWriteFailed getPath()const{DBOX_CHECK_STATE((UploadError_PATH == m_tag), "expected tag: UploadError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        UploadWriteFailed m_path;
    };//UploadError

}//files
}//dropboxQt
