/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamUserSelectorArg.h"
#include "dropbox/team/TeamUserSelectorArg.h"

namespace dropboxQt{
namespace team{
    class MembersSetProfileArg{
        /**
            Exactly one of team_member_id, email, or external_id must be
            provided to identify the user account. At least one of new_email,
            new_external_id, new_given_name, and/or new_surname must be
            provided.

            field: user: Identity of user whose profile will be set.
            field: new_email: New email for member.
            field: new_external_id: New external ID for member.
            field: new_given_name: New given name for member.
            field: new_surname: New surname for member.
        */

    public:
        MembersSetProfileArg(){};

        MembersSetProfileArg(const UserSelectorArg& arg){ m_user = arg; };

    public:
        ///Identity of user whose profile will be set.
        UserSelectorArg user()const{return m_user;};
        const MembersSetProfileArg& setUser(const UserSelectorArg& arg){m_user=arg; return *this;};

        ///New email for member.
        QString newEmail()const{return m_new_email;};
        const MembersSetProfileArg& setNewemail(const QString& arg){m_new_email=arg; return *this;};

        ///New external ID for member.
        QString newExternalId()const{return m_new_external_id;};
        const MembersSetProfileArg& setNewexternalid(const QString& arg){m_new_external_id=arg; return *this;};

        ///New given name for member.
        QString newGivenName()const{return m_new_given_name;};
        const MembersSetProfileArg& setNewgivenname(const QString& arg){m_new_given_name=arg; return *this;};

        ///New surname for member.
        QString newSurname()const{return m_new_surname;};
        const MembersSetProfileArg& setNewsurname(const QString& arg){m_new_surname=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersSetProfileArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Identity of user whose profile will be set.
        UserSelectorArg m_user;

        ///New email for member.
        QString m_new_email;

        ///New external ID for member.
        QString m_new_external_id;

        ///New given name for member.
        QString m_new_given_name;

        ///New surname for member.
        QString m_new_surname;

    };//MembersSetProfileArg

}//team
}//dropboxQt
