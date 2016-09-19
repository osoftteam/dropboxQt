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
    class ListFileMembersError{
        /**
            Error for :meth:`list_file_members`.
        */
    public:
        enum Tag{

		/*None*/
		ListFileMembersError_USER_ERROR,
		/*None*/
		ListFileMembersError_ACCESS_ERROR,
		/*None*/
		ListFileMembersError_OTHER
        };

        ListFileMembersError(){}
        ListFileMembersError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((ListFileMembersError_USER_ERROR == m_tag), "expected tag: ListFileMembersError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((ListFileMembersError_ACCESS_ERROR == m_tag), "expected tag: ListFileMembersError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
    };//ListFileMembersError

}//sharing
}//dropboxQt
