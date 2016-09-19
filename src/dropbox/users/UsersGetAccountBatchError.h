/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class GetAccountBatchError{
        /**
            field: no_account: The value is an account ID specified in
                ``GetAccountBatchArg.account_ids`` that does not exist.
        */
    public:
        enum Tag{

		/*The value is an account ID specified in :field:`GetAccountBatchArg.account_ids` that does not exist.*/
		GetAccountBatchError_NO_ACCOUNT,
		/*None*/
		GetAccountBatchError_OTHER
        };

        GetAccountBatchError(){}
        GetAccountBatchError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The value is an account ID specified in :field:`GetAccountBatchArg.account_ids` that does not exist.
        QString getNoAccount()const{DBOX_CHECK_STATE((GetAccountBatchError_NO_ACCOUNT == m_tag), "expected tag: GetAccountBatchError_NO_ACCOUNT", m_tag);return m_no_account;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetAccountBatchError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        QString m_no_account;
    };//GetAccountBatchError

}//users
}//dropboxQt
