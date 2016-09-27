/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_policies/TeamPoliciesSharedFolderMemberPolicy.h"
#include "dropbox/team_policies/TeamPoliciesSharedFolderMemberPolicy.h"
#include "dropbox/team_policies/TeamPoliciesSharedFolderJoinPolicy.h"
#include "dropbox/team_policies/TeamPoliciesSharedFolderJoinPolicy.h"
#include "dropbox/team_policies/TeamPoliciesSharedLinkCreatePolicy.h"
#include "dropbox/team_policies/TeamPoliciesSharedLinkCreatePolicy.h"

namespace dropboxQt{
namespace team_policies{
    class TeamSharingPolicies{
        /**
            Policies governing sharing within and outside of the team.

            field: shared_folder_member_policy: Who can join folders shared by
                team members.
            field: shared_folder_join_policy: Which shared folders team members
                can join.
            field: shared_link_create_policy: What is the visibility of newly
                created shared links.
        */

    public:
        TeamSharingPolicies(){};

        TeamSharingPolicies(const SharedFolderMemberPolicy& arg){ m_shared_folder_member_policy = arg; };

    public:
        ///Who can join folders shared by team members.
        SharedFolderMemberPolicy sharedFolderMemberPolicy()const{return m_shared_folder_member_policy;};
        TeamSharingPolicies& setSharedfoldermemberpolicy(const SharedFolderMemberPolicy& arg){m_shared_folder_member_policy=arg;return *this;};

        ///Which shared folders team members can join.
        SharedFolderJoinPolicy sharedFolderJoinPolicy()const{return m_shared_folder_join_policy;};
        TeamSharingPolicies& setSharedfolderjoinpolicy(const SharedFolderJoinPolicy& arg){m_shared_folder_join_policy=arg;return *this;};

        ///What is the visibility of newly created shared links.
        SharedLinkCreatePolicy sharedLinkCreatePolicy()const{return m_shared_link_create_policy;};
        TeamSharingPolicies& setSharedlinkcreatepolicy(const SharedLinkCreatePolicy& arg){m_shared_link_create_policy=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<TeamSharingPolicies>  create(const QByteArray& data);
            static std::unique_ptr<TeamSharingPolicies>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static TeamSharingPolicies EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Who can join folders shared by team members.
        SharedFolderMemberPolicy m_shared_folder_member_policy;

        ///Which shared folders team members can join.
        SharedFolderJoinPolicy m_shared_folder_join_policy;

        ///What is the visibility of newly created shared links.
        SharedLinkCreatePolicy m_shared_link_create_policy;

    };//TeamSharingPolicies

}//team_policies
}//dropboxQt
