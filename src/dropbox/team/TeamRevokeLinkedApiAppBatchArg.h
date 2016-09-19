/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamRevokeLinkedApiAppArg.h"

namespace dropboxQt{
namespace team{
    class RevokeLinkedApiAppBatchArg{

    public:
        RevokeLinkedApiAppBatchArg(){};

        RevokeLinkedApiAppBatchArg(const std::list <RevokeLinkedApiAppArg>&& arg){ m_revoke_linked_app = arg; };

    public:
        ///None
        const std::list <RevokeLinkedApiAppArg>& revokeLinkedApp()const{return m_revoke_linked_app;};
        const RevokeLinkedApiAppBatchArg& setRevokelinkedapp(const std::list <RevokeLinkedApiAppArg>&& arg){m_revoke_linked_app=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedApiAppBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <RevokeLinkedApiAppArg> m_revoke_linked_app;

    };//RevokeLinkedApiAppBatchArg

}//team
}//dropboxQt
