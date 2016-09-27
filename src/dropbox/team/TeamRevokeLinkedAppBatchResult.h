/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRevokeLinkedAppStatus.h"

namespace dropboxQt{
namespace team{
    class RevokeLinkedAppBatchResult{

    public:
        RevokeLinkedAppBatchResult(){};

        RevokeLinkedAppBatchResult(const std::list <RevokeLinkedAppStatus>&& arg){ m_revoke_linked_app_status = arg; };

    public:
        ///None
        const std::list <RevokeLinkedAppStatus>& revokeLinkedAppStatus()const{return m_revoke_linked_app_status;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RevokeLinkedAppBatchResult>  create(const QByteArray& data);
            static std::unique_ptr<RevokeLinkedAppBatchResult>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedAppBatchResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <RevokeLinkedAppStatus> m_revoke_linked_app_status;

    };//RevokeLinkedAppBatchResult

}//team
}//dropboxQt
