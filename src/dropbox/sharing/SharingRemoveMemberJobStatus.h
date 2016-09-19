/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/sharing/SharingMemberAccessLevelResult.h"
#include "dropbox/sharing/SharingRemoveFolderMemberError.h"
#include "dropbox/sharing/SharingRemoveFolderMemberError.h"

namespace dropboxQt{
namespace sharing{
    class RemoveMemberJobStatus{
        /**
            field: complete: Removing the folder member has finished. The value
                is information about whether the member has another form of
                access.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*Removing the folder member has finished. The value is information about whether the member has another form of access.*/
		RemoveMemberJobStatus_COMPLETE,
		/*None*/
		RemoveMemberJobStatus_FAILED
        };

        RemoveMemberJobStatus(){}
        RemoveMemberJobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Removing the folder member has finished. The value is information about whether the member has another form of access.
        MemberAccessLevelResult getComplete()const{DBOX_CHECK_STATE((RemoveMemberJobStatus_COMPLETE == m_tag), "expected tag: RemoveMemberJobStatus_COMPLETE", m_tag);return m_complete;};

        ///None
        RemoveFolderMemberError getFailed()const{DBOX_CHECK_STATE((RemoveMemberJobStatus_FAILED == m_tag), "expected tag: RemoveMemberJobStatus_FAILED", m_tag);return m_failed;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RemoveMemberJobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        MemberAccessLevelResult m_complete;
        RemoveFolderMemberError m_failed;
    };//RemoveMemberJobStatus

}//sharing
}//dropboxQt
