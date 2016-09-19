/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingListFolderMembersCursorArg.h"

namespace dropboxQt{
namespace sharing{
    class ListFolderMembersArgs : public ListFolderMembersCursorArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
        */

    public:
        ListFolderMembersArgs(){};

        ListFolderMembersArgs(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const ListFolderMembersArgs& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListFolderMembersArgs EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

    };//ListFolderMembersArgs

}//sharing
}//dropboxQt
