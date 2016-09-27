/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingListFileMembersIndividualResult.h"
#include "dropbox/sharing/SharingListFileMembersIndividualResult.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersBatchResult{
        /**
            Per-file result for :meth:`list_file_members_batch`.

            field: file: This is the input file identifier, whether an ID or a
                path.
            field: result: The result for this particular file
        */

    public:
        ListFileMembersBatchResult(){};

        ListFileMembersBatchResult(const QString& arg){ m_file = arg; };

    public:
        ///This is the input file identifier, whether an ID or a path.
        QString file()const{return m_file;};

        ///The result for this particular file
        ListFileMembersIndividualResult result()const{return m_result;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<ListFileMembersBatchResult>  create(const QByteArray& data);
            static std::unique_ptr<ListFileMembersBatchResult>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersBatchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///This is the input file identifier, whether an ID or a path.
        QString m_file;

        ///The result for this particular file
        ListFileMembersIndividualResult m_result;

    };//ListFileMembersBatchResult

}//sharing
}//dropboxQt
