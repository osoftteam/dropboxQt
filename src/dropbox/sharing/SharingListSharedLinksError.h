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
    class ListSharedLinksError{
        /**
            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`list_shared_links` to obtain a new cursor.
        */
    public:
        enum Tag{

		/*None*/
		ListSharedLinksError_PATH,
		/*Indicates that the cursor has been invalidated. Call :route:`list_shared_links` to obtain a new cursor.*/
		ListSharedLinksError_RESET,
		/*None*/
		ListSharedLinksError_OTHER
        };

        ListSharedLinksError(){}
        ListSharedLinksError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        files::LookupError getPath()const{DBOX_CHECK_STATE((ListSharedLinksError_PATH == m_tag), "expected tag: ListSharedLinksError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListSharedLinksError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        files::LookupError m_path;
    };//ListSharedLinksError

}//sharing
}//dropboxQt
