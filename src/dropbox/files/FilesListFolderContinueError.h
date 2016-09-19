/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{
namespace files{
    class ListFolderContinueError{
        /**
            field: reset: Indicates that the cursor has been invalidated. Call
                :meth:`list_folder` to obtain a new cursor.
        */
    public:
        enum Tag{

		/*None*/
		ListFolderContinueError_PATH,
		/*Indicates that the cursor has been invalidated. Call :route:`list_folder` to obtain a new cursor.*/
		ListFolderContinueError_RESET,
		/*None*/
		ListFolderContinueError_OTHER
        };

        ListFolderContinueError(){}
        ListFolderContinueError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPath()const{DBOX_CHECK_STATE((ListFolderContinueError_PATH == m_tag), "expected tag: ListFolderContinueError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderContinueError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
    };//ListFolderContinueError

}//files
}//dropboxQt
