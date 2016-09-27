/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingUnshareFolderError.h"
#include "dropbox/sharing/SharingUnshareFolderError.h"
#include "dropbox/sharing/SharingRemoveFolderMemberError.h"
#include "dropbox/sharing/SharingRemoveFolderMemberError.h"
#include "dropbox/sharing/SharingRelinquishFolderMembershipError.h"
#include "dropbox/sharing/SharingRelinquishFolderMembershipError.h"

namespace dropboxQt{
namespace sharing{
    class JobError{
        /**
            Error occurred while performing an asynchronous job from
            :meth:`unshare_folder` or :meth:`remove_folder_member`.

            field: unshare_folder_error: Error occurred while performing
                :meth:`unshare_folder` action.
            field: remove_folder_member_error: Error occurred while performing
                :meth:`remove_folder_member` action.
            field: relinquish_folder_membership_error: Error occurred while
                performing :meth:`relinquish_folder_membership` action.
        */
    public:
        enum Tag{

		/*Error occurred while performing :route:`unshare_folder` action.*/
		JobError_UNSHARE_FOLDER_ERROR,
		/*Error occurred while performing :route:`remove_folder_member` action.*/
		JobError_REMOVE_FOLDER_MEMBER_ERROR,
		/*Error occurred while performing :route:`relinquish_folder_membership` action.*/
		JobError_RELINQUISH_FOLDER_MEMBERSHIP_ERROR,
		/*None*/
		JobError_OTHER
        };

        JobError(){}
        JobError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///Error occurred while performing :route:`unshare_folder` action.
        UnshareFolderError getUnshareFolderError()const{DBOX_CHECK_STATE((JobError_UNSHARE_FOLDER_ERROR == m_tag), "expected tag: JobError_UNSHARE_FOLDER_ERROR", m_tag);return m_unshare_folder_error;};

        ///Error occurred while performing :route:`remove_folder_member` action.
        RemoveFolderMemberError getRemoveFolderMemberError()const{DBOX_CHECK_STATE((JobError_REMOVE_FOLDER_MEMBER_ERROR == m_tag), "expected tag: JobError_REMOVE_FOLDER_MEMBER_ERROR", m_tag);return m_remove_folder_member_error;};

        ///Error occurred while performing :route:`relinquish_folder_membership` action.
        RelinquishFolderMembershipError getRelinquishFolderMembershipError()const{DBOX_CHECK_STATE((JobError_RELINQUISH_FOLDER_MEMBERSHIP_ERROR == m_tag), "expected tag: JobError_RELINQUISH_FOLDER_MEMBERSHIP_ERROR", m_tag);return m_relinquish_folder_membership_error;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<JobError>  create(const QByteArray& data);
            static std::unique_ptr<JobError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static JobError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        UnshareFolderError m_unshare_folder_error;
        RemoveFolderMemberError m_remove_folder_member_error;
        RelinquishFolderMembershipError m_relinquish_folder_membership_error;
    };//JobError

}//sharing
}//dropboxQt
