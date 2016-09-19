/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class RelinquishFolderMembershipArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: leave_a_copy: Keep a copy of the folder's contents upon
                relinquishing membership.
        */

    public:
        RelinquishFolderMembershipArg():
        m_leave_a_copy(false)
        {};

        RelinquishFolderMembershipArg(const QString& arg):
        m_leave_a_copy(false)
        { m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        const RelinquishFolderMembershipArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///Keep a copy of the folder's contents upon relinquishing membership.
        bool leaveACopy()const{return m_leave_a_copy;};
        const RelinquishFolderMembershipArg& setLeaveacopy(const bool& arg){m_leave_a_copy=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RelinquishFolderMembershipArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///Keep a copy of the folder's contents upon relinquishing membership.
        bool m_leave_a_copy;

    };//RelinquishFolderMembershipArg

}//sharing
}//dropboxQt
