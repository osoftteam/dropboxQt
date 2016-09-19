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
    class UnshareFileError{
        /**
            Error result for :meth:`unshare_file`.
        */
    public:
        enum Tag{

		/*None*/
		UnshareFileError_USER_ERROR,
		/*None*/
		UnshareFileError_ACCESS_ERROR,
		/*None*/
		UnshareFileError_OTHER
        };

        UnshareFileError(){}
        UnshareFileError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((UnshareFileError_USER_ERROR == m_tag), "expected tag: UnshareFileError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((UnshareFileError_ACCESS_ERROR == m_tag), "expected tag: UnshareFileError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UnshareFileError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
    };//UnshareFileError

}//sharing
}//dropboxQt
