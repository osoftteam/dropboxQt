/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_policies/TeamPoliciesTeamSharingPolicies.h"
#include "dropbox/team_policies/TeamPoliciesEmmState.h"
#include "dropbox/team_policies/TeamPoliciesEmmState.h"

namespace dropboxQt{
namespace team_policies{
    class TeamMemberPolicies{
        /**
            Policies governing team members.

            field: sharing: Policies governing sharing.
            field: emm_state: This describes the Enterprise Mobility Management
                (EMM) state for this team. This information can be used to
                understand if an organization is integrating with a third-party
                EMM vendor to further manage and apply restrictions upon the
                team's Dropbox usage on mobile devices. This is a new feature
                and in the future we'll be adding more new fields and additional
                documentation.
        */

    public:
        TeamMemberPolicies(){};

        TeamMemberPolicies(const TeamSharingPolicies& arg){ m_sharing = arg; };

    public:
        ///Policies governing sharing.
        TeamSharingPolicies sharing()const{return m_sharing;};
        const TeamMemberPolicies& setSharing(const TeamSharingPolicies& arg){m_sharing=arg; return *this;};

        ///This describes the Enterprise Mobility Management (EMM) state for this team. This information can be used to understand if an organization is integrating with a third-party EMM vendor to further manage and apply restrictions upon the team's Dropbox usage on mobile devices. This is a new feature and in the future we'll be adding more new fields and additional documentation.
        EmmState emmState()const{return m_emm_state;};
        const TeamMemberPolicies& setEmmstate(const EmmState& arg){m_emm_state=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TeamMemberPolicies EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Policies governing sharing.
        TeamSharingPolicies m_sharing;

        ///This describes the Enterprise Mobility Management (EMM) state for this team. This information can be used to understand if an organization is integrating with a third-party EMM vendor to further manage and apply restrictions upon the team's Dropbox usage on mobile devices. This is a new feature and in the future we'll be adding more new fields and additional documentation.
        EmmState m_emm_state;

    };//TeamMemberPolicies

}//team_policies
}//dropboxQt
