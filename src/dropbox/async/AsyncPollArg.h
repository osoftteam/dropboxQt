/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace async{
    class PollArg{
        /**
            Arguments for methods that poll the status of an asynchronous job.

            field: async_job_id: Id of the asynchronous job. This is the value
                of a response returned from the method that launched the job.
        */

    public:
        PollArg(){};

        PollArg(const QString& arg){ m_async_job_id = arg; };

    public:
        ///Id of the asynchronous job. This is the value of a response returned from the method that launched the job.
        QString asyncJobId()const{return m_async_job_id;};
        PollArg& setAsyncjobid(const QString& arg){m_async_job_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PollArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Id of the asynchronous job. This is the value of a response returned from the method that launched the job.
        QString m_async_job_id;

    };//PollArg

}//async
}//dropboxQt
