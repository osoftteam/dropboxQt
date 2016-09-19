/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingAccessLevel.h"
#include "dropbox/sharing/SharingFileMemberActionError.h"
#include "dropbox/sharing/SharingFileMemberActionError.h"

namespace dropboxQt{
namespace sharing{
    class FileMemberActionIndividualResult{
        /**
            field: success: Member was successfully removed from this file. If
                AccessLevel is given, the member still has access via a parent
                shared folder.
            field: member_error: User was not able to perform this action.
        */
    public:
        enum Tag{

		/*Member was successfully removed from this file. If AccessLevel is given, the member still has access via a parent shared folder.*/
		FileMemberActionIndividualResult_SUCCESS,
		/*User was not able to perform this action.*/
		FileMemberActionIndividualResult_MEMBER_ERROR
        };

        FileMemberActionIndividualResult(){}
        FileMemberActionIndividualResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Member was successfully removed from this file. If AccessLevel is given, the member still has access via a parent shared folder.
        AccessLevel getSuccess()const{DBOX_CHECK_STATE((FileMemberActionIndividualResult_SUCCESS == m_tag), "expected tag: FileMemberActionIndividualResult_SUCCESS", m_tag);return m_success;};

        ///User was not able to perform this action.
        FileMemberActionError getMemberError()const{DBOX_CHECK_STATE((FileMemberActionIndividualResult_MEMBER_ERROR == m_tag), "expected tag: FileMemberActionIndividualResult_MEMBER_ERROR", m_tag);return m_member_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileMemberActionIndividualResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        AccessLevel m_success;
        FileMemberActionError m_member_error;
    };//FileMemberActionIndividualResult

}//sharing
}//dropboxQt
