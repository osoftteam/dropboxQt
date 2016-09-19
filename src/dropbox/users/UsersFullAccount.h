/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/users/UsersAccount.h"
#include "dropbox/users/UsersFullTeam.h"
#include "dropbox/users/UsersAccountType.h"
#include "dropbox/users/UsersAccountType.h"

namespace dropboxQt{
namespace users{
    class FullAccount : public Account{
        /**
            Detailed information about the current user's account.

            field: country: The user's two-letter country code, if available.
                Country codes are based on `ISO 3166-1
                <http://en.wikipedia.org/wiki/ISO_3166-1>`_.
            field: locale: The language that the user specified. Locale tags
                will be `IETF language tags
                <http://en.wikipedia.org/wiki/IETF_language_tag>`_.
            field: referral_link: The user's `referral link
                <https://www.dropbox.com/referrals>`_.
            field: team: If this account is a member of a team, information
                about that team.
            field: team_member_id: This account's unique team member id. This
                field will only be present if ``team`` is present.
            field: is_paired: Whether the user has a personal and work account.
                If the current account is personal, then ``team`` will always be
                None, but ``is_paired`` will indicate if a work account is
                linked.
            field: account_type: What type of account this user has.
        */

    public:
        FullAccount(){};

        FullAccount(const QString& arg){ m_country = arg; };

    public:
        ///The user's two-letter country code, if available. Country codes are based on :link:`ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1`.
        QString country()const{return m_country;};
        const FullAccount& setCountry(const QString& arg){m_country=arg; return *this;};

        ///The language that the user specified. Locale tags will be :link:`IETF language tags http://en.wikipedia.org/wiki/IETF_language_tag`.
        QString locale()const{return m_locale;};
        const FullAccount& setLocale(const QString& arg){m_locale=arg; return *this;};

        ///The user's :link:`referral link https://www.dropbox.com/referrals`.
        QString referralLink()const{return m_referral_link;};
        const FullAccount& setReferrallink(const QString& arg){m_referral_link=arg; return *this;};

        ///If this account is a member of a team, information about that team.
        FullTeam team()const{return m_team;};
        const FullAccount& setTeam(const FullTeam& arg){m_team=arg; return *this;};

        ///This account's unique team member id. This field will only be present if :field:`team` is present.
        QString teamMemberId()const{return m_team_member_id;};
        const FullAccount& setTeammemberid(const QString& arg){m_team_member_id=arg; return *this;};

        ///Whether the user has a personal and work account. If the current account is personal, then :field:`team` will always be :val:`null`, but :field:`is_paired` will indicate if a work account is linked.
        bool isPaired()const{return m_is_paired;};
        const FullAccount& setIspaired(const bool& arg){m_is_paired=arg; return *this;};

        ///What type of account this user has.
        AccountType accountType()const{return m_account_type;};
        const FullAccount& setAccounttype(const AccountType& arg){m_account_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FullAccount EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The user's two-letter country code, if available. Country codes are based on :link:`ISO 3166-1 http://en.wikipedia.org/wiki/ISO_3166-1`.
        QString m_country;

        ///The language that the user specified. Locale tags will be :link:`IETF language tags http://en.wikipedia.org/wiki/IETF_language_tag`.
        QString m_locale;

        ///The user's :link:`referral link https://www.dropbox.com/referrals`.
        QString m_referral_link;

        ///If this account is a member of a team, information about that team.
        FullTeam m_team;

        ///This account's unique team member id. This field will only be present if :field:`team` is present.
        QString m_team_member_id;

        ///Whether the user has a personal and work account. If the current account is personal, then :field:`team` will always be :val:`null`, but :field:`is_paired` will indicate if a work account is linked.
        bool m_is_paired;

        ///What type of account this user has.
        AccountType m_account_type;

    };//FullAccount

}//users
}//dropboxQt
