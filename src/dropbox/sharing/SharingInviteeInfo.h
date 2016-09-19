/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class InviteeInfo{
        /**
            Information about the recipient of a shared content invitation.

            field: email: E-mail address of invited user.
        */
    public:
        enum Tag{

		/*E-mail address of invited user.*/
		InviteeInfo_EMAIL,
		/*None*/
		InviteeInfo_OTHER
        };

        InviteeInfo(){}
        InviteeInfo(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///E-mail address of invited user.
        QString getEmail()const{DBOX_CHECK_STATE((InviteeInfo_EMAIL == m_tag), "expected tag: InviteeInfo_EMAIL", m_tag);return m_email;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static InviteeInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_email;
    };//InviteeInfo

}//sharing
}//dropboxQt
