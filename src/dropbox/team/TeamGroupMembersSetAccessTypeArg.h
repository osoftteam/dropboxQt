/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupMemberSelector.h"
#include "dropbox/team/TeamGroupAccessType.h"
#include "dropbox/team/TeamGroupAccessType.h"

namespace dropboxQt{
namespace team{
    class GroupMembersSetAccessTypeArg : public GroupMemberSelector{
        /**
            field: access_type: New group access type the user will have.
            field: return_members: Whether to return the list of members in the
                group.  Note that the default value will cause all the group
                members  to be returned in the response. This may take a long
                time for large groups.
        */

    public:
        GroupMembersSetAccessTypeArg():
        m_return_members(false)
        {};

        GroupMembersSetAccessTypeArg(const GroupAccessType& arg):
        m_return_members(false)
        { m_access_type = arg; };

    public:
        ///New group access type the user will have.
        GroupAccessType accessType()const{return m_access_type;};
        GroupMembersSetAccessTypeArg& setAccesstype(const GroupAccessType& arg){m_access_type=arg; return *this;};

        ///Whether to return the list of members in the group.  Note that the default value will cause all the group members  to be returned in the response. This may take a long time for large groups.
        bool returnMembers()const{return m_return_members;};
        GroupMembersSetAccessTypeArg& setReturnmembers(const bool& arg){m_return_members=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersSetAccessTypeArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///New group access type the user will have.
        GroupAccessType m_access_type;

        ///Whether to return the list of members in the group.  Note that the default value will cause all the group members  to be returned in the response. This may take a long time for large groups.
        bool m_return_members;

    };//GroupMembersSetAccessTypeArg

}//team
}//dropboxQt
