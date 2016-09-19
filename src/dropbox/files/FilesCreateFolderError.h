/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesWriteError.h"
#include "dropbox/files/FilesWriteError.h"

namespace dropboxQt{
namespace files{
    class CreateFolderError{
    public:
        enum Tag{

		/*None*/
		CreateFolderError_PATH
        };

        CreateFolderError(){}
        CreateFolderError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        WriteError getPath()const{DBOX_CHECK_STATE((CreateFolderError_PATH == m_tag), "expected tag: CreateFolderError_PATH", m_tag);return m_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CreateFolderError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        WriteError m_path;
    };//CreateFolderError

}//files
}//dropboxQt
