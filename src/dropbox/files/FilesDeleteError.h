/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class DeleteError{
    public:
        enum Tag{

		/*None*/
		DeleteError_PATH_LOOKUP,
		/*None*/
		DeleteError_PATH_WRITE,
		/*None*/
		DeleteError_OTHER
        };

        DeleteError(){}
        DeleteError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPathLookup()const{DBOX_CHECK_STATE((DeleteError_PATH_LOOKUP == m_tag), "expected tag: DeleteError_PATH_LOOKUP", m_tag);return m_path_lookup;};

        ///None
        WriteError getPathWrite()const{DBOX_CHECK_STATE((DeleteError_PATH_WRITE == m_tag), "expected tag: DeleteError_PATH_WRITE", m_tag);return m_path_write;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DeleteError>  create(const QByteArray& data);
            static std::unique_ptr<DeleteError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DeleteError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path_lookup;
        WriteError m_path_write;
    };//DeleteError

}//files
}//dropboxQt
