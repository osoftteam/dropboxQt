/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class GroupMemberSelector{
        /**
            Argument for selecting a group and a single user.

            field: group: Specify a group.
            field: user: Identity of a user that is a member of ``group``.
        */

    public:
        GroupMemberSelector(){};

        GroupMemberSelector(const GroupSelector& arg){ m_group = arg; };

    public:
        ///Specify a group.
        GroupSelector group()const{return m_group;};
        const GroupMemberSelector& setGroup(const GroupSelector& arg){m_group=arg; return *this;};

        ///Identity of a user that is a member of :field:`group`.
        UserSelectorArg user()const{return m_user;};
        const GroupMemberSelector& setUser(const UserSelectorArg& arg){m_user=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMemberSelector EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Specify a group.
        GroupSelector m_group;

        ///Identity of a user that is a member of :field:`group`.
        UserSelectorArg m_user;

    };//GroupMemberSelector

}//team
}//dropboxQt
