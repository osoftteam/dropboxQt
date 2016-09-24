/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class MountFolderArg{
        /**
            field: shared_folder_id: The ID of the shared folder to mount.
        */

    public:
        MountFolderArg(){};

        MountFolderArg(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID of the shared folder to mount.
        QString sharedFolderId()const{return m_shared_folder_id;};
        MountFolderArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MountFolderArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID of the shared folder to mount.
        QString m_shared_folder_id;

    };//MountFolderArg

}//sharing
}//dropboxQt
