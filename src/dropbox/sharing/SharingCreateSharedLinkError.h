/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace sharing{
    class CreateSharedLinkError{
    public:
        enum Tag{

		/*None*/
		CreateSharedLinkError_PATH,
		/*None*/
		CreateSharedLinkError_OTHER
        };

        CreateSharedLinkError(){}
        CreateSharedLinkError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        files::LookupError getPath()const{DBOX_CHECK_STATE((CreateSharedLinkError_PATH == m_tag), "expected tag: CreateSharedLinkError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CreateSharedLinkError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        files::LookupError m_path;
    };//CreateSharedLinkError

}//sharing
}//dropboxQt
