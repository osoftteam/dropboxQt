/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncLaunchResultBase.h"
#include "dropbox/files/FilesFileMetadata.h"

namespace dropboxQt{
namespace files{
    class SaveUrlResult{
        /**
            field: complete: Metadata of the file where the URL is saved to.
        */
    public:
        enum Tag{

		/*This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.*/
		LaunchResultBase_ASYNC_JOB_ID,
		/*Metadata of the file where the URL is saved to.*/
		SaveUrlResult_COMPLETE
        };

        SaveUrlResult(){}
        SaveUrlResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///This response indicates that the processing is asynchronous. The string is an id that can be used to obtain the status of the asynchronous job.
        QString getAsyncJobId()const{DBOX_CHECK_STATE((LaunchResultBase_ASYNC_JOB_ID == m_tag), "expected tag: LaunchResultBase_ASYNC_JOB_ID", m_tag);return m_async_job_id;};

        ///Metadata of the file where the URL is saved to.
        FileMetadata getComplete()const{DBOX_CHECK_STATE((SaveUrlResult_COMPLETE == m_tag), "expected tag: SaveUrlResult_COMPLETE", m_tag);return m_complete;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveUrlResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_async_job_id;
        FileMetadata m_complete;
    };//SaveUrlResult

}//files
}//dropboxQt
