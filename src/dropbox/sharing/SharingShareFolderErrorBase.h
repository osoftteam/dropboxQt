/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharePathError.h"
#include "dropbox/sharing/SharingSharePathError.h"

namespace dropboxQt{
namespace sharing{
    class ShareFolderErrorBase{
        /**
            field: email_unverified: The current user's e-mail address is
                unverified.
            field: bad_path: ``ShareFolderArg.path`` is invalid.
            field: team_policy_disallows_member_policy: Team policy is more
                restrictive than ``ShareFolderArg.member_policy``.
            field: disallowed_shared_link_policy: The current user's account is
                not allowed to select the specified
                ``ShareFolderArg.shared_link_policy``.
        */
    public:
        enum Tag{

		/*The current user's e-mail address is unverified.*/
		ShareFolderErrorBase_EMAIL_UNVERIFIED,
		/*:field:`ShareFolderArg.path` is invalid.*/
		ShareFolderErrorBase_BAD_PATH,
		/*Team policy is more restrictive than :field:`ShareFolderArg.member_policy`.*/
		ShareFolderErrorBase_TEAM_POLICY_DISALLOWS_MEMBER_POLICY,
		/*The current user's account is not allowed to select the specified :field:`ShareFolderArg.shared_link_policy`.*/
		ShareFolderErrorBase_DISALLOWED_SHARED_LINK_POLICY,
		/*None*/
		ShareFolderErrorBase_OTHER
        };

        ShareFolderErrorBase(){}
        ShareFolderErrorBase(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///:field:`ShareFolderArg.path` is invalid.
        SharePathError getBadPath()const{DBOX_CHECK_STATE((ShareFolderErrorBase_BAD_PATH == m_tag), "expected tag: ShareFolderErrorBase_BAD_PATH", m_tag);return m_bad_path;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ShareFolderErrorBase EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharePathError m_bad_path;
    };//ShareFolderErrorBase

}//sharing
}//dropboxQt
