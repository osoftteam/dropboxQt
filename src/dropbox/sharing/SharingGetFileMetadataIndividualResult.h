/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFileMetadata.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{
namespace sharing{
    class GetFileMetadataIndividualResult{
        /**
            field: metadata: The result for this file if it was successful.
            field: access_error: The result for this file if it was an error.
        */
    public:
        enum Tag{

		/*The result for this file if it was successful.*/
		GetFileMetadataIndividualResult_METADATA,
		/*The result for this file if it was an error.*/
		GetFileMetadataIndividualResult_ACCESS_ERROR,
		/*None*/
		GetFileMetadataIndividualResult_OTHER
        };

        GetFileMetadataIndividualResult(){}
        GetFileMetadataIndividualResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The result for this file if it was successful.
        SharedFileMetadata getMetadata()const{DBOX_CHECK_STATE((GetFileMetadataIndividualResult_METADATA == m_tag), "expected tag: GetFileMetadataIndividualResult_METADATA", m_tag);return m_metadata;};

        ///The result for this file if it was an error.
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((GetFileMetadataIndividualResult_ACCESS_ERROR == m_tag), "expected tag: GetFileMetadataIndividualResult_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GetFileMetadataIndividualResult>  create(const QByteArray& data);
            static std::unique_ptr<GetFileMetadataIndividualResult>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GetFileMetadataIndividualResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedFileMetadata m_metadata;
        SharingFileAccessError m_access_error;
    };//GetFileMetadataIndividualResult

}//sharing
}//dropboxQt
