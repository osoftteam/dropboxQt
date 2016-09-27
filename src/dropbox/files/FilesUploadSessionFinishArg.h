/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadSessionCursor.h"
#include "dropbox/files/FilesCommitInfo.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishArg{
        /**
            field: cursor: Contains the upload session ID and the offset.
            field: commit: Contains the path and other optional modifiers for
                the commit.
        */

    public:
        UploadSessionFinishArg(){};

        UploadSessionFinishArg(const UploadSessionCursor& arg){ m_cursor = arg; };

    public:
        ///Contains the upload session ID and the offset.
        UploadSessionCursor cursor()const{return m_cursor;};
        UploadSessionFinishArg& setCursor(const UploadSessionCursor& arg){m_cursor=arg;return *this;};

        ///Contains the path and other optional modifiers for the commit.
        CommitInfo commit()const{return m_commit;};
        UploadSessionFinishArg& setCommit(const CommitInfo& arg){m_commit=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<UploadSessionFinishArg>  create(const QByteArray& data);
            static std::unique_ptr<UploadSessionFinishArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Contains the upload session ID and the offset.
        UploadSessionCursor m_cursor;

        ///Contains the path and other optional modifiers for the commit.
        CommitInfo m_commit;

    };//UploadSessionFinishArg

}//files
}//dropboxQt
