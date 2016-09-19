/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRevokeLinkedAppError.h"
#include "dropbox/team/TeamRevokeLinkedAppError.h"

namespace dropboxQt{
namespace team{
    class RevokeLinkedAppStatus{
        /**
            field: success: Result of the revoking request
            field: error_type: The error cause in case of a failure
        */

    public:
        RevokeLinkedAppStatus(){};

        RevokeLinkedAppStatus(const bool& arg){ m_success = arg; };

    public:
        ///Result of the revoking request
        bool success()const{return m_success;};
        const RevokeLinkedAppStatus& setSuccess(const bool& arg){m_success=arg; return *this;};

        ///The error cause in case of a failure
        RevokeLinkedAppError errorType()const{return m_error_type;};
        const RevokeLinkedAppStatus& setErrortype(const RevokeLinkedAppError& arg){m_error_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedAppStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Result of the revoking request
        bool m_success;

        ///The error cause in case of a failure
        RevokeLinkedAppError m_error_type;

    };//RevokeLinkedAppStatus

}//team
}//dropboxQt
