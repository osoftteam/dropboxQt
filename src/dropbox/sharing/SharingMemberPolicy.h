/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class MemberPolicy{
        /**
            Policy governing who can be a member of a shared folder. Only
            applicable to folders owned by a user on a team.

            field: team: Only a teammate can become a member.
            field: anyone: Anyone can become a member.
        */
    public:
        enum Tag{

		/*Only a teammate can become a member.*/
		MemberPolicy_TEAM,
		/*Anyone can become a member.*/
		MemberPolicy_ANYONE,
		/*None*/
		MemberPolicy_OTHER
        };

        MemberPolicy(){}
        MemberPolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MemberPolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//MemberPolicy

}//sharing
}//dropboxQt
