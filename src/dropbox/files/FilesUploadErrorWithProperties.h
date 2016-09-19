/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesUploadError.h"
#include "dropbox/files/FilesInvalidPropertyGroupError.h"
#include "dropbox/files/FilesInvalidPropertyGroupError.h"

namespace dropboxQt{
namespace files{
    class UploadErrorWithProperties{
    public:
        enum Tag{

		/*Unable to save the uploaded contents to a file.*/
		UploadError_PATH,
		/*None*/
		UploadError_OTHER,
		/*None*/
		UploadErrorWithProperties_PROPERTIES_ERROR
        };

        UploadErrorWithProperties(){}
        UploadErrorWithProperties(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Unable to save the uploaded contents to a file.
        UploadWriteFailed getPath()const{DBOX_CHECK_STATE((UploadError_PATH == m_tag), "expected tag: UploadError_PATH", m_tag);return m_path;};

        ///None
        InvalidPropertyGroupError getPropertiesError()const{DBOX_CHECK_STATE((UploadErrorWithProperties_PROPERTIES_ERROR == m_tag), "expected tag: UploadErrorWithProperties_PROPERTIES_ERROR", m_tag);return m_properties_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadErrorWithProperties EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        UploadWriteFailed m_path;
        InvalidPropertyGroupError m_properties_error;
    };//UploadErrorWithProperties

}//files
}//dropboxQt
