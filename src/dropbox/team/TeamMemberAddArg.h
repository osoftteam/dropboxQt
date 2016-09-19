/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamAdminTier.h"
#include "dropbox/team/TeamAdminTier.h"

namespace dropboxQt{
namespace team{
    class MemberAddArg{
        /**
            field: member_given_name: Member's first name.
            field: member_surname: Member's last name.
            field: member_external_id: External ID for member.
            field: send_welcome_email: Whether to send a welcome email to the
                member. If send_welcome_email is false, no email invitation will
                be sent to the user. This may be useful for apps using single
                sign-on (SSO) flows for onboarding that want to handle
                announcements themselves.
        */

    public:
        MemberAddArg():
        m_send_welcome_email(false)
        ,m_role(AdminTier::AdminTier_MEMBER_ONLY)
        {};

        MemberAddArg(const QString& arg):
        m_send_welcome_email(false)
        ,m_role(AdminTier::AdminTier_MEMBER_ONLY)
        { m_member_email = arg; };

    public:
        ///None
        QString memberEmail()const{return m_member_email;};
        const MemberAddArg& setMemberemail(const QString& arg){m_member_email=arg; return *this;};

        ///Member's first name.
        QString memberGivenName()const{return m_member_given_name;};
        const MemberAddArg& setMembergivenname(const QString& arg){m_member_given_name=arg; return *this;};

        ///Member's last name.
        QString memberSurname()const{return m_member_surname;};
        const MemberAddArg& setMembersurname(const QString& arg){m_member_surname=arg; return *this;};

        ///External ID for member.
        QString memberExternalId()const{return m_member_external_id;};
        const MemberAddArg& setMemberexternalid(const QString& arg){m_member_external_id=arg; return *this;};

        ///Whether to send a welcome email to the member. If send_welcome_email is false, no email invitation will be sent to the user. This may be useful for apps using single sign-on (SSO) flows for onboarding that want to handle announcements themselves.
        bool sendWelcomeEmail()const{return m_send_welcome_email;};
        const MemberAddArg& setSendwelcomeemail(const bool& arg){m_send_welcome_email=arg; return *this;};

        ///None
        AdminTier role()const{return m_role;};
        const MemberAddArg& setRole(const AdminTier& arg){m_role=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberAddArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        QString m_member_email;

        ///Member's first name.
        QString m_member_given_name;

        ///Member's last name.
        QString m_member_surname;

        ///External ID for member.
        QString m_member_external_id;

        ///Whether to send a welcome email to the member. If send_welcome_email is false, no email invitation will be sent to the user. This may be useful for apps using single sign-on (SSO) flows for onboarding that want to handle announcements themselves.
        bool m_send_welcome_email;

        ///None
        AdminTier m_role;

    };//MemberAddArg

}//team
}//dropboxQt
