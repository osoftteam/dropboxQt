/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamIncludeMembersArg.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class GroupMembersRemoveArg : public IncludeMembersArg{
        /**
            field: group: Group from which users will be removed.
            field: users: List of users to be removed from the group.
        */

    public:
        GroupMembersRemoveArg(){};

        GroupMembersRemoveArg(const GroupSelector& arg){ m_group = arg; };

    public:
        ///Group from which users will be removed.
        GroupSelector group()const{return m_group;};
        const GroupMembersRemoveArg& setGroup(const GroupSelector& arg){m_group=arg; return *this;};

        ///List of users to be removed from the group.
        const std::list <UserSelectorArg>& users()const{return m_users;};
        const GroupMembersRemoveArg& setUsers(const std::list <UserSelectorArg>&& arg){m_users=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersRemoveArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Group from which users will be removed.
        GroupSelector m_group;

        ///List of users to be removed from the group.
        std::list <UserSelectorArg> m_users;

    };//GroupMembersRemoveArg

}//team
}//dropboxQt
