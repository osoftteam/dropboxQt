/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/files/FilesLookupError.h"
#include "dropbox/sharing/SharingSharedLinkSettingsError.h"
#include "dropbox/sharing/SharingSharedLinkSettingsError.h"

namespace dropboxQt{
namespace sharing{
    class CreateSharedLinkWithSettingsError{
        /**
            field: email_not_verified: User's email should be verified
            field: shared_link_already_exists: The shared link already exists
            field: settings_error: There is an error with the given settings
            field: access_denied: Access to the requested path is forbidden
        */
    public:
        enum Tag{

		/*None*/
		CreateSharedLinkWithSettingsError_PATH,
		/*User's email should be verified*/
		CreateSharedLinkWithSettingsError_EMAIL_NOT_VERIFIED,
		/*The shared link already exists*/
		CreateSharedLinkWithSettingsError_SHARED_LINK_ALREADY_EXISTS,
		/*There is an error with the given settings*/
		CreateSharedLinkWithSettingsError_SETTINGS_ERROR,
		/*Access to the requested path is forbidden*/
		CreateSharedLinkWithSettingsError_ACCESS_DENIED
        };

        CreateSharedLinkWithSettingsError(){}
        CreateSharedLinkWithSettingsError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///None
        files::LookupError getPath()const{DBOX_CHECK_STATE((CreateSharedLinkWithSettingsError_PATH == m_tag), "expected tag: CreateSharedLinkWithSettingsError_PATH", m_tag);return m_path;};

        ///There is an error with the given settings
        SharedLinkSettingsError getSettingsError()const{DBOX_CHECK_STATE((CreateSharedLinkWithSettingsError_SETTINGS_ERROR == m_tag), "expected tag: CreateSharedLinkWithSettingsError_SETTINGS_ERROR", m_tag);return m_settings_error;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CreateSharedLinkWithSettingsError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        files::LookupError m_path;
        SharedLinkSettingsError m_settings_error;
    };//CreateSharedLinkWithSettingsError

}//sharing
}//dropboxQt
