/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"
#include "dropbox/sharing/SharingSharedFolderAccessError.h"

namespace dropboxQt{
namespace sharing{
    class ListFolderMembersContinueError{
        /**
            field: invalid_cursor: ``ListFolderMembersContinueArg.cursor`` is
                invalid.
        */
    public:
        enum Tag{

		/*None*/
		ListFolderMembersContinueError_ACCESS_ERROR,
		/*:field:`ListFolderMembersContinueArg.cursor` is invalid.*/
		ListFolderMembersContinueError_INVALID_CURSOR,
		/*None*/
		ListFolderMembersContinueError_OTHER
        };

        ListFolderMembersContinueError(){}
        ListFolderMembersContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((ListFolderMembersContinueError_ACCESS_ERROR == m_tag), "expected tag: ListFolderMembersContinueError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderMembersContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
    };//ListFolderMembersContinueError

}//sharing
}//dropboxQt
