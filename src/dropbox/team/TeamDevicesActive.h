/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DevicesActive{
        /**
            Each of the items is an array of values, one value per day. The
            value is the number of devices active within a time window, ending
            with that day. If there is no data for a day, then the value will be
            None.

            field: windows: Array of number of linked windows (desktop) clients
                with activity.
            field: macos: Array of number of linked mac (desktop) clients with
                activity.
            field: linux: Array of number of linked linus (desktop) clients with
                activity.
            field: ios: Array of number of linked ios devices with activity.
            field: android: Array of number of linked android devices with
                activity.
            field: other: Array of number of other linked devices (blackberry,
                windows phone, etc)  with activity.
            field: total: Array of total number of linked clients with activity.
        */

    public:
        DevicesActive(){};

        DevicesActive(const std::list <int>&& arg){ m_windows = arg; };

    public:
        ///Array of number of linked windows (desktop) clients with activity.
        const std::list <int>& windows()const{return m_windows;};
        const DevicesActive& setWindows(const std::list <int>&& arg){m_windows=arg; return *this;};

        ///Array of number of linked mac (desktop) clients with activity.
        const std::list <int>& macos()const{return m_macos;};
        const DevicesActive& setMacos(const std::list <int>&& arg){m_macos=arg; return *this;};

        ///Array of number of linked linus (desktop) clients with activity.
        const std::list <int>& linux()const{return m_linux;};
        const DevicesActive& setLinux(const std::list <int>&& arg){m_linux=arg; return *this;};

        ///Array of number of linked ios devices with activity.
        const std::list <int>& ios()const{return m_ios;};
        const DevicesActive& setIos(const std::list <int>&& arg){m_ios=arg; return *this;};

        ///Array of number of linked android devices with activity.
        const std::list <int>& android()const{return m_android;};
        const DevicesActive& setAndroid(const std::list <int>&& arg){m_android=arg; return *this;};

        ///Array of number of other linked devices (blackberry, windows phone, etc)  with activity.
        const std::list <int>& other()const{return m_other;};
        const DevicesActive& setOther(const std::list <int>&& arg){m_other=arg; return *this;};

        ///Array of total number of linked clients with activity.
        const std::list <int>& total()const{return m_total;};
        const DevicesActive& setTotal(const std::list <int>&& arg){m_total=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static DevicesActive EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Array of number of linked windows (desktop) clients with activity.
        std::list <int> m_windows;

        ///Array of number of linked mac (desktop) clients with activity.
        std::list <int> m_macos;

        ///Array of number of linked linus (desktop) clients with activity.
        std::list <int> m_linux;

        ///Array of number of linked ios devices with activity.
        std::list <int> m_ios;

        ///Array of number of linked android devices with activity.
        std::list <int> m_android;

        ///Array of number of other linked devices (blackberry, windows phone, etc)  with activity.
        std::list <int> m_other;

        ///Array of total number of linked clients with activity.
        std::list <int> m_total;

    };//DevicesActive

}//team
}//dropboxQt
