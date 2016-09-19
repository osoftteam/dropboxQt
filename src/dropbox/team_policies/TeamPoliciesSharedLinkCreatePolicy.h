/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team_policies{
    class SharedLinkCreatePolicy{
        /**
            Policy governing the visibility of newly created shared links.

            field: default_public: By default, anyone can access newly created
                shared links. No login will be required to access the shared
                links unless overridden.
            field: default_team_only: By default, only members of the same team
                can access newly created shared links. Login will be required to
                access the shared links unless overridden.
            field: team_only: Only members of the same team can access newly
                created shared links. Login will be required to access the
                shared links.
        */
    public:
        enum Tag{

		/*By default, anyone can access newly created shared links. No login will be required to access the shared links unless overridden.*/
		SharedLinkCreatePolicy_DEFAULT_PUBLIC,
		/*By default, only members of the same team can access newly created shared links. Login will be required to access the shared links unless overridden.*/
		SharedLinkCreatePolicy_DEFAULT_TEAM_ONLY,
		/*Only members of the same team can access newly created shared links. Login will be required to access the shared links.*/
		SharedLinkCreatePolicy_TEAM_ONLY,
		/*None*/
		SharedLinkCreatePolicy_OTHER
        };

        SharedLinkCreatePolicy(){}
        SharedLinkCreatePolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedLinkCreatePolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//SharedLinkCreatePolicy

}//team_policies
}//dropboxQt
