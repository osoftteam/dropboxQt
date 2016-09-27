/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class GetAccountError{
        /**
            field: no_account: The specified ``GetAccountArg.account_id`` does
                not exist.
        */
    public:
        enum Tag{

		/*The specified :field:`GetAccountArg.account_id` does not exist.*/
		GetAccountError_NO_ACCOUNT,
		/*None*/
		GetAccountError_OTHER
        };

        GetAccountError(){}
        GetAccountError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<GetAccountError>  create(const QByteArray& data);
            static std::unique_ptr<GetAccountError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static GetAccountError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//GetAccountError

}//users
}//dropboxQt
