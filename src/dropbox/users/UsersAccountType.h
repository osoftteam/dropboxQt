/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class AccountType{
        /**
            What type of account this user has.

            field: basic: The basic account type.
            field: pro: The Dropbox Pro account type.
            field: business: The Dropbox Business account type.
        */
    public:
        enum Tag{

		/*The basic account type.*/
		AccountType_BASIC,
		/*The Dropbox Pro account type.*/
		AccountType_PRO,
		/*The Dropbox Business account type.*/
		AccountType_BUSINESS
        };

        AccountType(){}
        AccountType(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AccountType EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//AccountType

}//users
}//dropboxQt
