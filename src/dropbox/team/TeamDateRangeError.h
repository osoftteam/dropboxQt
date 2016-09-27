/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class DateRangeError{
        /**
            Errors that can originate from problems in input arguments to
            reports.
        */
    public:
        enum Tag{

		/*None*/
		DateRangeError_OTHER
        };

        DateRangeError(){}
        DateRangeError(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        virtual void fromJson(const QJsonObject& js);
        virtual void toJson(QJsonObject& js, QString name)const;
        virtual QString toString(bool multiline = true)const;


        class factory{
        public:
            static std::unique_ptr<DateRangeError>  create(const QByteArray& data);
            static std::unique_ptr<DateRangeError>  create(const QJsonObject& js);
        };


        #ifdef DROPBOX_QT_AUTOTEST
        static DateRangeError EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//DateRangeError

}//team
}//dropboxQt
