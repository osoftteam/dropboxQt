/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{
namespace sharing{
    class GetFileMetadataError{
        /**
            Error result for :meth:`get_file_metadata`.
        */
    public:
        enum Tag{

		/*None*/
		GetFileMetadataError_USER_ERROR,
		/*None*/
		GetFileMetadataError_ACCESS_ERROR,
		/*None*/
		GetFileMetadataError_OTHER
        };

        GetFileMetadataError(){}
        GetFileMetadataError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((GetFileMetadataError_USER_ERROR == m_tag), "expected tag: GetFileMetadataError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((GetFileMetadataError_ACCESS_ERROR == m_tag), "expected tag: GetFileMetadataError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetFileMetadataError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
    };//GetFileMetadataError

}//sharing
}//dropboxQt
