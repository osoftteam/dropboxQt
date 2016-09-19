/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedFileMembers.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersCountResult{
        /**
            field: members: A list of members on this file.
            field: member_count: The number of members on this file. This does
                not include inherited members
        */

    public:
        ListFileMembersCountResult(){};

        ListFileMembersCountResult(const SharedFileMembers& arg){ m_members = arg; };

    public:
        ///A list of members on this file.
        SharedFileMembers members()const{return m_members;};

        ///The number of members on this file. This does not include inherited members
        int memberCount()const{return m_member_count;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersCountResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A list of members on this file.
        SharedFileMembers m_members;

        ///The number of members on this file. This does not include inherited members
        int m_member_count;

    };//ListFileMembersCountResult

}//sharing
}//dropboxQt
