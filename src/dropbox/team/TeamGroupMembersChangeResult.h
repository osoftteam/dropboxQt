/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupFullInfo.h"

namespace dropboxQt{
namespace team{
    class GroupMembersChangeResult{
        /**
            Result returned by :meth:`groups_members_add` and
            :meth:`groups_members_remove`.

            field: group_info: The group info after member change operation has
                been performed.
            field: async_job_id: An ID that can be used to obtain the status of
                granting/revoking group-owned resources.
        */

    public:
        GroupMembersChangeResult(){};

        GroupMembersChangeResult(const GroupFullInfo& arg){ m_group_info = arg; };

    public:
        ///The group info after member change operation has been performed.
        GroupFullInfo groupInfo()const{return m_group_info;};

        ///An ID that can be used to obtain the status of granting/revoking group-owned resources.
        QString asyncJobId()const{return m_async_job_id;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersChangeResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The group info after member change operation has been performed.
        GroupFullInfo m_group_info;

        ///An ID that can be used to obtain the status of granting/revoking group-owned resources.
        QString m_async_job_id;

    };//GroupMembersChangeResult

}//team
}//dropboxQt
