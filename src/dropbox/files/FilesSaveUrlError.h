/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class SaveUrlError{
        /**
            field: download_failed: Failed downloading the given URL.
            field: invalid_url: The given URL is invalid.
            field: not_found: The file where the URL is saved to no longer
                exists.
        */
    public:
        enum Tag{

		/*None*/
		SaveUrlError_PATH,
		/*Failed downloading the given URL.*/
		SaveUrlError_DOWNLOAD_FAILED,
		/*The given URL is invalid.*/
		SaveUrlError_INVALID_URL,
		/*The file where the URL is saved to no longer exists.*/
		SaveUrlError_NOT_FOUND,
		/*None*/
		SaveUrlError_OTHER
        };

        SaveUrlError(){}
        SaveUrlError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        WriteError getPath()const{DBOX_CHECK_STATE((SaveUrlError_PATH == m_tag), "expected tag: SaveUrlError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveUrlError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        WriteError m_path;
    };//SaveUrlError

}//files
}//dropboxQt
