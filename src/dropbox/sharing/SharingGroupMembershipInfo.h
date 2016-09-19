/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMembershipInfo.h"
#include "dropbox/sharing/SharingGroupInfo.h"

namespace dropboxQt{
namespace sharing{
    class GroupMembershipInfo : public MembershipInfo{
        /**
            The information about a group member of the shared content.

            field: group: The information about the membership group.
        */

    public:
        GroupMembershipInfo(){};

        GroupMembershipInfo(const GroupInfo& arg){ m_group = arg; };

    public:
        ///The information about the membership group.
        GroupInfo group()const{return m_group;};
        const GroupMembershipInfo& setGroup(const GroupInfo& arg){m_group=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembershipInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The information about the membership group.
        GroupInfo m_group;

    };//GroupMembershipInfo

}//sharing
}//dropboxQt
