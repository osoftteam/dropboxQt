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
    class ListFileMembersContinueError{
        /**
            Error for :meth:`list_file_members_continue`.

            field: invalid_cursor: ``ListFileMembersContinueArg.cursor`` is
                invalid.
        */
    public:
        enum Tag{

		/*None*/
		ListFileMembersContinueError_USER_ERROR,
		/*None*/
		ListFileMembersContinueError_ACCESS_ERROR,
		/*:field:`ListFileMembersContinueArg.cursor` is invalid.*/
		ListFileMembersContinueError_INVALID_CURSOR,
		/*None*/
		ListFileMembersContinueError_OTHER
        };

        ListFileMembersContinueError(){}
        ListFileMembersContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharingUserError getUserError()const{DBOX_CHECK_STATE((ListFileMembersContinueError_USER_ERROR == m_tag), "expected tag: ListFileMembersContinueError_USER_ERROR", m_tag);return m_user_error;};

        ///None
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((ListFileMembersContinueError_ACCESS_ERROR == m_tag), "expected tag: ListFileMembersContinueError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
        SharingFileAccessError m_access_error;
    };//ListFileMembersContinueError

}//sharing
}//dropboxQt
