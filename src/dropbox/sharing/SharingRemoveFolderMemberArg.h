/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingMemberSelector.h"
#include "dropbox/sharing/SharingMemberSelector.h"

namespace dropboxQt{
namespace sharing{
    class RemoveFolderMemberArg{
        /**
            field: shared_folder_id: The ID for the shared folder.
            field: member: The member to remove from the folder.
            field: leave_a_copy: If true, the removed user will keep their copy
                of the folder after it's unshared, assuming it was mounted.
                Otherwise, it will be removed from their Dropbox. Also, this
                must be set to false when kicking a group.
        */

    public:
        RemoveFolderMemberArg(){};

        RemoveFolderMemberArg(const QString& arg){ m_shared_folder_id = arg; };

    public:
        ///The ID for the shared folder.
        QString sharedFolderId()const{return m_shared_folder_id;};
        RemoveFolderMemberArg& setSharedfolderid(const QString& arg){m_shared_folder_id=arg; return *this;};

        ///The member to remove from the folder.
        MemberSelector member()const{return m_member;};
        RemoveFolderMemberArg& setMember(const MemberSelector& arg){m_member=arg; return *this;};

        ///If true, the removed user will keep their copy of the folder after it's unshared, assuming it was mounted. Otherwise, it will be removed from their Dropbox. Also, this must be set to false when kicking a group.
        bool leaveACopy()const{return m_leave_a_copy;};
        RemoveFolderMemberArg& setLeaveacopy(const bool& arg){m_leave_a_copy=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RemoveFolderMemberArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The ID for the shared folder.
        QString m_shared_folder_id;

        ///The member to remove from the folder.
        MemberSelector m_member;

        ///If true, the removed user will keep their copy of the folder after it's unshared, assuming it was mounted. Otherwise, it will be removed from their Dropbox. Also, this must be set to false when kicking a group.
        bool m_leave_a_copy;

    };//RemoveFolderMemberArg

}//sharing
}//dropboxQt
