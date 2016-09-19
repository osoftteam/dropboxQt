/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class SharingUserError{
        /**
            User account had a problem preventing this action.

            field: email_unverified: The current user must verify the account
                e-mail address before performing this action.
        */
    public:
        enum Tag{

		/*The current user must verify the account e-mail address before performing this action.*/
		SharingUserError_EMAIL_UNVERIFIED,
		/*None*/
		SharingUserError_OTHER
        };

        SharingUserError(){}
        SharingUserError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharingUserError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharingUserError

}//sharing
}//dropboxQt
