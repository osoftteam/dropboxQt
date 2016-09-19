/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRevokeDeviceSessionStatus.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionBatchResult{

    public:
        RevokeDeviceSessionBatchResult(){};

        RevokeDeviceSessionBatchResult(const std::list <RevokeDeviceSessionStatus>&& arg){ m_revoke_devices_status = arg; };

    public:
        ///None
        const std::list <RevokeDeviceSessionStatus>& revokeDevicesStatus()const{return m_revoke_devices_status;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionBatchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <RevokeDeviceSessionStatus> m_revoke_devices_status;

    };//RevokeDeviceSessionBatchResult

}//team
}//dropboxQt
