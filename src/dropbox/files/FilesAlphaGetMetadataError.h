/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesGetMetadataError.h"
#include "dropbox/files/FilesLookUpPropertiesError.h"
#include "dropbox/files/FilesLookUpPropertiesError.h"

namespace dropboxQt{
namespace files{
    class AlphaGetMetadataError{
    public:
        enum Tag{

		/*None*/
		GetMetadataError_PATH,
		/*None*/
		AlphaGetMetadataError_PROPERTIES_ERROR
        };

        AlphaGetMetadataError(){}
        AlphaGetMetadataError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        LookupError getPath()const{DBOX_CHECK_STATE((GetMetadataError_PATH == m_tag), "expected tag: GetMetadataError_PATH", m_tag);return m_path;};

        ///None
        LookUpPropertiesError getPropertiesError()const{DBOX_CHECK_STATE((AlphaGetMetadataError_PROPERTIES_ERROR == m_tag), "expected tag: AlphaGetMetadataError_PROPERTIES_ERROR", m_tag);return m_properties_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AlphaGetMetadataError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        LookupError m_path;
        LookUpPropertiesError m_properties_error;
    };//AlphaGetMetadataError

}//files
}//dropboxQt
