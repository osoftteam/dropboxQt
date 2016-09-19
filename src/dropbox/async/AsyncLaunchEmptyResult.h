/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncLaunchResultBase.h"

namespace dropboxQt{
namespace async{
    class LaunchEmptyResult{
        /**
            Result returned by methods that may either launch an asynchronous
            job or complete synchronously. Upon synchronous completion of the
            job, no additional information is returned.

            field: complete: The job finished synchronously and successfully.
        */
    public:
        enum Tag{

		/*This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.*/
		LaunchResultBase_ASYNC_JOB_ID,
		/*The job finished synchronously and successfully.*/
		LaunchEmptyResult_COMPLETE
        };

        LaunchEmptyResult(){}
        LaunchEmptyResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.
        QString getAsyncJobId()const{DBOX_CHECK_STATE((LaunchResultBase_ASYNC_JOB_ID == m_tag), "expected tag: LaunchResultBase_ASYNC_JOB_ID", m_tag);return m_async_job_id;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static LaunchEmptyResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_async_job_id;
    };//LaunchEmptyResult

}//async
}//dropboxQt
