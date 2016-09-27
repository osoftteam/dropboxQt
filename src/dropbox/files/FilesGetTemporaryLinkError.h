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
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GetTemporaryLinkError>  create(const QByteArray& data);
            static std::unique_ptr<GetTemporaryLinkError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GetTemporaryLinkError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//GetTemporaryLinkError

}//files
}//dropboxQt
