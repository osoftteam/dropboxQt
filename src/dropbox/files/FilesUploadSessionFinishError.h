/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadSessionLookupError.h"
#include "dropbox/files/FilesUploadSessionLookupError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishError{
        /**
            field: lookup_failed: The session arguments are incorrect; the value
                explains the reason.
            field: path: Unable to save the uploaded contents to a file.
            field: too_many_shared_folder_targets: The batch request commits
                files into too many different shared folders. Please limit your
                batch request to files contained in a single shared folder.
        */
    public:
        enum Tag{

		/*The session arguments are incorrect; the value explains the reason.*/
		UploadSessionFinishError_LOOKUP_FAILED,
		/*Unable to save the uploaded contents to a file.*/
		UploadSessionFinishError_PATH,
		/*The batch request commits files into too many different shared folders. Please limit your batch request to files contained in a single shared folder.*/
		UploadSessionFinishError_TOO_MANY_SHARED_FOLDER_TARGETS,
		/*None*/
		UploadSessionFinishError_OTHER
        };

        UploadSessionFinishError(){}
        UploadSessionFinishError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The session arguments are incorrect; the value explains the reason.
        UploadSessionLookupError getLookupFailed()const{DBOX_CHECK_STATE((UploadSessionFinishError_LOOKUP_FAILED == m_tag), "expected tag: UploadSessionFinishError_LOOKUP_FAILED", m_tag);return m_lookup_failed;};

        ///Unable to save the uploaded contents to a file.
        WriteError getPath()const{DBOX_CHECK_STATE((UploadSessionFinishError_PATH == m_tag), "expected tag: UploadSessionFinishError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        UploadSessionLookupError m_lookup_failed;
        WriteError m_path;
    };//UploadSessionFinishError

}//files
}//dropboxQt
