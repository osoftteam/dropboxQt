/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class UnshareFolderArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: leave_a_copy: If true, members of this shared folder will get
                a copy of this folder after it's unshared. Otherwise, it will be
                removed from their Dropbox. The current user, who is an owner,
                will always retain their copy.
        */

    public:
        UnshareFolderArg():
        m_leave_a_copy(false)
        {};

        UnshareFolderArg(const QString& arg):
        m_leave_a_copy(false)
        { m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const UnshareFolderArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///If true, members of this shared folder will get a copy of this folder after it's unshared. Otherwise, it will be removed from their Dropbox. The current user, who is an owner, will always retain their copy.
        bool leaveACopy()const{return m_leave_a_copy;};
        const UnshareFolderArg& setLeaveacopy(const bool& arg){m_leave_a_copy=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UnshareFolderArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///If true, members of this shared folder will get a copy of this folder after it's unshared. Otherwise, it will be removed from their Dropbox. The current user, who is an owner, will always retain their copy.
        bool m_leave_a_copy;

    };//UnshareFolderArg

}//sharing
}//dropboxQt
