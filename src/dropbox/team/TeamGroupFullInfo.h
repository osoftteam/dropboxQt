/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_common/TeamCommonGroupSummary.h"
#include "dropbox/team/TeamGroupMemberInfo.h"

namespace dropboxQt{
namespace team{
    class GroupFullInfo : public team_common::GroupSummary{
        /**
            Full description of a group.

            field: members: List of group members.
            field: created: The group creation time as a UTC timestamp in
                milliseconds since the Unix epoch.
        */

    public:
        GroupFullInfo(){};

        GroupFullInfo(const std::list <GroupMemberInfo>&& arg){ m_members = arg; };

    public:
        ///List of group members.
        const std::list <GroupMemberInfo>& members()const{return m_members;};
        const GroupFullInfo& setMembers(const std::list <GroupMemberInfo>&& arg){m_members=arg; return *this;};

        ///The group creation time as a UTC timestamp in milliseconds since the Unix epoch.
        int created()const{return m_created;};
        const GroupFullInfo& setCreated(const int& arg){m_created=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupFullInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of group members.
        std::list <GroupMemberInfo> m_members;

        ///The group creation time as a UTC timestamp in milliseconds since the Unix epoch.
        int m_created;

    };//GroupFullInfo

}//team
}//dropboxQt
