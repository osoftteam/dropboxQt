/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DeviceSession{
        /**
            field: session_id: The session id
            field: ip_address: The IP address of the last activity from this
                session
            field: country: The country from which the last activity from this
                session was made
            field: created: The time this session was created
            field: updated: The time of the last activity from this session
        */

    public:
        DeviceSession(){};

        DeviceSession(const QString& arg){ m_session_id = arg; };

    public:
        ///The session id
        QString sessionId()const{return m_session_id;};
        const DeviceSession& setSessionid(const QString& arg){m_session_id=arg; return *this;};

        ///The IP address of the last activity from this session
        QString ipAddress()const{return m_ip_address;};
        const DeviceSession& setIpaddress(const QString& arg){m_ip_address=arg; return *this;};

        ///The country from which the last activity from this session was made
        QString country()const{return m_country;};
        const DeviceSession& setCountry(const QString& arg){m_country=arg; return *this;};

        ///The time this session was created
        QDateTime created()const{return m_created;};
        const DeviceSession& setCreated(const QDateTime& arg){m_created=arg; return *this;};

        ///The time of the last activity from this session
        QDateTime updated()const{return m_updated;};
        const DeviceSession& setUpdated(const QDateTime& arg){m_updated=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DeviceSession EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The session id
        QString m_session_id;

        ///The IP address of the last activity from this session
        QString m_ip_address;

        ///The country from which the last activity from this session was made
        QString m_country;

        ///The time this session was created
        QDateTime m_created;

        ///The time of the last activity from this session
        QDateTime m_updated;

    };//DeviceSession

}//team
}//dropboxQt
