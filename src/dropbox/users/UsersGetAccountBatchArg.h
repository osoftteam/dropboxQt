/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class GetAccountBatchArg{
        /**
            field: account_ids: List of user account identifiers.  Should not
                contain any duplicate account IDs.
        */

    public:
        GetAccountBatchArg(){};

        GetAccountBatchArg(const std::list <QString>&& arg){ m_account_ids = arg; };

    public:
        ///List of user account identifiers.  Should not contain any duplicate account IDs.
        const std::list <QString>& accountIds()const{return m_account_ids;};
        GetAccountBatchArg& setAccountids(const std::list <QString>&& arg){m_account_ids=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetAccountBatchArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///List of user account identifiers.  Should not contain any duplicate account IDs.
        std::list <QString> m_account_ids;

    };//GetAccountBatchArg

}//users
}//dropboxQt
