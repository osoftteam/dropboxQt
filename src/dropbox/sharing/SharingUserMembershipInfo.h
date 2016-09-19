/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMembershipInfo.h"
#include "dropbox/sharing/SharingUserInfo.h"

namespace dropboxQt{
namespace sharing{
    class UserMembershipInfo : public MembershipInfo{
        /**
            The information about a user member of the shared content.

            field: user: The account information for the membership user.
        */

    public:
        UserMembershipInfo(){};

        UserMembershipInfo(const UserInfo& arg){ m_user = arg; };

    public:
        ///The account information for the membership user.
        UserInfo user()const{return m_user;};
        const UserMembershipInfo& setUser(const UserInfo& arg){m_user=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UserMembershipInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The account information for the membership user.
        UserInfo m_user;

    };//UserMembershipInfo

}//sharing
}//dropboxQt
