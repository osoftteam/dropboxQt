/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class GetAccountArg{
        /**
            field: account_id: A user's account identifier.
        */

    public:
        GetAccountArg(){};

        GetAccountArg(const QString& arg){ m_account_id = arg; };

    public:
        ///A user's account identifier.
        QString accountId()const{return m_account_id;};
        GetAccountArg& setAccountid(const QString& arg){m_account_id=arg;return *this;};

    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GetAccountArg>  create(const QByteArray& data);
            static std::unique_ptr<GetAccountArg>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GetAccountArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///A user's account identifier.
        QString m_account_id;

    };//GetAccountArg

}//users
}//dropboxQt
