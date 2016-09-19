/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberPermission.h"

namespace dropboxQt{
namespace sharing{
    class ParentFolderAccessInfo{
        /**
            Contains information about a parent folder that a member has access
            to.

            field: folder_name: Display name for the folder.
            field: shared_folder_id: The identifier of the parent shared folder.
            field: permissions: The user's permissions for the parent shared
                folder.
        */

    public:
        ParentFolderAccessInfo(){};

        ParentFolderAccessInfo(const QString& arg){ m_folder_name = arg; };

    public:
        ///Display name for the folder.
        QString folderName()const{return m_folder_name;};
        const ParentFolderAccessInfo& setFoldername(const QString& arg){m_folder_name=arg; return *this;};

        ///The identifier of the parent shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const ParentFolderAccessInfo& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///The user's permissions for the parent shared folder.
        const std::list <MemberPermission>& permissions()const{return m_permissions;};
        const ParentFolderAccessInfo& setPermissions(const std::list <MemberPermission>&& arg){m_permissions=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ParentFolderAccessInfo EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Display name for the folder.
        QString m_folder_name;

        ///The identifier of the parent shared folder.
        QString m_shared_folder_id;

        ///The user's permissions for the parent shared folder.
        std::list <MemberPermission> m_permissions;

    };//ParentFolderAccessInfo

}//sharing
}//dropboxQt
