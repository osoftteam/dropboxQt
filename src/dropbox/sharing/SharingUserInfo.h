/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class UserInfo{
        /**
            Basic information about a user. Use :meth:`users_account` and
            :meth:`users_account_batch` to obtain more detailed information.

            field: account_id: The account ID of the user.
            field: same_team: If the user is in the same team as current user.
            field: team_member_id: The team member ID of the shared folder
                member. Only present if ``same_team`` is true.
        */

    public:
        UserInfo(){};

        UserInfo(const QString& arg){ m_account_id = arg; };

    public:
        ///The account ID of the user.
        QString accountId()const{return m_account_id;};
        UserInfo& setAccountid(const QString& arg){m_account_id=arg; return *this;};

        ///If the user is in the same team as current user.
        bool sameTeam()const{return m_same_team;};
        UserInfo& setSameteam(const bool& arg){m_same_team=arg; return *this;};

        ///The team member ID of the shared folder member. Only present if :field:`same_team` is true.
        QString teamMemberId()const{return m_team_member_id;};
        UserInfo& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UserInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The account ID of the user.
        QString m_account_id;

        ///If the user is in the same team as current user.
        bool m_same_team;

        ///The team member ID of the shared folder member. Only present if :field:`same_team` is true.
        QString m_team_member_id;

    };//UserInfo

}//sharing
}//dropboxQt
