/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberAction.h"

namespace dropboxQt{
namespace sharing{
    class ListFileMembersArg{
        /**
            Arguments for :meth:`list_file_members`.

            field: file: The file for which you want to see members.
            field: actions: The actions for which to return permissions on a
                member
            field: include_inherited: Whether to include members who only have
                access from a parent shared folder.
            field: limit: Number of members to return max per query. Defaults to
                100 if no limit is specified.
        */

    public:
        ListFileMembersArg():
        m_include_inherited(false)
        ,m_limit(100)
        {};

        ListFileMembersArg(const QString& arg):
        m_include_inherited(false)
        ,m_limit(100)
        { m_file = arg; };

    public:
        ///The file for which you want to see members.
        QString file()const{return m_file;};
        const ListFileMembersArg& setFile(const QString& arg){m_file=arg; return *this;};

        ///The actions for which to return permissions on a member
        const std::list <MemberAction>& actions()const{return m_actions;};
        const ListFileMembersArg& setActions(const std::list <MemberAction>&& arg){m_actions=arg; return *this;};

        ///Whether to include members who only have access from a parent shared folder.
        bool includeInherited()const{return m_include_inherited;};
        const ListFileMembersArg& setIncludeinherited(const bool& arg){m_include_inherited=arg; return *this;};

        ///Number of members to return max per query. Defaults to 100 if no limit is specified.
        int limit()const{return m_limit;};
        const ListFileMembersArg& setLimit(const int& arg){m_limit=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFileMembersArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The file for which you want to see members.
        QString m_file;

        ///The actions for which to return permissions on a member
        std::list <MemberAction> m_actions;

        ///Whether to include members who only have access from a parent shared folder.
        bool m_include_inherited;

        ///Number of members to return max per query. Defaults to 100 if no limit is specified.
        int m_limit;

    };//ListFileMembersArg

}//sharing
}//dropboxQt
