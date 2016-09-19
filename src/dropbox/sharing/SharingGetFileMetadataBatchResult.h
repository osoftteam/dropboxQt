/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingGetFileMetadataIndividualResult.h"
#include "dropbox/sharing/SharingGetFileMetadataIndividualResult.h"

namespace dropboxQt{
namespace sharing{
    class GetFileMetadataBatchResult{
        /**
            Per file results of :meth:`get_file_metadata_batch`

            field: file: This is the input file identifier corresponding to one
                of ``GetFileMetadataBatchArg.files``.
            field: result: The result for this particular file
        */

    public:
        GetFileMetadataBatchResult(){};

        GetFileMetadataBatchResult(const QString& arg){ m_file = arg; };

    public:
        ///This is the input file identifier corresponding to one of :field:`GetFileMetadataBatchArg.files`.
        QString file()const{return m_file;};

        ///The result for this particular file
        GetFileMetadataIndividualResult result()const{return m_result;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetFileMetadataBatchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///This is the input file identifier corresponding to one of :field:`GetFileMetadataBatchArg.files`.
        QString m_file;

        ///The result for this particular file
        GetFileMetadataIndividualResult m_result;

    };//GetFileMetadataBatchResult

}//sharing
}//dropboxQt
