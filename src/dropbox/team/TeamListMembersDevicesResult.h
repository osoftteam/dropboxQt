/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamMemberDevices.h"

namespace dropboxQt{
namespace team{
    class ListMembersDevicesResult{
        /**
            field: devices: The devices of each member of the team
            field: has_more: If true, then there are more devices available.
                Pass the cursor to :meth:`devices_list_members_devices` to
                retrieve the rest.
            field: cursor: Pass the cursor into
                :meth:`devices_list_members_devices` to receive the next sub
                list of team's devices.
        */

    public:
        ListMembersDevicesResult(){};

        ListMembersDevicesResult(const std::list <MemberDevices>&& arg){ m_devices = arg; };

    public:
        ///The devices of each member of the team
        const std::list <MemberDevices>& devices()const{return m_devices;};

        ///If true, then there are more devices available. Pass the cursor to :route:`devices/list_members_devices` to retrieve the rest.
        bool hasMore()const{return m_has_more;};

        ///Pass the cursor into :route:`devices/list_members_devices` to receive the next sub list of team's devices.
        QString cursor()const{return m_cursor;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListMembersDevicesResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The devices of each member of the team
        std::list <MemberDevices> m_devices;

        ///If true, then there are more devices available. Pass the cursor to :route:`devices/list_members_devices` to retrieve the rest.
        bool m_has_more;

        ///Pass the cursor into :route:`devices/list_members_devices` to receive the next sub list of team's devices.
        QString m_cursor;

    };//ListMembersDevicesResult

}//team
}//dropboxQt
