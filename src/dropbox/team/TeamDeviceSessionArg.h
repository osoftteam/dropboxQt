/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DeviceSessionArg{
        /**
            field: session_id: The session id
            field: team_member_id: The unique id of the member owning the device
        */

    public:
        DeviceSessionArg(){};

        DeviceSessionArg(const QString& arg){ m_session_id = arg; };

    public:
        ///The session id
        QString sessionId()const{return m_session_id;};
        DeviceSessionArg& setSessionid(const QString& arg){m_session_id=arg;return *this;};

        ///The unique id of the member owning the device
        QString teamMemberId()const{return m_team_member_id;};
        DeviceSessionArg& setTeammemberid(const QString& arg){m_team_member_id=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DeviceSessionArg>  create(const QByteArray& data);
            static std::unique_ptr<DeviceSessionArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DeviceSessionArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The session id
        QString m_session_id;

        ///The unique id of the member owning the device
        QString m_team_member_id;

    };//DeviceSessionArg

}//team
}//dropboxQt
