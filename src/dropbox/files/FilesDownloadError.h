/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace files{
    class DownloadError{
    public:
        enum Tag{

		/*None*/
		DownloadError_PATH,
		/*None*/
		DownloadError_OTHER
        };

        DownloadError(){}
        DownloadError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPath()const{DBOX_CHECK_STATE((DownloadError_PATH == m_tag), "expected tag: DownloadError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DownloadError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//DownloadError

}//files
}//dropboxQt
