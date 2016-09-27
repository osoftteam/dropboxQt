/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace auth{
    class RateLimitReason{
        /**
            field: too_many_requests: You are making too many requests in the
                past few minutes.
            field: too_many_write_operations: There are currently too many write
                operations happening in the user's Dropbox.
        */
    public:
        enum Tag{

		/*You are making too many requests in the past few minutes.*/
		RateLimitReason_TOO_MANY_REQUESTS,
		/*There are currently too many write operations happening in the user's Dropbox.*/
		RateLimitReason_TOO_MANY_WRITE_OPERATIONS,
		/*None*/
		RateLimitReason_OTHER
        };

        RateLimitReason(){}
        RateLimitReason(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<RateLimitReason>  create(const QByteArray& data);
            static std::unique_ptr<RateLimitReason>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static RateLimitReason EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//RateLimitReason

}//auth
}//dropboxQt
