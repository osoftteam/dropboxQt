/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class UserSelectorArg{
        /**
            Argument for selecting a single user, either by team_member_id,
            external_id or email.
        */
    public:
        enum Tag{

		/*None*/
		UserSelectorArg_TEAM_MEMBER_ID,
		/*None*/
		UserSelectorArg_EXTERNAL_ID,
		/*None*/
		UserSelectorArg_EMAIL
        };

        UserSelectorArg(){}
        UserSelectorArg(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        QString getTeamMemberId()const{DBOX_CHECK_STATE((UserSelectorArg_TEAM_MEMBER_ID == m_tag), "expected tag: UserSelectorArg_TEAM_MEMBER_ID", m_tag);return m_team_member_id;};

        ///None
        QString getExternalId()const{DBOX_CHECK_STATE((UserSelectorArg_EXTERNAL_ID == m_tag), "expected tag: UserSelectorArg_EXTERNAL_ID", m_tag);return m_external_id;};

        ///None
        QString getEmail()const{DBOX_CHECK_STATE((UserSelectorArg_EMAIL == m_tag), "expected tag: UserSelectorArg_EMAIL", m_tag);return m_email;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<UserSelectorArg>  create(const QByteArray& data);
            static std::unique_ptr<UserSelectorArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static UserSelectorArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_team_member_id;
        QString m_external_id;
        QString m_email;
    };//UserSelectorArg

}//team
}//dropboxQt
