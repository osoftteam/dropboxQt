/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace files{
    class GetTemporaryLinkArg{
        /**
            field: path: The path to the file you want a temporary link to.
        */

    public:
        GetTemporaryLinkArg(){};

        GetTemporaryLinkArg(const QString& arg){ m_path = arg; };

    public:
        ///The path to the file you want a temporary link to.
        QString path()const{return m_path;};
        GetTemporaryLinkArg& setPath(const QString& arg){m_path=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GetTemporaryLinkArg>  create(const QByteArray& data);
            static std::unique_ptr<GetTemporaryLinkArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GetTemporaryLinkArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The path to the file you want a temporary link to.
        QString m_path;

    };//GetTemporaryLinkArg

}//files
}//dropboxQt
