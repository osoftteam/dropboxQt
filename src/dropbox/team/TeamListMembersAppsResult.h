/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberLinkedApps.h"

namespace dropboxQt{
namespace team{
    class ListMembersAppsResult{
        /**
            Information returned by
            :meth:`linked_apps_list_members_linked_apps`.

            field: apps: The linked applications of each member of the team
            field: has_more: If true, then there are more apps available. Pass
                the cursor to :meth:`linked_apps_list_members_linked_apps` to
                retrieve the rest.
            field: cursor: Pass the cursor into
                :meth:`linked_apps_list_members_linked_apps` to receive the next
                sub list of team's applications.
        */

    public:
        ListMembersAppsResult(){};

        ListMembersAppsResult(const std::list <MemberLinkedApps>&& arg){ m_apps = arg; };

    public:
        ///The linked applications of each member of the team
        const std::list <MemberLinkedApps>& apps()const{return m_apps;};

        ///If true, then there are more apps available. Pass the cursor to :route:`linked_apps/list_members_linked_apps` to retrieve the rest.
        bool hasMore()const{return m_has_more;};

        ///Pass the cursor into :route:`linked_apps/list_members_linked_apps` to receive the next sub list of team's applications.
        QString cursor()const{return m_cursor;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMembersAppsResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The linked applications of each member of the team
        std::list <MemberLinkedApps> m_apps;

        ///If true, then there are more apps available. Pass the cursor to :route:`linked_apps/list_members_linked_apps` to retrieve the rest.
        bool m_has_more;

        ///Pass the cursor into :route:`linked_apps/list_members_linked_apps` to receive the next sub list of team's applications.
        QString m_cursor;

    };//ListMembersAppsResult

}//team
}//dropboxQt
