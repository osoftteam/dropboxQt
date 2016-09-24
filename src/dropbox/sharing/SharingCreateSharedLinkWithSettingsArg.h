/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/sharing/SharingSharedLinkSettings.h"

namespace dropboxQt{
namespace sharing{
    class CreateSharedLinkWithSettingsArg{
        /**
            field: path: The path to be shared by the shared link
            field: settings: The requested settings for the newly created shared
                link
        */

    public:
        CreateSharedLinkWithSettingsArg(){};

        CreateSharedLinkWithSettingsArg(const QString& arg){ m_path = arg; };

    public:
        ///The path to be shared by the shared link
        QString path()const{return m_path;};
        CreateSharedLinkWithSettingsArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The requested settings for the newly created shared link
        SharedLinkSettings settings()const{return m_settings;};
        CreateSharedLinkWithSettingsArg& setSettings(const SharedLinkSettings& arg){m_settings=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static CreateSharedLinkWithSettingsArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to be shared by the shared link
        QString m_path;

        ///The requested settings for the newly created shared link
        SharedLinkSettings m_settings;

    };//CreateSharedLinkWithSettingsArg

}//sharing
}//dropboxQt
