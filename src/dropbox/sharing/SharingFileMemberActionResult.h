/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingFileMemberActionIndividualResult.h"
#include "dropbox/sharing/SharingFileMemberActionIndividualResult.h"

namespace dropboxQt{
namespace sharing{
    class FileMemberActionResult{
        /**
            Per-member result for :meth:`remove_file_member_2` or
            :meth:`add_file_member` or :meth:`change_file_member_access`.

            field: member: One of specified input members.
            field: result: The outcome of the action on this member.
        */

    public:
        FileMemberActionResult(){};

        FileMemberActionResult(const MemberSelector& arg){ m_member = arg; };

    public:
        ///One of specified input members.
        MemberSelector member()const{return m_member;};

        ///The outcome of the action on this member.
        FileMemberActionIndividualResult result()const{return m_result;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileMemberActionResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///One of specified input members.
        MemberSelector m_member;

        ///The outcome of the action on this member.
        FileMemberActionIndividualResult m_result;

    };//FileMemberActionResult

}//sharing
}//dropboxQt
