/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class UsersSelectorArg{
        /**
            Argument for selecting a list of users, either by team_member_ids,
            external_ids or emails.

            field: team_member_ids: List of member IDs.
            field: external_ids: List of external user IDs.
            field: emails: List of email addresses.
        */
    public:
        enum Tag{

		/*List of member IDs.*/
		UsersSelectorArg_TEAM_MEMBER_IDS,
		/*List of external user IDs.*/
		UsersSelectorArg_EXTERNAL_IDS,
		/*List of email addresses.*/
		UsersSelectorArg_EMAILS
        };

        UsersSelectorArg(){}
        UsersSelectorArg(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///List of member IDs.
        const std::list <QString>& getTeamMemberIds()const{DBOX_CHECK_STATE((UsersSelectorArg_TEAM_MEMBER_IDS == m_tag), "expected tag: UsersSelectorArg_TEAM_MEMBER_IDS", m_tag);return m_team_member_ids;};

        ///List of external user IDs.
        const std::list <QString>& getExternalIds()const{DBOX_CHECK_STATE((UsersSelectorArg_EXTERNAL_IDS == m_tag), "expected tag: UsersSelectorArg_EXTERNAL_IDS", m_tag);return m_external_ids;};

        ///List of email addresses.
        const std::list <QString>& getEmails()const{DBOX_CHECK_STATE((UsersSelectorArg_EMAILS == m_tag), "expected tag: UsersSelectorArg_EMAILS", m_tag);return m_emails;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UsersSelectorArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        std::list <QString> m_team_member_ids;
        std::list <QString> m_external_ids;
        std::list <QString> m_emails;
    };//UsersSelectorArg

}//team
}//dropboxQt
