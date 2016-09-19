/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class WriteConflictError{
        /**
            field: file: There's a file in the way.
            field: folder: There's a folder in the way.
            field: file_ancestor: There's a file at an ancestor path, so we
                couldn't create the required parent folders.
        */
    public:
        enum Tag{

		/*There's a file in the way.*/
		WriteConflictError_FILE,
		/*There's a folder in the way.*/
		WriteConflictError_FOLDER,
		/*There's a file at an ancestor path, so we couldn't create the required parent folders.*/
		WriteConflictError_FILE_ANCESTOR,
		/*None*/
		WriteConflictError_OTHER
        };

        WriteConflictError(){}
        WriteConflictError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static WriteConflictError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//WriteConflictError

}//files
}//dropboxQt
