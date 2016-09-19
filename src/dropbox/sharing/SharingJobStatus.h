/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/sharing/SharingJobError.h"
#include "dropbox/sharing/SharingJobError.h"

namespace dropboxQt{
namespace sharing{
    class JobStatus{
        /**
            field: complete: The asynchronous job has finished.
            field: failed: The asynchronous job returned an error.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*The asynchronous job has finished.*/
		JobStatus_COMPLETE,
		/*The asynchronous job returned an error.*/
		JobStatus_FAILED
        };

        JobStatus(){}
        JobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The asynchronous job returned an error.
        JobError getFailed()const{DBOX_CHECK_STATE((JobStatus_FAILED == m_tag), "expected tag: JobStatus_FAILED", m_tag);return m_failed;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static JobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        JobError m_failed;
    };//JobStatus

}//sharing
}//dropboxQt
