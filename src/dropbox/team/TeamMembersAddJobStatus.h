/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/team/TeamMemberAddResult.h"

namespace dropboxQt{
namespace team{
    class MembersAddJobStatus{
        /**
            field: complete: The asynchronous job has finished. For each member
                that was specified in the parameter :class:`MembersAddArg` that
                was provided to :meth:`members_add`, a corresponding item is
                returned in this list.
            field: failed: The asynchronous job returned an error. The string
                contains an error message.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*The asynchronous job has finished. For each member that was specified in the parameter :type:`MembersAddArg` that was provided to :route:`members/add`, a corresponding item is returned in this list.*/
		MembersAddJobStatus_COMPLETE,
		/*The asynchronous job returned an error. The string contains an error message.*/
		MembersAddJobStatus_FAILED
        };

        MembersAddJobStatus(){}
        MembersAddJobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The asynchronous job has finished. For each member that was specified in the parameter :type:`MembersAddArg` that was provided to :route:`members/add`, a corresponding item is returned in this list.
        const std::list <MemberAddResult>& getComplete()const{DBOX_CHECK_STATE((MembersAddJobStatus_COMPLETE == m_tag), "expected tag: MembersAddJobStatus_COMPLETE", m_tag);return m_complete;};

        ///The asynchronous job returned an error. The string contains an error message.
        QString getFailed()const{DBOX_CHECK_STATE((MembersAddJobStatus_FAILED == m_tag), "expected tag: MembersAddJobStatus_FAILED", m_tag);return m_failed;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static MembersAddJobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        std::list <MemberAddResult> m_complete;
        QString m_failed;
    };//MembersAddJobStatus

}//team
}//dropboxQt
