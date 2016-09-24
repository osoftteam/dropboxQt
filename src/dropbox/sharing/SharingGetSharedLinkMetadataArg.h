/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class GetSharedLinkMetadataArg{
        /**
            field: url: URL of the shared link.
            field: path: If the shared link is to a folder, this parameter can
                be used to retrieve the metadata for a specific file or
                sub-folder in this folder. A relative path should be used.
            field: link_password: If the shared link has a password, this
                parameter can be used.
        */

    public:
        GetSharedLinkMetadataArg(){};

        GetSharedLinkMetadataArg(const QString& arg){ m_url = arg; };

    public:
        ///URL of the shared link.
        QString url()const{return m_url;};
        GetSharedLinkMetadataArg& setUrl(const QString& arg){m_url=arg; return *this;};

        ///If the shared link is to a folder, this parameter can be used to retrieve the metadata for a specific file or sub-folder in this folder. A relative path should be used.
        QString path()const{return m_path;};
        GetSharedLinkMetadataArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///If the shared link has a password, this parameter can be used.
        QString linkPassword()const{return m_link_password;};
        GetSharedLinkMetadataArg& setLinkpassword(const QString& arg){m_link_password=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetSharedLinkMetadataArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///URL of the shared link.
        QString m_url;

        ///If the shared link is to a folder, this parameter can be used to retrieve the metadata for a specific file or sub-folder in this folder. A relative path should be used.
        QString m_path;

        ///If the shared link has a password, this parameter can be used.
        QString m_link_password;

    };//GetSharedLinkMetadataArg

}//sharing
}//dropboxQt
