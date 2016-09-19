/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace async{
    class PollError{
        /**
            Error returned by methods for polling the status of asynchronous
            job.

            field: invalid_async_job_id: The job ID is invalid.
            field: internal_error: Something went wrong with the job on
                Dropbox's end. You'll need to verify that the action you were
                taking succeeded, and if not, try again. This should happen very
                rarely.
        */
    public:
        enum Tag{

		/*The job ID is invalid.*/
		PollError_INVALID_ASYNC_JOB_ID,
		/*Something went wrong with the job on Dropbox's end. You'll need to verify that the action you were taking succeeded, and if not, try again. This should happen very rarely.*/
		PollError_INTERNAL_ERROR,
		/*None*/
		PollError_OTHER
        };

        PollError(){}
        PollError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PollError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//PollError

}//async
}//dropboxQt
