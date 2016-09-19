/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadSessionFinishArg.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishBatchArg{
        /**
            field: entries: Commit information for each file in the batch.
        */

    public:
        UploadSessionFinishBatchArg(){};

        UploadSessionFinishBatchArg(const std::list <UploadSessionFinishArg>&& arg){ m_entries = arg; };

    public:
        ///Commit information for each file in the batch.
        const std::list <UploadSessionFinishArg>& entries()const{return m_entries;};
        const UploadSessionFinishBatchArg& setEntries(const std::list <UploadSessionFinishArg>&& arg){m_entries=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Commit information for each file in the batch.
        std::list <UploadSessionFinishArg> m_entries;

    };//UploadSessionFinishBatchArg

}//files
}//dropboxQt
