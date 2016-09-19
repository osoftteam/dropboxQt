/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_policies{
    class SharedFolderJoinPolicy{
        /**
            Policy governing which shared folders a team member can join.

            field: from_team_only: Team members can only join folders shared by
                teammates.
            field: from_anyone: Team members can join any shared folder,
                including those shared by users outside the team.
        */
    public:
        enum Tag{

		/*Team members can only join folders shared by teammates.*/
		SharedFolderJoinPolicy_FROM_TEAM_ONLY,
		/*Team members can join any shared folder, including those shared by users outside the team.*/
		SharedFolderJoinPolicy_FROM_ANYONE,
		/*None*/
		SharedFolderJoinPolicy_OTHER
        };

        SharedFolderJoinPolicy(){}
        SharedFolderJoinPolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedFolderJoinPolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharedFolderJoinPolicy

}//team_policies
}//dropboxQt
