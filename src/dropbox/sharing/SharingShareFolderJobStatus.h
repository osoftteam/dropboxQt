/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/sharing/SharingSharedFolderMetadata.h"
#include "dropbox/sharing/SharingShareFolderError.h"
#include "dropbox/sharing/SharingShareFolderError.h"

namespace dropboxQt{
namespace sharing{
    class ShareFolderJobStatus{
        /**
            field: complete: The share job has finished. The value is the
                metadata for the folder.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*The share job has finished. The value is the metadata for the folder.*/
		ShareFolderJobStatus_COMPLETE,
		/*None*/
		ShareFolderJobStatus_FAILED
        };

        ShareFolderJobStatus(){}
        ShareFolderJobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The share job has finished. The value is the metadata for the folder.
        SharedFolderMetadata getComplete()const{DBOX_CHECK_STATE((ShareFolderJobStatus_COMPLETE == m_tag), "expected tag: ShareFolderJobStatus_COMPLETE", m_tag);return m_complete;};

        ///None
        ShareFolderError getFailed()const{DBOX_CHECK_STATE((ShareFolderJobStatus_FAILED == m_tag), "expected tag: ShareFolderJobStatus_FAILED", m_tag);return m_failed;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ShareFolderJobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFolderMetadata m_complete;
        ShareFolderError m_failed;
    };//ShareFolderJobStatus

}//sharing
}//dropboxQt
