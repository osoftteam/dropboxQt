/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_policies{
    class SharedFolderMemberPolicy{
        /**
            Policy governing who can be a member of a folder shared by a team
            member.

            field: team: Only a teammate can be a member of a folder shared by a
                team member.
            field: anyone: Anyone can be a member of a folder shared by a team
                member.
        */
    public:
        enum Tag{

		/*Only a teammate can be a member of a folder shared by a team member.*/
		SharedFolderMemberPolicy_TEAM,
		/*Anyone can be a member of a folder shared by a team member.*/
		SharedFolderMemberPolicy_ANYONE,
		/*None*/
		SharedFolderMemberPolicy_OTHER
        };

        SharedFolderMemberPolicy(){}
        SharedFolderMemberPolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedFolderMemberPolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharedFolderMemberPolicy

}//team_policies
}//dropboxQt
