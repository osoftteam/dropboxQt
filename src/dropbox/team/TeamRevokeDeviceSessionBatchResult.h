/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
 www.prokarpaty.net
***********************************************************/

#pragma once
#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/team/TeamRevokeDeviceSessionStatus.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionBatchResult{

    public:
        RevokeDeviceSessionBatchResult(){};

        RevokeDeviceSessionBatchResult(const std::list <RevokeDeviceSessionStatus>& arg){ m_revoke_devices_status = arg; };

    public:
        const std::list <RevokeDeviceSessionStatus>& revokeDevicesStatus()const{return m_revoke_devices_status;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RevokeDeviceSessionBatchResult>  create(const QByteArray& data);
            static std::unique_ptr<RevokeDeviceSessionBatchResult>  create(const QJsonObject& js);
        };



    protected:
        std::list <RevokeDeviceSessionStatus> m_revoke_devices_status;

    };//RevokeDeviceSessionBatchResult

}//team
}//dropboxQt
