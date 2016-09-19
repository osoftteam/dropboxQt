/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class SaveUrlArg{
        /**
            field: path: The path in Dropbox where the URL will be saved to.
            field: url: The URL to be saved.
        */

    public:
        SaveUrlArg(){};

        SaveUrlArg(const QString& arg){ m_path = arg; };

    public:
        ///The path in Dropbox where the URL will be saved to.
        QString path()const{return m_path;};
        const SaveUrlArg& setPath(const QString& arg){m_path=arg; return *this;};

        ///The URL to be saved.
        QString url()const{return m_url;};
        const SaveUrlArg& setUrl(const QString& arg){m_url=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static SaveUrlArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path in Dropbox where the URL will be saved to.
        QString m_path;

        ///The URL to be saved.
        QString m_url;

    };//SaveUrlArg

}//files
}//dropboxQt
