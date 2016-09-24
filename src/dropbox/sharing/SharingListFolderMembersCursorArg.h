/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberAction.h"

namespace dropboxQt{
namespace sharing{
    class ListFolderMembersCursorArg{
        /**
            field: actions: This is a list indicating whether each returned
                member will include a boolean value ``MemberPermission.allow``
                that describes whether the current user can perform the
                MemberAction on the member.
            field: limit: The maximum number of results that include members,
                groups and invitees to return per request.
        */

    public:
        ListFolderMembersCursorArg():
        m_limit(1000)
        {};

        ListFolderMembersCursorArg(const std::list <MemberAction>&& arg):
        m_limit(1000)
        { m_actions = arg; };

    public:
        ///This is a list indicating whether each returned member will include a boolean value :field:`MemberPermission.allow` that describes whether the current user can perform the MemberAction on the member.
        const std::list <MemberAction>& actions()const{return m_actions;};
        ListFolderMembersCursorArg& setActions(const std::list <MemberAction>&& arg){m_actions=arg; return *this;};

        ///The maximum number of results that include members, groups and invitees to return per request.
        int limit()const{return m_limit;};
        ListFolderMembersCursorArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderMembersCursorArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///This is a list indicating whether each returned member will include a boolean value :field:`MemberPermission.allow` that describes whether the current user can perform the MemberAction on the member.
        std::list <MemberAction> m_actions;

        ///The maximum number of results that include members, groups and invitees to return per request.
        int m_limit;

    };//ListFolderMembersCursorArg

}//sharing
}//dropboxQt
