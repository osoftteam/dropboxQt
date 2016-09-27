/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesFileMetadata.h"
#include "dropbox/files/FilesUploadSessionFinishError.h"
#include "dropbox/files/FilesUploadSessionFinishError.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishBatchResultEntry{
    public:
        enum Tag{

		/*None*/
		UploadSessionFinishBatchResultEntry_SUCCESS,
		/*None*/
		UploadSessionFinishBatchResultEntry_FAILURE
        };

        UploadSessionFinishBatchResultEntry(){}
        UploadSessionFinishBatchResultEntry(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        FileMetadata getSuccess()const{DBOX_CHECK_STATE((UploadSessionFinishBatchResultEntry_SUCCESS == m_tag), "expected tag: UploadSessionFinishBatchResultEntry_SUCCESS", m_tag);return m_success;};

        ///None
        UploadSessionFinishError getFailure()const{DBOX_CHECK_STATE((UploadSessionFinishBatchResultEntry_FAILURE == m_tag), "expected tag: UploadSessionFinishBatchResultEntry_FAILURE", m_tag);return m_failure;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<UploadSessionFinishBatchResultEntry>  create(const QByteArray& data);
            static std::unique_ptr<UploadSessionFinishBatchResultEntry>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishBatchResultEntry EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        FileMetadata m_success;
        UploadSessionFinishError m_failure;
    };//UploadSessionFinishBatchResultEntry

}//files
}//dropboxQt
