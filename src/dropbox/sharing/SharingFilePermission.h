/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingFileAction.h"
#include "dropbox/sharing/SharingFileAction.h"
#include "dropbox/sharing/SharingPermissionDeniedReason.h"
#include "dropbox/sharing/SharingPermissionDeniedReason.h"

namespace dropboxQt{
namespace sharing{
    class FilePermission{
        /**
            Whether the user is allowed to take the sharing action on the file.

            field: action: The action that the user may wish to take on the
                file.
            field: allow: True if the user is allowed to take the action.
            field: reason: The reason why the user is denied the permission. Not
                present if the action is allowed
        */

    public:
        FilePermission(){};

        FilePermission(const FileAction& arg){ m_action = arg; };

    public:
        ///The action that the user may wish to take on the file.
        FileAction action()const{return m_action;};
        FilePermission& setAction(const FileAction& arg){m_action=arg; return *this;};

        ///True if the user is allowed to take the action.
        bool allow()const{return m_allow;};
        FilePermission& setAllow(const bool& arg){m_allow=arg; return *this;};

        ///The reason why the user is denied the permission. Not present if the action is allowed
        PermissionDeniedReason reason()const{return m_reason;};
        FilePermission& setReason(const PermissionDeniedReason& arg){m_reason=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FilePermission EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The action that the user may wish to take on the file.
        FileAction m_action;

        ///True if the user is allowed to take the action.
        bool m_allow;

        ///The reason why the user is denied the permission. Not present if the action is allowed
        PermissionDeniedReason m_reason;

    };//FilePermission

}//sharing
}//dropboxQt
