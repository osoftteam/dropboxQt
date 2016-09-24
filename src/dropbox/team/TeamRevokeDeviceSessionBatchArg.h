/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRevokeDeviceSessionArg.h"

namespace dropboxQt{
namespace team{
    class RevokeDeviceSessionBatchArg{

    public:
        RevokeDeviceSessionBatchArg(){};

        RevokeDeviceSessionBatchArg(const std::list <RevokeDeviceSessionArg>&& arg){ m_revoke_devices = arg; };

    public:
        ///None
        const std::list <RevokeDeviceSessionArg>& revokeDevices()const{return m_revoke_devices;};
        RevokeDeviceSessionBatchArg& setRevokedevices(const std::list <RevokeDeviceSessionArg>&& arg){m_revoke_devices=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeDeviceSessionBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <RevokeDeviceSessionArg> m_revoke_devices;

    };//RevokeDeviceSessionBatchArg

}//team
}//dropboxQt
