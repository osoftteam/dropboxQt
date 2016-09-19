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
    class UnshareFolderError{
        /**
            field: team_folder: This action cannot be performed on a team shared
                folder.
            field: no_permission: The current user does not have permission to
                perform this action.
        */
    public:
        enum Tag{

		/*None*/
		UnshareFolderError_ACCESS_ERROR,
		/*This action cannot be performed on a team shared folder.*/
		UnshareFolderError_TEAM_FOLDER,
		/*The current user does not have permission to perform this action.*/
		UnshareFolderError_NO_PERMISSION,
		/*None*/
		UnshareFolderError_OTHER
        };

        UnshareFolderError(){}
        UnshareFolderError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        SharedFolderAccessError getAccessError()const{DBOX_CHECK_STATE((UnshareFolderError_ACCESS_ERROR == m_tag), "expected tag: UnshareFolderError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UnshareFolderError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderAccessError m_access_error;
    };//UnshareFolderError

}//sharing
}//dropboxQt
