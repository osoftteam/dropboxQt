/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class RevokeLinkedAppError{
        /**
            Error returned by :meth:`linked_apps_revoke_linked_app`.

            field: app_not_found: Application not found.
            field: member_not_found: Member not found.
        */
    public:
        enum Tag{

		/*Application not found.*/
		RevokeLinkedAppError_APP_NOT_FOUND,
		/*Member not found.*/
		RevokeLinkedAppError_MEMBER_NOT_FOUND,
		/*None*/
		RevokeLinkedAppError_OTHER
        };

        RevokeLinkedAppError(){}
        RevokeLinkedAppError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedAppError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RevokeLinkedAppError

}//team
}//dropboxQt
