/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/files/FilesFileMetadata.h"
#include "dropbox/files/FilesSaveUrlError.h"
#include "dropbox/files/FilesSaveUrlError.h"

namespace dropboxQt{
namespace files{
    class SaveUrlJobStatus{
        /**
            field: complete: Metadata of the file where the URL is saved to.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*Metadata of the file where the URL is saved to.*/
		SaveUrlJobStatus_COMPLETE,
		/*None*/
		SaveUrlJobStatus_FAILED
        };

        SaveUrlJobStatus(){}
        SaveUrlJobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Metadata of the file where the URL is saved to.
        FileMetadata getComplete()const{DBOX_CHECK_STATE((SaveUrlJobStatus_COMPLETE == m_tag), "expected tag: SaveUrlJobStatus_COMPLETE", m_tag);return m_complete;};

        ///None
        SaveUrlError getFailed()const{DBOX_CHECK_STATE((SaveUrlJobStatus_FAILED == m_tag), "expected tag: SaveUrlJobStatus_FAILED", m_tag);return m_failed;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveUrlJobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        FileMetadata m_complete;
        SaveUrlError m_failed;
    };//SaveUrlJobStatus

}//files
}//dropboxQt
