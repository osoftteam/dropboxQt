/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"

namespace dropboxQt{
namespace async{
    class PollEmptyResult{
        /**
            Result returned by methods that poll for the status of an
            asynchronous job. Upon completion of the job, no additional
            information is returned.

            field: complete: The asynchronous job has completed successfully.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*The asynchronous job has completed successfully.*/
		PollEmptyResult_COMPLETE
        };

        PollEmptyResult(){}
        PollEmptyResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static PollEmptyResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//PollEmptyResult

}//async
}//dropboxQt
