/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupMemberInfo.h"

namespace dropboxQt{
namespace team{
    class GroupsMembersListResult{
        /**
            field: cursor: Pass the cursor into
                :meth:`groups_members_list_continue` to obtain additional group
                members.
            field: has_more: Is true if there are additional group members that
                have not been returned yet. An additional call to
                :meth:`groups_members_list_continue` can retrieve them.
        */

    public:
        GroupsMembersListResult(){};

        GroupsMembersListResult(const std::list <GroupMemberInfo>&& arg){ m_members = arg; };

    public:
        ///None
        const std::list <GroupMemberInfo>& members()const{return m_members;};

        ///Pass the cursor into :route:`groups/members/list/continue` to obtain additional group members.
        QString cursor()const{return m_cursor;};

        ///Is true if there are additional group members that have not been returned yet. An additional call to :route:`groups/members/list/continue` can retrieve them.
        bool hasMore()const{return m_has_more;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsMembersListResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <GroupMemberInfo> m_members;

        ///Pass the cursor into :route:`groups/members/list/continue` to obtain additional group members.
        QString m_cursor;

        ///Is true if there are additional group members that have not been returned yet. An additional call to :route:`groups/members/list/continue` can retrieve them.
        bool m_has_more;

    };//GroupsMembersListResult

}//team
}//dropboxQt
