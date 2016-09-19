/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{
namespace sharing{
    class FileMemberActionError{
        /**
            field: invalid_member: Specified member was not found.
            field: no_permission: User does not have permission to perform this
                action on this member.
            field: access_error: Specified file was invalid or user does not
                have access.
        */
    public:
        enum Tag{

		/*Specified member was not found.*/
		FileMemberActionError_INVALID_MEMBER,
		/*User does not have permission to perform this action on this member.*/
		FileMemberActionError_NO_PERMISSION,
		/*Specified file was invalid or user does not have access.*/
		FileMemberActionError_ACCESS_ERROR,
		/*None*/
		FileMemberActionError_OTHER
        };

        FileMemberActionError(){}
        FileMemberActionError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Specified file was invalid or user does not have access.
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((FileMemberActionError_ACCESS_ERROR == m_tag), "expected tag: FileMemberActionError_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileMemberActionError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharingFileAccessError m_access_error;
    };//FileMemberActionError

}//sharing
}//dropboxQt
