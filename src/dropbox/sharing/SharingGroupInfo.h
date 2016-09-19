/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_common/TeamCommonGroupSummary.h"
#include "dropbox/team_common/TeamCommonGroupType.h"
#include "dropbox/team_common/TeamCommonGroupType.h"

namespace dropboxQt{
namespace sharing{
    class GroupInfo : public team_common::GroupSummary{
        /**
            The information about a group. Groups is a way to manage a list of
            users  who need same access permission to the shared folder.

            field: group_type: The type of group.
            field: is_owner: If the current user is an owner of the group.
            field: same_team: If the group is owned by the current user's team.
        */

    public:
        GroupInfo(){};

        GroupInfo(const team_common::GroupType& arg){ m_group_type = arg; };

    public:
        ///The type of group.
        team_common::GroupType groupType()const{return m_group_type;};
        const GroupInfo& setGrouptype(const team_common::GroupType& arg){m_group_type=arg; return *this;};

        ///If the current user is an owner of the group.
        bool isOwner()const{return m_is_owner;};
        const GroupInfo& setIsowner(const bool& arg){m_is_owner=arg; return *this;};

        ///If the group is owned by the current user's team.
        bool sameTeam()const{return m_same_team;};
        const GroupInfo& setSameteam(const bool& arg){m_same_team=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The type of group.
        team_common::GroupType m_group_type;

        ///If the current user is an owner of the group.
        bool m_is_owner;

        ///If the group is owned by the current user's team.
        bool m_same_team;

    };//GroupInfo

}//sharing
}//dropboxQt
