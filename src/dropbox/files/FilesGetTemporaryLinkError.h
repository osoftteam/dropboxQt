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
    class GetTemporaryLinkError{
    public:
        enum Tag{

		/*None*/
		GetTemporaryLinkError_PATH,
		/*None*/
		GetTemporaryLinkError_OTHER
        };

        GetTemporaryLinkError(){}
        GetTemporaryLinkError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPath()const{DBOX_CHECK_STATE((GetTemporaryLinkError_PATH == m_tag), "expected tag: GetTemporaryLinkError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetTemporaryLinkError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//GetTemporaryLinkError

}//files
}//dropboxQt
