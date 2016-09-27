/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class PreviewArg{
        /**
            field: path: The path of the file to preview.
            field: rev: Deprecated. Please specify revision in ``path`` instead
        */

    public:
        PreviewArg(){};

        PreviewArg(const QString& arg){ m_path = arg; };

    public:
        ///The path of the file to preview.
        QString path()const{return m_path;};
        PreviewArg& setPath(const QString& arg){m_path=arg;return *this;};

        ///Deprecated. Please specify revision in :field:`path` instead
        QString rev()const{return m_rev;};
        PreviewArg& setRev(const QString& arg){m_rev=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<PreviewArg>  create(const QByteArray& data);
            static std::unique_ptr<PreviewArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static PreviewArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path of the file to preview.
        QString m_path;

        ///Deprecated. Please specify revision in :field:`path` instead
        QString m_rev;

    };//PreviewArg

}//files
}//dropboxQt
