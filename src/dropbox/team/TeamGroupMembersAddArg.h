/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamIncludeMembersArg.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamMemberAccess.h"

namespace dropboxQt{
namespace team{
    class GroupMembersAddArg : public IncludeMembersArg{
        /**
            field: group: Group to which users will be added.
            field: members: List of users to be added to the group.
        */

    public:
        GroupMembersAddArg(){};

        GroupMembersAddArg(const GroupSelector& arg){ m_group = arg; };

    public:
        ///Group to which users will be added.
        GroupSelector group()const{return m_group;};
        const GroupMembersAddArg& setGroup(const GroupSelector& arg){m_group=arg; return *this;};

        ///List of users to be added to the group.
        const std::list <MemberAccess>& members()const{return m_members;};
        const GroupMembersAddArg& setMembers(const std::list <MemberAccess>&& arg){m_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersAddArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Group to which users will be added.
        GroupSelector m_group;

        ///List of users to be added to the group.
        std::list <MemberAccess> m_members;

    };//GroupMembersAddArg

}//team
}//dropboxQt
