/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class RestoreArg{
        /**
            field: path: The path to the file you want to restore.
            field: rev: The revision to restore for the file.
        */

    public:
        RestoreArg(){};

        RestoreArg(const QString& arg){ m_path = arg; };

    public:
        ///The path to the file you want to restore.
        QString path()const{return m_path;};
        RestoreArg& setPath(const QString& arg){m_path=arg;return *this;};

        ///The revision to restore for the file.
        QString rev()const{return m_rev;};
        RestoreArg& setRev(const QString& arg){m_rev=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RestoreArg>  create(const QByteArray& data);
            static std::unique_ptr<RestoreArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RestoreArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the file you want to restore.
        QString m_path;

        ///The revision to restore for the file.
        QString m_rev;

    };//RestoreArg

}//files
}//dropboxQt
