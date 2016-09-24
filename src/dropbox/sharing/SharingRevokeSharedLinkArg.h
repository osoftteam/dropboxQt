/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class RevokeSharedLinkArg{
        /**
            field: url: URL of the shared link.
        */

    public:
        RevokeSharedLinkArg(){};

        RevokeSharedLinkArg(const QString& arg){ m_url = arg; };

    public:
        ///URL of the shared link.
        QString url()const{return m_url;};
        RevokeSharedLinkArg& setUrl(const QString& arg){m_url=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static RevokeSharedLinkArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///URL of the shared link.
        QString m_url;

    };//RevokeSharedLinkArg

}//sharing
}//dropboxQt
