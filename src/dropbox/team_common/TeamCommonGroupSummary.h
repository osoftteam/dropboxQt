/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_common/TeamCommonGroupManagementType.h"
#include "dropbox/team_common/TeamCommonGroupManagementType.h"

namespace dropboxQt{
namespace team_common{
    class GroupSummary{
        /**
            Information about a group.

            field: group_external_id: External ID of group. This is an arbitrary
                ID that an admin can attach to a group.
            field: member_count: The number of members in the group.
            field: group_management_type: Who is allowed to manage the group.
        */

    public:
        GroupSummary(){};

        GroupSummary(const QString& arg){ m_group_name = arg; };

    public:
        ///None
        QString groupName()const{return m_group_name;};
        const GroupSummary& setGroupname(const QString& arg){m_group_name=arg; return *this;};

        ///None
        QString groupId()const{return m_group_id;};
        const GroupSummary& setGroupid(const QString& arg){m_group_id=arg; return *this;};

        ///External ID of group. This is an arbitrary ID that an admin can attach to a group.
        QString groupExternalId()const{return m_group_external_id;};
        const GroupSummary& setGroupexternalid(const QString& arg){m_group_external_id=arg; return *this;};

        ///The number of members in the group.
        int memberCount()const{return m_member_count;};
        const GroupSummary& setMembercount(const int& arg){m_member_count=arg; return *this;};

        ///Who is allowed to manage the group.
        GroupManagementType groupManagementType()const{return m_group_management_type;};
        const GroupSummary& setGroupmanagementtype(const GroupManagementType& arg){m_group_management_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupSummary EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        QString m_group_name;

        ///None
        QString m_group_id;

        ///External ID of group. This is an arbitrary ID that an admin can attach to a group.
        QString m_group_external_id;

        ///The number of members in the group.
        int m_member_count;

        ///Who is allowed to manage the group.
        GroupManagementType m_group_management_type;

    };//GroupSummary

}//team_common
}//dropboxQt
