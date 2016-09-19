/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamBaseDfbReport.h"

namespace dropboxQt{
namespace team{
    class GetActivityReport : public BaseDfbReport{
        /**
            Activity Report Result. Each of the items in the storage report is
            an array of values, one value per day. If there is no data for a
            day, then the value will be None.

            field: adds: Array of total number of adds by team members.
            field: edits: Array of number of edits by team members. If the same
                user edits the same file multiple times this is counted as a
                single edit.
            field: deletes: Array of total number of deletes by team members.
            field: active_users_28_day: Array of the number of users who have
                been active in the last 28 days.
            field: active_users_7_day: Array of the number of users who have
                been active in the last week.
            field: active_users_1_day: Array of the number of users who have
                been active in the last day.
            field: active_shared_folders_28_day: Array of the number of shared
                folders with some activity in the last 28 days.
            field: active_shared_folders_7_day: Array of the number of shared
                folders with some activity in the last week.
            field: active_shared_folders_1_day: Array of the number of shared
                folders with some activity in the last day.
            field: shared_links_created: Array of the number of shared links
                created.
            field: shared_links_viewed_by_team: Array of the number of views by
                team users to shared links created by the team.
            field: shared_links_viewed_by_outside_user: Array of the number of
                views by users outside of the team to shared links created by
                the team.
            field: shared_links_viewed_by_not_logged_in: Array of the number of
                views by non-logged-in users to shared links created by the
                team.
            field: shared_links_viewed_total: Array of the total number of views
                to shared links created by the team.
        */

    public:
        GetActivityReport(){};

        GetActivityReport(const std::list <int>&& arg){ m_adds = arg; };

    public:
        ///Array of total number of adds by team members.
        const std::list <int>& adds()const{return m_adds;};
        const GetActivityReport& setAdds(const std::list <int>&& arg){m_adds=arg; return *this;};

        ///Array of number of edits by team members. If the same user edits the same file multiple times this is counted as a single edit.
        const std::list <int>& edits()const{return m_edits;};
        const GetActivityReport& setEdits(const std::list <int>&& arg){m_edits=arg; return *this;};

        ///Array of total number of deletes by team members.
        const std::list <int>& deletes()const{return m_deletes;};
        const GetActivityReport& setDeletes(const std::list <int>&& arg){m_deletes=arg; return *this;};

        ///Array of the number of users who have been active in the last 28 days.
        const std::list <int>& activeUsers28Day()const{return m_active_users_28_day;};
        const GetActivityReport& setActiveusers28Day(const std::list <int>&& arg){m_active_users_28_day=arg; return *this;};

        ///Array of the number of users who have been active in the last week.
        const std::list <int>& activeUsers7Day()const{return m_active_users_7_day;};
        const GetActivityReport& setActiveusers7Day(const std::list <int>&& arg){m_active_users_7_day=arg; return *this;};

        ///Array of the number of users who have been active in the last day.
        const std::list <int>& activeUsers1Day()const{return m_active_users_1_day;};
        const GetActivityReport& setActiveusers1Day(const std::list <int>&& arg){m_active_users_1_day=arg; return *this;};

        ///Array of the number of shared folders with some activity in the last 28 days.
        const std::list <int>& activeSharedFolders28Day()const{return m_active_shared_folders_28_day;};
        const GetActivityReport& setActivesharedfolders28Day(const std::list <int>&& arg){m_active_shared_folders_28_day=arg; return *this;};

        ///Array of the number of shared folders with some activity in the last week.
        const std::list <int>& activeSharedFolders7Day()const{return m_active_shared_folders_7_day;};
        const GetActivityReport& setActivesharedfolders7Day(const std::list <int>&& arg){m_active_shared_folders_7_day=arg; return *this;};

        ///Array of the number of shared folders with some activity in the last day.
        const std::list <int>& activeSharedFolders1Day()const{return m_active_shared_folders_1_day;};
        const GetActivityReport& setActivesharedfolders1Day(const std::list <int>&& arg){m_active_shared_folders_1_day=arg; return *this;};

        ///Array of the number of shared links created.
        const std::list <int>& sharedLinksCreated()const{return m_shared_links_created;};
        const GetActivityReport& setSharedlinkscreated(const std::list <int>&& arg){m_shared_links_created=arg; return *this;};

        ///Array of the number of views by team users to shared links created by the team.
        const std::list <int>& sharedLinksViewedByTeam()const{return m_shared_links_viewed_by_team;};
        const GetActivityReport& setSharedlinksviewedbyteam(const std::list <int>&& arg){m_shared_links_viewed_by_team=arg; return *this;};

        ///Array of the number of views by users outside of the team to shared links created by the team.
        const std::list <int>& sharedLinksViewedByOutsideUser()const{return m_shared_links_viewed_by_outside_user;};
        const GetActivityReport& setSharedlinksviewedbyoutsideuser(const std::list <int>&& arg){m_shared_links_viewed_by_outside_user=arg; return *this;};

        ///Array of the number of views by non-logged-in users to shared links created by the team.
        const std::list <int>& sharedLinksViewedByNotLoggedIn()const{return m_shared_links_viewed_by_not_logged_in;};
        const GetActivityReport& setSharedlinksviewedbynotloggedin(const std::list <int>&& arg){m_shared_links_viewed_by_not_logged_in=arg; return *this;};

        ///Array of the total number of views to shared links created by the team.
        const std::list <int>& sharedLinksViewedTotal()const{return m_shared_links_viewed_total;};
        const GetActivityReport& setSharedlinksviewedtotal(const std::list <int>&& arg){m_shared_links_viewed_total=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetActivityReport EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Array of total number of adds by team members.
        std::list <int> m_adds;

        ///Array of number of edits by team members. If the same user edits the same file multiple times this is counted as a single edit.
        std::list <int> m_edits;

        ///Array of total number of deletes by team members.
        std::list <int> m_deletes;

        ///Array of the number of users who have been active in the last 28 days.
        std::list <int> m_active_users_28_day;

        ///Array of the number of users who have been active in the last week.
        std::list <int> m_active_users_7_day;

        ///Array of the number of users who have been active in the last day.
        std::list <int> m_active_users_1_day;

        ///Array of the number of shared folders with some activity in the last 28 days.
        std::list <int> m_active_shared_folders_28_day;

        ///Array of the number of shared folders with some activity in the last week.
        std::list <int> m_active_shared_folders_7_day;

        ///Array of the number of shared folders with some activity in the last day.
        std::list <int> m_active_shared_folders_1_day;

        ///Array of the number of shared links created.
        std::list <int> m_shared_links_created;

        ///Array of the number of views by team users to shared links created by the team.
        std::list <int> m_shared_links_viewed_by_team;

        ///Array of the number of views by users outside of the team to shared links created by the team.
        std::list <int> m_shared_links_viewed_by_outside_user;

        ///Array of the number of views by non-logged-in users to shared links created by the team.
        std::list <int> m_shared_links_viewed_by_not_logged_in;

        ///Array of the total number of views to shared links created by the team.
        std::list <int> m_shared_links_viewed_total;

    };//GetActivityReport

}//team
}//dropboxQt
