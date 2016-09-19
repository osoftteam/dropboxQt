/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class TransferFolderArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: to_dropbox_id: A account or team member ID to transfer
                ownership to.
        */

    public:
        TransferFolderArg(){};

        TransferFolderArg(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const TransferFolderArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///A account or team member ID to transfer ownership to.
        QString toDropboxId()const{return m_to_dropbox_id;};
        const TransferFolderArg& setTodropboxid(const QString& arg){m_to_dropbox_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static TransferFolderArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///A account or team member ID to transfer ownership to.
        QString m_to_dropbox_id;

    };//TransferFolderArg

}//sharing
}//dropboxQt
