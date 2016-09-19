/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupMembersSelectorError.h"

namespace dropboxQt{
namespace team{
    class GroupMembersRemoveError{
        /**
            field: group_not_in_team: Group is not in this team. You cannot
                remove members from a group that is outside of your team.
        */
    public:
        enum Tag{

		/*No matching group found. No groups match the specified group ID.*/
		GroupSelectorError_GROUP_NOT_FOUND,
		/*None*/
		GroupSelectorError_OTHER,
		/*At least one of the specified users is not a member of the group.*/
		GroupMembersSelectorError_MEMBER_NOT_IN_GROUP,
		/*Group is not in this team. You cannot remove members from a group that is outside of your team.*/
		GroupMembersRemoveError_GROUP_NOT_IN_TEAM
        };

        GroupMembersRemoveError(){}
        GroupMembersRemoveError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersRemoveError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupMembersRemoveError

}//team
}//dropboxQt
