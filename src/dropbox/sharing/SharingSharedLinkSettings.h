/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingRequestedVisibility.h"
#include "dropbox/sharing/SharingRequestedVisibility.h"

namespace dropboxQt{
namespace sharing{
    class SharedLinkSettings{
        /**
            field: requested_visibility: The requested access for this shared
                link.
            field: link_password: If ``requested_visibility`` is
                ``RequestedVisibility.password`` this is needed to specify the
                password to access the link.
            field: expires: Expiration time of the shared link. By default the
                link won't expire.
        */

    public:
        SharedLinkSettings(){};

        SharedLinkSettings(const RequestedVisibility& arg){ m_requested_visibility = arg; };

    public:
        ///The requested access for this shared link.
        RequestedVisibility requestedVisibility()const{return m_requested_visibility;};
        const SharedLinkSettings& setRequestedvisibility(const RequestedVisibility& arg){m_requested_visibility=arg; return *this;};

        ///If :field:`requested_visibility` is :field:`RequestedVisibility.password` this is needed to specify the password to access the link.
        QString linkPassword()const{return m_link_password;};
        const SharedLinkSettings& setLinkpassword(const QString& arg){m_link_password=arg; return *this;};

        ///Expiration time of the shared link. By default the link won't expire.
        QDateTime expires()const{return m_expires;};
        const SharedLinkSettings& setExpires(const QDateTime& arg){m_expires=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SharedLinkSettings EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The requested access for this shared link.
        RequestedVisibility m_requested_visibility;

        ///If :field:`requested_visibility` is :field:`RequestedVisibility.password` this is needed to specify the password to access the link.
        QString m_link_password;

        ///Expiration time of the shared link. By default the link won't expire.
        QDateTime m_expires;

    };//SharedLinkSettings

}//sharing
}//dropboxQt
