/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingAddMember.h"

namespace dropboxQt{
namespace sharing{
    class AddFolderMemberArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: members: The intended list of members to add.  Added members
                will receive invites to join the shared folder.
            field: quiet: Whether added members should be notified via email and
                device notifications of their invite.
            field: custom_message: Optional message to display to added members
                in their invitation.
        */

    public:
        AddFolderMemberArg():
        m_quiet(false)
        {};

        AddFolderMemberArg(const QString& arg):
        m_quiet(false)
        { m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const AddFolderMemberArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///The intended list of members to add.  Added members will receive invites to join the shared folder.
        const std::list <AddMember>& members()const{return m_members;};
        const AddFolderMemberArg& setMembers(const std::list <AddMember>&& arg){m_members=arg; return *this;};

        ///Whether added members should be notified via email and device notifications of their invite.
        bool quiet()const{return m_quiet;};
        const AddFolderMemberArg& setQuiet(const bool& arg){m_quiet=arg; return *this;};

        ///Optional message to display to added members in their invitation.
        QString customMessage()const{return m_custom_message;};
        const AddFolderMemberArg& setCustommessage(const QString& arg){m_custom_message=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AddFolderMemberArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///The intended list of members to add.  Added members will receive invites to join the shared folder.
        std::list <AddMember> m_members;

        ///Whether added members should be notified via email and device notifications of their invite.
        bool m_quiet;

        ///Optional message to display to added members in their invitation.
        QString m_custom_message;

    };//AddFolderMemberArg

}//sharing
}//dropboxQt
