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
    class AddFileMemberError{
        /**
            Errors for :meth:`add_file_member`.

            field: rate_limit: The user has reached the rate limit for
                invitations.
            field: invalid_comment: The custom message did not pass comment
                permissions checks.
        */
    public:
        enum Tag{

		/*None*/
		AddFileMemberError_USER_ERROR,
		/*None*/
		AddFileMemberError_ACCESS_ERROR,
		/*The user has reached the rate limit for invitations.*/
		AddFileMemberError_RATE_LIMIT,
		/*The custom message did not pass comment permissions checks.*/
		AddFileMemberError_INVALID_COMMENT,
		/*None*/
		AddFileMemberError_OTHER
        };

        AddFileMemberError(){}
        AddFileMemberError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((AddFileMemberError_USER_ERROR == m_tag), "expected tag: AddFileMemberError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((AddFileMemberError_ACCESS_ERROR == m_tag), "expected tag: AddFileMemberError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddFileMemberError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
    };//AddFileMemberError

}//sharing
}//dropboxQt
