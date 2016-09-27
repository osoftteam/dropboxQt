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
        RevokeLinkedApiAppBatchArg& setRevokelinkedapp(const std::list <RevokeLinkedApiAppArg>&& arg){m_revoke_linked_app=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RevokeLinkedApiAppBatchArg>  create(const QByteArray& data);
            static std::unique_ptr<RevokeLinkedApiAppBatchArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeLinkedApiAppBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <RevokeLinkedApiAppArg> m_revoke_linked_app;

    };//RevokeLinkedApiAppBatchArg

}//team
}//dropboxQt
