/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupMemberSelectorError.h"

namespace dropboxQt{
namespace team{
    class GroupMemberSetAccessTypeError{
        /**
            field: user_cannot_be_manager_of_company_managed_group: A company
                managed group cannot be managed by a user.
        */
    public:
        enum Tag{

		/*No matching group found. No groups match the specified group ID.*/
		GroupSelectorError_GROUP_NOT_FOUND,
		/*None*/
		GroupSelectorError_OTHER,
		/*The specified user is not a member of this group.*/
		GroupMemberSelectorError_MEMBER_NOT_IN_GROUP,
		/*A company managed group cannot be managed by a user.*/
		GroupMemberSetAccessTypeError_USER_CANNOT_BE_MANAGER_OF_COMPANY_MANAGED_GROUP
        };

        GroupMemberSetAccessTypeError(){}
        GroupMemberSetAccessTypeError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMemberSetAccessTypeError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GroupMemberSetAccessTypeError

}//team
}//dropboxQt
