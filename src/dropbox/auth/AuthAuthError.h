/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace auth{
    class AuthError{
        /**
            Errors occurred during authentication.

            field: invalid_access_token: The access token is invalid.
            field: invalid_select_user: The user specified in
                'Dropbox-API-Select-User' is no longer on the team.
            field: invalid_select_admin: The user specified in
                'Dropbox-API-Select-Admin' is not a Dropbox Business team admin.
        */
    public:
        enum Tag{

		/*The access token is invalid.*/
		AuthError_INVALID_ACCESS_TOKEN,
		/*The user specified in 'Dropbox-API-Select-User' is no longer on the team.*/
		AuthError_INVALID_SELECT_USER,
		/*The user specified in 'Dropbox-API-Select-Admin' is not a Dropbox Business team admin.*/
		AuthError_INVALID_SELECT_ADMIN,
		/*None*/
		AuthError_OTHER
        };

        AuthError(){}
        AuthError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AuthError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//AuthError

}//auth
}//dropboxQt
