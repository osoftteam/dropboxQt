/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharingUserError.h"
#include "dropbox/sharing/SharingSharingUserError.h"

namespace dropboxQt{
namespace sharing{
    class ListFilesContinueError{
        /**
            Error results for :meth:`list_received_files_continue`.

            field: user_error: User account had a problem.
            field: invalid_cursor: ``ListFilesContinueArg.cursor`` is invalid.
        */
    public:
        enum Tag{

		/*User account had a problem.*/
		ListFilesContinueError_USER_ERROR,
		/*:field:`ListFilesContinueArg.cursor` is invalid.*/
		ListFilesContinueError_INVALID_CURSOR,
		/*None*/
		ListFilesContinueError_OTHER
        };

        ListFilesContinueError(){}
        ListFilesContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///User account had a problem.
        SharingUserError getUserError()const{DBOX_CHECK_STATE((ListFilesContinueError_USER_ERROR == m_tag), "expected tag: ListFilesContinueError_USER_ERROR", m_tag);return m_user_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFilesContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingUserError m_user_error;
    };//ListFilesContinueError

}//sharing
}//dropboxQt
