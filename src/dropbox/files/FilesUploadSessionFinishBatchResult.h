/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadSessionFinishBatchResultEntry.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishBatchResult{
        /**
            field: entries: Commit result for each file in the batch.
        */

    public:
        UploadSessionFinishBatchResult(){};

        UploadSessionFinishBatchResult(const std::list <UploadSessionFinishBatchResultEntry>&& arg){ m_entries = arg; };

    public:
        ///Commit result for each file in the batch.
        const std::list <UploadSessionFinishBatchResultEntry>& entries()const{return m_entries;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishBatchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Commit result for each file in the batch.
        std::list <UploadSessionFinishBatchResultEntry> m_entries;

    };//UploadSessionFinishBatchResult

}//files
}//dropboxQt
