/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkError.h"
#include "dropbox/sharing/SharingSharedLinkSettingsError.h"
#include "dropbox/sharing/SharingSharedLinkSettingsError.h"

namespace dropboxQt{
namespace sharing{
    class ModifySharedLinkSettingsError{
        /**
            field: settings_error: There is an error with the given settings
            field: email_not_verified: The caller's email should be verified
        */
    public:
        enum Tag{

		/*The shared link wasn't found*/
		SharedLinkError_SHARED_LINK_NOT_FOUND,
		/*The caller is not allowed to access this shared link*/
		SharedLinkError_SHARED_LINK_ACCESS_DENIED,
		/*None*/
		SharedLinkError_OTHER,
		/*There is an error with the given settings*/
		ModifySharedLinkSettingsError_SETTINGS_ERROR,
		/*The caller's email should be verified*/
		ModifySharedLinkSettingsError_EMAIL_NOT_VERIFIED
        };

        ModifySharedLinkSettingsError(){}
        ModifySharedLinkSettingsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///There is an error with the given settings
        SharedLinkSettingsError getSettingsError()const{DBOX_CHECK_STATE((ModifySharedLinkSettingsError_SETTINGS_ERROR == m_tag), "expected tag: ModifySharedLinkSettingsError_SETTINGS_ERROR", m_tag);return m_settings_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ModifySharedLinkSettingsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        SharedLinkSettingsError m_settings_error;
    };//ModifySharedLinkSettingsError

}//sharing
}//dropboxQt
