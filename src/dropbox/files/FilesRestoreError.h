/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class RestoreError{
        /**
            field: path_lookup: An error occurs when downloading metadata for
                the file.
            field: path_write: An error occurs when trying to restore the file
                to that path.
            field: invalid_revision: The revision is invalid. It may point to a
                different file.
        */
    public:
        enum Tag{

		/*An error occurs when downloading metadata for the file.*/
		RestoreError_PATH_LOOKUP,
		/*An error occurs when trying to restore the file to that path.*/
		RestoreError_PATH_WRITE,
		/*The revision is invalid. It may point to a different file.*/
		RestoreError_INVALID_REVISION,
		/*None*/
		RestoreError_OTHER
        };

        RestoreError(){}
        RestoreError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///An error occurs when downloading metadata for the file.
        LookupError getPathLookup()const{DBOX_CHECK_STATE((RestoreError_PATH_LOOKUP == m_tag), "expected tag: RestoreError_PATH_LOOKUP", m_tag);return m_path_lookup;};

        ///An error occurs when trying to restore the file to that path.
        WriteError getPathWrite()const{DBOX_CHECK_STATE((RestoreError_PATH_WRITE == m_tag), "expected tag: RestoreError_PATH_WRITE", m_tag);return m_path_write;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RestoreError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path_lookup;
        WriteError m_path_write;
    };//RestoreError

}//files
}//dropboxQt
