/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class MemberSelector{
        /**
            Includes different ways to identify a member of a shared folder.

            field: dropbox_id: Dropbox account, team member, or group ID of
                member.
            field: email: E-mail address of member.
        */
    public:
        enum Tag{

		/*Dropbox account, team member, or group ID of member.*/
		MemberSelector_DROPBOX_ID,
		/*E-mail address of member.*/
		MemberSelector_EMAIL,
		/*None*/
		MemberSelector_OTHER
        };

        MemberSelector(){}
        MemberSelector(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Dropbox account, team member, or group ID of member.
        QString getDropboxId()const{DBOX_CHECK_STATE((MemberSelector_DROPBOX_ID == m_tag), "expected tag: MemberSelector_DROPBOX_ID", m_tag);return m_dropbox_id;};

        ///E-mail address of member.
        QString getEmail()const{DBOX_CHECK_STATE((MemberSelector_EMAIL == m_tag), "expected tag: MemberSelector_EMAIL", m_tag);return m_email;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberSelector EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_dropbox_id;
        QString m_email;
    };//MemberSelector

}//sharing
}//dropboxQt
