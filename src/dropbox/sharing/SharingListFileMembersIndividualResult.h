/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingListFileMembersCountResult.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"
#include "dropbox/sharing/SharingSharingFileAccessError.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersIndividualResult{
        /**
            field: result: The results of the query for this file if it was
                successful
            field: access_error: The result of the query for this file if it was
                an error.
        */
    public:
        enum Tag{

		/*The results of the query for this file if it was successful*/
		ListFileMembersIndividualResult_RESULT,
		/*The result of the query for this file if it was an error.*/
		ListFileMembersIndividualResult_ACCESS_ERROR,
		/*None*/
		ListFileMembersIndividualResult_OTHER
        };

        ListFileMembersIndividualResult(){}
        ListFileMembersIndividualResult(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The results of the query for this file if it was successful
        ListFileMembersCountResult getResult()const{DBOX_CHECK_STATE((ListFileMembersIndividualResult_RESULT == m_tag), "expected tag: ListFileMembersIndividualResult_RESULT", m_tag);return m_result;};

        ///The result of the query for this file if it was an error.
        SharingFileAccessError getAccessError()const{DBOX_CHECK_STATE((ListFileMembersIndividualResult_ACCESS_ERROR == m_tag), "expected tag: ListFileMembersIndividualResult_ACCESS_ERROR", m_tag);return m_access_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersIndividualResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        ListFileMembersCountResult m_result;
        SharingFileAccessError m_access_error;
    };//ListFileMembersIndividualResult

}//sharing
}//dropboxQt
